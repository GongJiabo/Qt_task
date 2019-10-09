#include "dialoglist.h"
#include "ui_dialoglist.h"
#include "widget.h"
#include <QToolButton>
#include <QVector>
#include <QMessageBox>

DialogList::DialogList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DialogList)
{
    ui->setupUi(this);
    // 设置标题
    setWindowTitle("QQ2019");
    // 设置图标
    setWindowIcon(QIcon(":/images/qq.png"));

    // 准备图标
    QList<QString>nameList;
    nameList << "斧头帮主" << "忆梦如澜" <<"北京出版人"<<"Cherry"<<"淡然"
             <<"娇娇girl"<<"落水无痕"<<"青墨暖暖"<<"无语";


    QStringList iconNameList; //图标资源列表
    iconNameList << "ftbz"<< "ymrl" <<"qq" <<"Cherry"<< "dr"
                 <<"jj"<<"lswh"<<"qmnn"<<"wy";

    QVector<QToolButton *> vToolButton;


    for(int i=0;i<9;i++)
    {
        QToolButton * btn = new QToolButton;
        // 设置文字，头像
        btn->setText(nameList[i]);
        QString str=QString(":/images/%1.png").arg(iconNameList.at(i));
        btn->setIcon(QPixmap(str));
        // 设置头像大小
        btn->setIconSize(QPixmap(":/images/ftbz.png").size());
        // 设置按钮风格 透明
        btn->setAutoRaise(true);
        // 设置文字和图片一起显示
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        // 加到垂直布局中
        ui->vLayout->addWidget(btn);
        // 将按钮存入容器，便于维护
        vToolButton.push_back(btn);
        // 九个标识的默认初始化（都未弹出）
        isShow.push_back(false);
    }

    //对九个按钮 进行添加信号槽
    for(int i=0;i<vToolButton.size();i++)
    {
        connect(vToolButton[i],&QToolButton::clicked,[=](){

            if(isShow[i])
            {
                QString str = QString("%1的窗口已经被打开了").arg(vToolButton[i]->text());
                QMessageBox::warning(this,"警告",str);
                return;
            };

            isShow[i]=true;

            // 弹出聊天对话框
            // 构造聊天窗口时 告诉这个窗口的名字
            // 注意！ widget构造函数并没有这样的两个参数
            Widget *widget = new Widget(nullptr,vToolButton[i]->text()); // 参数1为0：以顶层的方式弹出 参数2：窗口的名字
            // 设置窗口的标题
            widget->setWindowTitle(vToolButton[i]->text());
            widget->setWindowIcon(vToolButton[i]->icon());
            widget->show();

            connect(widget,&Widget::closeWidget,[=](){
               isShow[i]=false;
            });
        });
    }
}

DialogList::~DialogList()
{
    delete ui;
}
