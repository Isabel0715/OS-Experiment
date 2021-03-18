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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTableWidget *table_free;
    QTableWidget *table_mem;
    QPushButton *require;
    QPushButton *reap;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1232, 607);
        Widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 242, 216)"));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 30, 911, 61));
        textBrowser->setStyleSheet(QLatin1String("background-color:transparent;\n"
"border:0px;"));
        textBrowser_2 = new QTextBrowser(Widget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 110, 581, 41));
        textBrowser_2->setStyleSheet(QLatin1String("background-color:transparent;\n"
"border:0px;"));
        table_free = new QTableWidget(Widget);
        if (table_free->columnCount() < 4)
            table_free->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_free->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_free->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_free->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_free->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_free->setObjectName(QStringLiteral("table_free"));
        table_free->setGeometry(QRect(710, 170, 511, 401));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        table_free->setFont(font);
        table_free->horizontalHeader()->setCascadingSectionResizes(true);
        table_mem = new QTableWidget(Widget);
        if (table_mem->columnCount() < 6)
            table_mem->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_mem->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_mem->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_mem->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_mem->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_mem->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_mem->setHorizontalHeaderItem(5, __qtablewidgetitem9);
        table_mem->setObjectName(QStringLiteral("table_mem"));
        table_mem->setGeometry(QRect(20, 170, 671, 401));
        table_mem->setFont(font);
        table_mem->horizontalHeader()->setCascadingSectionResizes(true);
        table_mem->horizontalHeader()->setDefaultSectionSize(110);
        require = new QPushButton(Widget);
        require->setObjectName(QStringLiteral("require"));
        require->setGeometry(QRect(920, 110, 121, 31));
        QFont font1;
        font1.setPointSize(12);
        require->setFont(font1);
        reap = new QPushButton(Widget);
        reap->setObjectName(QStringLiteral("reap"));
        reap->setGeometry(QRect(1080, 110, 121, 31));
        reap->setFont(font1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\345\256\236\344\271\240\344\272\214 \344\270\273\345\255\230\347\251\272\351\227\264\347\232\204\345\210\206\351\205\215\344\270\216\345\233\236\346\224\266\342\200\224\342\200\224\351\246\226\346\254\241\351\200\202\345\272\224\347\256\227\346\263\225</span></p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\345\274\230\346\257\205\345\255\246\345\240\202 2018300003004 \351\255\217\347\221\204</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = table_free->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\251\272\351\227\262\345\210\206\345\214\272\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = table_free->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\350\265\267\345\247\213\345\234\260\345\235\200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = table_free->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\351\225\277\345\272\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = table_free->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "\347\273\223\346\235\237\345\234\260\345\235\200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = table_mem->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "\345\210\206\345\214\272\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = table_mem->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "\350\265\267\345\247\213\345\234\260\345\235\200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = table_mem->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Widget", "\351\225\277\345\272\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = table_mem->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("Widget", "\347\273\223\346\235\237\345\234\260\345\235\200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = table_mem->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("Widget", "\345\210\206\345\214\272\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = table_mem->horizontalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("Widget", "\346\211\200\345\261\236\344\275\234\344\270\232ID", Q_NULLPTR));
        require->setText(QApplication::translate("Widget", "\350\243\205\345\205\245\344\275\234\344\270\232", Q_NULLPTR));
        reap->setText(QApplication::translate("Widget", "\351\207\212\346\224\276\344\275\234\344\270\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
