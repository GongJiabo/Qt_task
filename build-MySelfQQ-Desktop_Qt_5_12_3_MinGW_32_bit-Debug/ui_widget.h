/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *msgBrowser;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QToolButton *boldTBtn;
    QToolButton *italicTBtn;
    QToolButton *underlineTBtn;
    QToolButton *colorTBtn;
    QToolButton *saveTBtn;
    QToolButton *clearTBtn;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *msgTxtEdit;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *usrTblWidget;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *usrNumLbl;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exitBtn;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(730, 450);
        verticalLayout_5 = new QVBoxLayout(Widget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_6 = new QWidget(Widget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_4 = new QVBoxLayout(widget_6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(widget_4);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Panel);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(frame_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        msgBrowser = new QTextBrowser(widget);
        msgBrowser->setObjectName(QString::fromUtf8("msgBrowser"));

        verticalLayout->addWidget(msgBrowser);


        verticalLayout_2->addWidget(widget);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        fontCbx = new QFontComboBox(frame_2);
        fontCbx->setObjectName(QString::fromUtf8("fontCbx"));

        horizontalLayout->addWidget(fontCbx);

        sizeCbx = new QComboBox(frame_2);
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->setObjectName(QString::fromUtf8("sizeCbx"));

        horizontalLayout->addWidget(sizeCbx);

        boldTBtn = new QToolButton(frame_2);
        boldTBtn->setObjectName(QString::fromUtf8("boldTBtn"));
        boldTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldTBtn->setIcon(icon);
        boldTBtn->setIconSize(QSize(26, 26));
        boldTBtn->setCheckable(true);

        horizontalLayout->addWidget(boldTBtn);

        italicTBtn = new QToolButton(frame_2);
        italicTBtn->setObjectName(QString::fromUtf8("italicTBtn"));
        italicTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicTBtn->setIcon(icon1);
        italicTBtn->setIconSize(QSize(26, 26));
        italicTBtn->setCheckable(true);

        horizontalLayout->addWidget(italicTBtn);

        underlineTBtn = new QToolButton(frame_2);
        underlineTBtn->setObjectName(QString::fromUtf8("underlineTBtn"));
        underlineTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineTBtn->setIcon(icon2);
        underlineTBtn->setIconSize(QSize(26, 26));
        underlineTBtn->setCheckable(true);

        horizontalLayout->addWidget(underlineTBtn);

        colorTBtn = new QToolButton(frame_2);
        colorTBtn->setObjectName(QString::fromUtf8("colorTBtn"));
        colorTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorTBtn->setIcon(icon3);
        colorTBtn->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(colorTBtn);

        saveTBtn = new QToolButton(frame_2);
        saveTBtn->setObjectName(QString::fromUtf8("saveTBtn"));
        saveTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTBtn->setIcon(icon4);
        saveTBtn->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(saveTBtn);

        clearTBtn = new QToolButton(frame_2);
        clearTBtn->setObjectName(QString::fromUtf8("clearTBtn"));
        clearTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTBtn->setIcon(icon5);
        clearTBtn->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(clearTBtn);


        verticalLayout_2->addWidget(frame_2);

        widget_2 = new QWidget(frame_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        msgTxtEdit = new QTextEdit(widget_2);
        msgTxtEdit->setObjectName(QString::fromUtf8("msgTxtEdit"));

        horizontalLayout_2->addWidget(msgTxtEdit);


        verticalLayout_2->addWidget(widget_2);


        horizontalLayout_3->addWidget(frame_3);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(120, 0));
        widget_3->setMaximumSize(QSize(200, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        usrTblWidget = new QTableWidget(widget_3);
        if (usrTblWidget->columnCount() < 1)
            usrTblWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        usrTblWidget->setObjectName(QString::fromUtf8("usrTblWidget"));
        usrTblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        usrTblWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(usrTblWidget);


        horizontalLayout_3->addWidget(widget_3);


        verticalLayout_4->addWidget(widget_4);

        frame_5 = new QFrame(widget_6);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        sendBtn = new QPushButton(frame_5);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));

        horizontalLayout_4->addWidget(sendBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        usrNumLbl = new QLabel(frame_5);
        usrNumLbl->setObjectName(QString::fromUtf8("usrNumLbl"));

        horizontalLayout_4->addWidget(usrNumLbl);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        exitBtn = new QPushButton(frame_5);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));

        horizontalLayout_4->addWidget(exitBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_4->addWidget(frame_5);


        verticalLayout_5->addWidget(widget_6);


        retranslateUi(Widget);

        sizeCbx->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        sizeCbx->setItemText(0, QApplication::translate("Widget", "8", nullptr));
        sizeCbx->setItemText(1, QApplication::translate("Widget", "9", nullptr));
        sizeCbx->setItemText(2, QApplication::translate("Widget", "10", nullptr));
        sizeCbx->setItemText(3, QApplication::translate("Widget", "11", nullptr));
        sizeCbx->setItemText(4, QApplication::translate("Widget", "12", nullptr));
        sizeCbx->setItemText(5, QApplication::translate("Widget", "13", nullptr));
        sizeCbx->setItemText(6, QApplication::translate("Widget", "14", nullptr));
        sizeCbx->setItemText(7, QApplication::translate("Widget", "15", nullptr));
        sizeCbx->setItemText(8, QApplication::translate("Widget", "16", nullptr));
        sizeCbx->setItemText(9, QApplication::translate("Widget", "17", nullptr));
        sizeCbx->setItemText(10, QApplication::translate("Widget", "18", nullptr));
        sizeCbx->setItemText(11, QApplication::translate("Widget", "19", nullptr));
        sizeCbx->setItemText(12, QApplication::translate("Widget", "20", nullptr));
        sizeCbx->setItemText(13, QApplication::translate("Widget", "21", nullptr));
        sizeCbx->setItemText(14, QApplication::translate("Widget", "22", nullptr));

#ifndef QT_NO_TOOLTIP
        boldTBtn->setToolTip(QApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
#endif // QT_NO_TOOLTIP
        boldTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        italicTBtn->setToolTip(QApplication::translate("Widget", "\345\200\276\346\226\234", nullptr));
#endif // QT_NO_TOOLTIP
        italicTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        underlineTBtn->setToolTip(QApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        underlineTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        colorTBtn->setToolTip(QApplication::translate("Widget", "\344\277\256\346\224\271\351\242\234\350\211\262", nullptr));
#endif // QT_NO_TOOLTIP
        colorTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        saveTBtn->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
#endif // QT_NO_TOOLTIP
        saveTBtn->setText(QApplication::translate("Widget", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        clearTBtn->setToolTip(QApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        clearTBtn->setText(QApplication::translate("Widget", "...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = usrTblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", nullptr));
        sendBtn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        usrNumLbl->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\2320\344\272\272", nullptr));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
