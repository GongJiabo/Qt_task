/********************************************************************************
** Form generated from reading UI file 'udp2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDP2_H
#define UI_UDP2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_udp2
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *myPort;
    QLabel *label_2;
    QLineEdit *toPort;
    QLabel *label_3;
    QLineEdit *toIp;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QTextEdit *record;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QTextEdit *input;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *send;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *udp2)
    {
        if (udp2->objectName().isEmpty())
            udp2->setObjectName(QString::fromUtf8("udp2"));
        udp2->resize(394, 498);
        verticalLayout_3 = new QVBoxLayout(udp2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(udp2);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        myPort = new QLineEdit(widget);
        myPort->setObjectName(QString::fromUtf8("myPort"));

        gridLayout->addWidget(myPort, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        toPort = new QLineEdit(widget);
        toPort->setObjectName(QString::fromUtf8("toPort"));

        gridLayout->addWidget(toPort, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        toIp = new QLineEdit(widget);
        toIp->setObjectName(QString::fromUtf8("toIp"));

        gridLayout->addWidget(toIp, 2, 1, 1, 1);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(udp2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        record = new QTextEdit(widget_2);
        record->setObjectName(QString::fromUtf8("record"));
        record->setReadOnly(true);

        verticalLayout->addWidget(record);


        verticalLayout_3->addWidget(widget_2);

        widget_3 = new QWidget(udp2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        input = new QTextEdit(widget_3);
        input->setObjectName(QString::fromUtf8("input"));

        verticalLayout_2->addWidget(input);


        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(udp2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        send = new QPushButton(widget_4);
        send->setObjectName(QString::fromUtf8("send"));

        horizontalLayout->addWidget(send);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget_4);


        retranslateUi(udp2);

        QMetaObject::connectSlotsByName(udp2);
    } // setupUi

    void retranslateUi(QWidget *udp2)
    {
        udp2->setWindowTitle(QApplication::translate("udp2", "Form", nullptr));
        label->setText(QApplication::translate("udp2", "MyPort:", nullptr));
        label_2->setText(QApplication::translate("udp2", "ToPort:", nullptr));
        label_3->setText(QApplication::translate("udp2", "ToIp:", nullptr));
        label_4->setText(QApplication::translate("udp2", "\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
        label_5->setText(QApplication::translate("udp2", "\350\276\223\345\205\245\345\206\205\345\256\271", nullptr));
        send->setText(QApplication::translate("udp2", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class udp2: public Ui_udp2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDP2_H
