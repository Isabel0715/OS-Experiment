/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser;
    QLabel *label;
    QTableWidget *ProducerPCB;
    QLabel *label_2;
    QTableWidget *ConsumerPCB;
    QTableWidget *InsProduer;
    QTableWidget *InsConsumer;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTextBrowser *s1;
    QTextBrowser *s2;
    QPushButton *pushButton_2;
    QTableWidget *productList;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1054, 620);
        Widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 242, 216)"));
        textBrowser_2 = new QTextBrowser(Widget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(570, 30, 411, 41));
        textBrowser_2->setStyleSheet(QLatin1String("background-color:transparent;\n"
"border:0px;"));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 20, 421, 61));
        textBrowser->setStyleSheet(QLatin1String("background-color:transparent;\n"
"border:0px;"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 360, 191, 31));
        label->setStyleSheet(QStringLiteral("font-size: 20px;"));
        ProducerPCB = new QTableWidget(Widget);
        if (ProducerPCB->columnCount() < 1)
            ProducerPCB->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ProducerPCB->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (ProducerPCB->rowCount() < 4)
            ProducerPCB->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ProducerPCB->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ProducerPCB->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ProducerPCB->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ProducerPCB->setVerticalHeaderItem(3, __qtablewidgetitem4);
        ProducerPCB->setObjectName(QStringLiteral("ProducerPCB"));
        ProducerPCB->setGeometry(QRect(50, 400, 201, 181));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        ProducerPCB->setFont(font);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 360, 191, 31));
        label_2->setStyleSheet(QStringLiteral("font-size: 20px;"));
        ConsumerPCB = new QTableWidget(Widget);
        if (ConsumerPCB->columnCount() < 1)
            ConsumerPCB->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ConsumerPCB->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        if (ConsumerPCB->rowCount() < 4)
            ConsumerPCB->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ConsumerPCB->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ConsumerPCB->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ConsumerPCB->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ConsumerPCB->setVerticalHeaderItem(3, __qtablewidgetitem9);
        ConsumerPCB->setObjectName(QStringLiteral("ConsumerPCB"));
        ConsumerPCB->setGeometry(QRect(280, 400, 201, 181));
        ConsumerPCB->setFont(font);
        InsProduer = new QTableWidget(Widget);
        if (InsProduer->columnCount() < 2)
            InsProduer->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        InsProduer->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        InsProduer->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        if (InsProduer->rowCount() < 5)
            InsProduer->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        InsProduer->setVerticalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        InsProduer->setVerticalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        InsProduer->setVerticalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        InsProduer->setVerticalHeaderItem(3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        InsProduer->setVerticalHeaderItem(4, __qtablewidgetitem16);
        InsProduer->setObjectName(QStringLiteral("InsProduer"));
        InsProduer->setGeometry(QRect(40, 120, 431, 231));
        InsProduer->horizontalHeader()->setDefaultSectionSize(200);
        InsConsumer = new QTableWidget(Widget);
        if (InsConsumer->columnCount() < 2)
            InsConsumer->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        InsConsumer->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        InsConsumer->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        if (InsConsumer->rowCount() < 5)
            InsConsumer->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        InsConsumer->setVerticalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        InsConsumer->setVerticalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        InsConsumer->setVerticalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        InsConsumer->setVerticalHeaderItem(3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        InsConsumer->setVerticalHeaderItem(4, __qtablewidgetitem23);
        InsConsumer->setObjectName(QStringLiteral("InsConsumer"));
        InsConsumer->setGeometry(QRect(560, 120, 431, 231));
        InsConsumer->horizontalHeader()->setDefaultSectionSize(200);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 460, 91, 31));
        QFont font1;
        font1.setPointSize(11);
        pushButton->setFont(font1);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 80, 191, 31));
        QFont font2;
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("font-size: 24px;"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(570, 80, 191, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("font-size: 24px;"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(570, 490, 71, 41));
        label_5->setStyleSheet(QStringLiteral("font-size:24px"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(570, 540, 71, 41));
        label_6->setStyleSheet(QStringLiteral("font-size:24px"));
        s1 = new QTextBrowser(Widget);
        s1->setObjectName(QStringLiteral("s1"));
        s1->setGeometry(QRect(640, 500, 111, 31));
        s2 = new QTextBrowser(Widget);
        s2->setObjectName(QStringLiteral("s2"));
        s2->setGeometry(QRect(640, 550, 111, 31));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(790, 550, 91, 31));
        pushButton_2->setFont(font1);
        productList = new QTableWidget(Widget);
        if (productList->columnCount() < 10)
            productList->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(7, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(8, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        productList->setHorizontalHeaderItem(9, __qtablewidgetitem33);
        if (productList->rowCount() < 1)
            productList->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        productList->setVerticalHeaderItem(0, __qtablewidgetitem34);
        productList->setObjectName(QStringLiteral("productList"));
        productList->setGeometry(QRect(560, 370, 461, 81));
        productList->horizontalHeader()->setDefaultSectionSize(40);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(790, 500, 91, 31));
        QFont font3;
        font3.setPointSize(10);
        pushButton_3->setFont(font3);
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(910, 500, 91, 31));
        pushButton_4->setFont(font3);
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(910, 550, 91, 31));
        pushButton_5->setFont(font1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\345\274\230\346\257\205\345\255\246\345\240\202 2018300003004 \351\255\217\347\221\204</span></p></body></html>", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\345\256\236\344\271\240\344\270\211 \350\277\233\347\250\213\345\220\214\346\255\245</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "PCB of Producer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = ProducerPCB->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\345\206\205\345\256\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = ProducerPCB->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\350\277\233\347\250\213\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = ProducerPCB->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = ProducerPCB->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "\347\255\211\345\276\205\345\216\237\345\233\240", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = ProducerPCB->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "\346\226\255\347\202\271", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "PCB of Consumer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = ConsumerPCB->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "\345\206\205\345\256\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = ConsumerPCB->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("Widget", "\350\277\233\347\250\213\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = ConsumerPCB->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("Widget", "\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = ConsumerPCB->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("Widget", "\347\255\211\345\276\205\345\216\237\345\233\240", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = ConsumerPCB->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("Widget", "\346\226\255\347\202\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = InsProduer->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("Widget", "\346\214\207\344\273\244\345\206\205\345\256\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = InsProduer->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("Widget", "\350\257\264\346\230\216", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = InsProduer->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = InsProduer->verticalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = InsProduer->verticalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = InsProduer->verticalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = InsProduer->verticalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = InsConsumer->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("Widget", "\346\214\207\344\273\244\345\206\205\345\256\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = InsConsumer->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("Widget", "\350\257\264\346\230\216", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = InsConsumer->verticalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = InsConsumer->verticalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = InsConsumer->verticalHeaderItem(2);
        ___qtablewidgetitem21->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = InsConsumer->verticalHeaderItem(3);
        ___qtablewidgetitem22->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = InsConsumer->verticalHeaderItem(4);
        ___qtablewidgetitem23->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\351\232\217\346\234\272\350\260\203\345\272\246", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "Producer:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "Consumer:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "S1:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "S2:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\347\273\223\346\235\237\347\224\237\344\272\247", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = productList->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = productList->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = productList->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = productList->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = productList->horizontalHeaderItem(4);
        ___qtablewidgetitem28->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = productList->horizontalHeaderItem(5);
        ___qtablewidgetitem29->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = productList->horizontalHeaderItem(6);
        ___qtablewidgetitem30->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = productList->horizontalHeaderItem(7);
        ___qtablewidgetitem31->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = productList->horizontalHeaderItem(8);
        ___qtablewidgetitem32->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = productList->horizontalHeaderItem(9);
        ___qtablewidgetitem33->setText(QApplication::translate("Widget", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = productList->verticalHeaderItem(0);
        ___qtablewidgetitem34->setText(QApplication::translate("Widget", "\344\272\247\345\223\201", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\350\260\203\345\272\246\347\224\237\344\272\247\350\200\205", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "\350\260\203\345\272\246\346\266\210\350\264\271\350\200\205", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "\347\273\223\346\235\237\346\266\210\350\264\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
