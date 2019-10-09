#ifndef UDP2_H
#define UDP2_H

#include <QWidget>
#include <QUdpSocket>
namespace Ui {
class udp2;
}

class udp2 : public QWidget
{
    Q_OBJECT

public:
    explicit udp2(QWidget *parent = nullptr);
    ~udp2();

private:
    Ui::udp2 *ui;

public:
    QUdpSocket *udp;
};

#endif // UDP2_H
