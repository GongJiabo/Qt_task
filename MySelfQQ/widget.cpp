#include "widget.h"
#include "ui_widget.h"
#include <QDataStream>
#include <QMessageBox>
#include <QDateTime>
#include <QFontComboBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>


Widget::Widget(QWidget *parent, QString name) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    udpSocket = new QUdpSocket(this);

    //用户名获取
    uName = name;

    //端口号
    this->port = 9999;

    //绑定端口号 绑定模式 共享地址，断线重连
    udpSocket->bind(this->port,QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);

    //发送新用户进入
    sndMsg(UsrEnter);

    //点击发送按钮 发送消息
    connect(ui->sendBtn, &QPushButton::clicked,[=](){
       sndMsg(Msg);
    });

    //监听别人发送的数据
    connect(udpSocket, &QUdpSocket::readyRead, this, &Widget::ReceiveMessage);

    //点击退出按钮 实现关闭窗口
    connect(ui->exitBtn, &QPushButton::clicked,[=](){
       this->close();
    });

    //辅助功能
    //字体
    connect(ui->fontCbx, &QFontComboBox::currentFontChanged, [=](const QFont &font){
        ui->msgTxtEdit->setCurrentFont(font);
        ui->msgTxtEdit->setFocus();
    });
    //字号
    void(QComboBox:: *cbxsingal)(const QString &text) =  &QComboBox::currentIndexChanged;
    connect(ui->sizeCbx,cbxsingal,[=](const QString &text){
        ui->msgTxtEdit->setFontPointSize(text.toDouble());
        ui->msgBrowser->setFocus();
    });
    //加粗
    connect(ui->boldTBtn, &QToolButton::clicked,[=](bool isCheck){
        if(isCheck)
            ui->msgTxtEdit->setFontWeight(QFont::Bold);
        else
            ui->msgTxtEdit->setFontWeight(QFont::Normal);
    });
    //倾斜
    connect(ui->italicTBtn, &QToolButton::clicked,[=](bool check){
       ui->msgTxtEdit->setFontItalic(check);
    });
    //下划线
    connect(ui->underlineTBtn, &QToolButton::clicked,[=](bool check){
       ui->msgTxtEdit->setFontUnderline(check);
    });
    //字体颜色
    connect(ui->colorTBtn,&QToolButton::clicked,[=](){
        QColor color = QColorDialog::getColor(Qt::red);
        ui->msgTxtEdit->setTextColor(color);
    });
    //保存聊天记录
    connect(ui->saveTBtn,&QToolButton::clicked,[=](){
        //判断记录是否为空
        if(ui->msgBrowser->document()->isEmpty())
        {
            QMessageBox::warning(this,"警告","记录不能为空");
            return;
        }
        else
        {
            QString path = QFileDialog::getSaveFileName(this,"保存记录","聊天记录","(*.txt)");
            if(path.isEmpty())
            {
                QMessageBox::warning(this,"警告","路径不能为空");
                return;
            }
            else
            {
                QFile file(path);
                //用文本流保存数据
                //打开模式加换行操作
                file.open(QIODevice::WriteOnly | QIODevice::Text);
                QTextStream stream(&file);
                stream << ui->msgBrowser->toPlainText();
                file.close();
            }

        }
    });

    //清空聊天记录
    connect(ui->clearTBtn,&QToolButton::clicked,[=](){
       ui->msgBrowser->clear();
    });
}

void Widget::ReceiveMessage()
{
    //拿到数据报文
    //获取长度
    qint64 size = udpSocket->pendingDatagramSize();
    QByteArray array = QByteArray(size, 0);
    udpSocket->readDatagram(array.data(), size);

    //解析数据
    //第一段：类型；第二段：用户名；第三段：内容数据
    QDataStream stream(&array, QIODevice::ReadOnly);
    int msgType;
    QString usrName;
    QString msg;
    //或许当前时间
    QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    stream >> msgType;      //读取到类型

    switch(msgType){
    //普通聊天
    case Msg:
        stream >> usrName >> msg;
        //追加聊天记录
        ui->msgBrowser->setTextColor(Qt::blue);
        ui->msgBrowser->append("[" + usrName + "]" + time);
        ui->msgBrowser->append(msg);
        break;

     case UsrEnter:
        stream >> usrName;
        usrEnter(usrName);
        break;
     case UsrLeft:
        stream >> usrName;
        usrLeft(usrName, time);
        break;

    }
}//接收UDP消息

void Widget::sndMsg(MsgType type)
{
    // 发送的消息分为三种类型
    // 发送的数据做分段处理
    // 第一段：类型；第二段：用户名；第三段：具体内容

    QByteArray array;

    QDataStream stream(&array,QIODevice::WriteOnly);

    stream << type << getUsr();     //第一段内容添加到流中 第二段用户名
    switch (type)
    {
        // 普通消息发送
        case Msg:
            // 判断消息是否为空
            if(ui->msgTxtEdit->toPlainText() == "")
            {
               QMessageBox::warning(this,"警告","发送内容不能为空！");
               return;
            }
            // 第三段数据
            stream << getMsg();
            break;

        // 新用户进入消息
        case UsrEnter:
            break;

        // 用户离开消息
        case UsrLeft:
            break;

    }
    // 书写报文 广播发送
    udpSocket->writeDatagram(array,QHostAddress::Broadcast,port);

}//广播UDP消息

void Widget::usrEnter(QString usrName)
{
    //更新右侧的TableWidget
    bool isEmpty = ui->usrTblWidget->findItems(usrName,Qt::MatchExactly).isEmpty();
    if(isEmpty)
    {
        QTableWidgetItem *usr = new QTableWidgetItem(usrName);
        //插入一行
        ui->usrTblWidget->insertRow(0);
        ui->usrTblWidget->setItem(0,0,usr);

        //追加聊天记录
        ui->msgBrowser->setTextColor(Qt::gray);
        ui->msgBrowser->append(QString("%1 上线了").arg(usrName));

        //在线人数更新
        ui->usrNumLbl->setText(QString("在线用户： %1人").arg(ui->usrTblWidget->rowCount()));

        //把自身的信息广播出去
        sndMsg(UsrEnter);
    }
}//处理新用户加入

void Widget::usrLeft(QString usrname,QString time)
{
    //更新右侧tablewidget
    bool isEmpty = ui->usrTblWidget->findItems(usrname, Qt::MatchExactly).empty();
    if(!isEmpty)
    {
        int row = ui->usrTblWidget->findItems(usrname, Qt::MatchExactly).first()->row();
        ui->usrTblWidget->removeRow(row);
        //追加聊天记录
        ui->msgBrowser->setTextColor(Qt::gray);
        ui->msgBrowser->append(QString("%1 于 %2 离开").arg(usrname).arg(time));
        //在线人数更新
        ui->usrNumLbl->setText(QString("在线用户： %1人").arg(ui->usrTblWidget->rowCount()));
    }

}//处理用户离开

QString Widget::getUsr()
{
    return this->uName;
}


QString Widget::getMsg()
{
    QString str = ui->msgTxtEdit->toHtml();
    //清空输入框
    ui->msgTxtEdit->clear();
    ui->msgTxtEdit->setFocus();
    return str;
}//或许聊天信息


void Widget::closeEvent(QCloseEvent *e)
{
    emit this->closeWidget();
    sndMsg(UsrLeft);
    //断开套接字
    udpSocket->close();
    udpSocket->destroyed();

    QWidget::closeEvent(e);
}


Widget::~Widget()
{
    delete ui;
}


