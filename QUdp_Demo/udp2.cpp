#include "udp2.h"
#include "ui_udp2.h"

udp2::udp2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::udp2)
{
    ui->setupUi(this);

    //初始化属性
    ui->myPort->setText("9999");
    ui->toPort->setText("8888");
    ui->toIp->setText("127.0.0.1");

    //创建套接字
    udp = new QUdpSocket(this);

    //绑定自身端口号
    udp->bind(ui->myPort->text().toInt());

    //点击发送按钮，发送报文
    connect(ui->send,&QPushButton::clicked,[=](){
       udp->writeDatagram(ui->input->toPlainText().toUtf8(),QHostAddress(ui->toIp->text()),ui->toPort->text().toInt());
       ui->record->append("My saying: " + ui->input->toPlainText());
       //清空输入框
       ui->input->clear();
    });

    //接收数据端
    connect(udp,&QUdpSocket::readyRead,[=](){
        //获取报文长度
        qint64 size = udp->pendingDatagramSize();

        //读取报文
        QByteArray array = QByteArray(size,0);
        udp->readDatagram(array.data(), size);

        //将数据同步到聊天记录中
        ui->record->append(array);

    });

}

udp2::~udp2()
{
    delete ui;
}
