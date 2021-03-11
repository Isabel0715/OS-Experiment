/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QLabel *label_1;
    QLineEdit *priorityReduced;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *runnningTime;
    QPushButton *scheduleBtn;
    QPushButton *pushButton_2;
    QTableWidget *table;
    QTextBrowser *textBrowser_8;
    QLineEdit *runningName;
    QLineEdit *runningID;
    QLineEdit *countDown;
    QLineEdit *runningPri;
    QLineEdit *runningTimeRequired;
    QLineEdit *runningTimeLeft;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1232, 607);
        MainWindow->setContextMenuPolicy(Qt::PreventContextMenu);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 242, 216)"));
        textBrowser = new QTextBrowser(MainWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 40, 741, 61));
        textBrowser->setStyleSheet(QLatin1String("background-color:transparent;\n"
"border:0px;"));
        textBrowser_2 = new QTextBrowser(MainWindow);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(620, 50, 581, 41));
        textBrowser_2->setStyleSheet(QLatin1String("background-color:transparent;\n"
"border:0px;"));
        label_2 = new QLabel(MainWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(800, 490, 341, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        label_1 = new QLabel(MainWindow);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(800, 450, 341, 31));
        label_1->setFont(font);
        label_1->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        label_1->setLineWidth(1);
        priorityReduced = new QLineEdit(MainWindow);
        priorityReduced->setObjectName(QStringLiteral("priorityReduced"));
        priorityReduced->setGeometry(QRect(1130, 450, 91, 31));
        label = new QLabel(MainWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(800, 120, 231, 41));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("font-size: 22px;\n"
"background-color: transparent;"));
        label_3 = new QLabel(MainWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(800, 220, 81, 31));
        label_3->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        label_4 = new QLabel(MainWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(800, 260, 81, 31));
        label_4->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        label_5 = new QLabel(MainWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(800, 300, 121, 31));
        label_5->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        label_6 = new QLabel(MainWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(800, 340, 141, 31));
        label_6->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        label_7 = new QLabel(MainWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(800, 380, 181, 31));
        label_7->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        runnningTime = new QLineEdit(MainWindow);
        runnningTime->setObjectName(QStringLiteral("runnningTime"));
        runnningTime->setGeometry(QRect(1130, 490, 91, 31));
        scheduleBtn = new QPushButton(MainWindow);
        scheduleBtn->setObjectName(QStringLiteral("scheduleBtn"));
        scheduleBtn->setGeometry(QRect(1130, 537, 91, 31));
        pushButton_2 = new QPushButton(MainWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 130, 101, 31));
        table = new QTableWidget(MainWindow);
        if (table->columnCount() < 6)
            table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        table->setObjectName(QStringLiteral("table"));
        table->setGeometry(QRect(20, 180, 771, 351));
        table->setFont(font);
        table->horizontalHeader()->setCascadingSectionResizes(true);
        textBrowser_8 = new QTextBrowser(MainWindow);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(800, 180, 181, 41));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser_8->sizePolicy().hasHeightForWidth());
        textBrowser_8->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        textBrowser_8->setFont(font1);
        textBrowser_8->setStyleSheet(QLatin1String("font-size: 22px;\n"
"background-color: transparent;\n"
"border:0px;"));
        runningName = new QLineEdit(MainWindow);
        runningName->setObjectName(QStringLiteral("runningName"));
        runningName->setGeometry(QRect(1080, 220, 141, 31));
        runningName->setAlignment(Qt::AlignCenter);
        runningName->setReadOnly(true);
        runningID = new QLineEdit(MainWindow);
        runningID->setObjectName(QStringLiteral("runningID"));
        runningID->setGeometry(QRect(1080, 260, 141, 31));
        runningID->setAlignment(Qt::AlignCenter);
        runningID->setReadOnly(true);
        countDown = new QLineEdit(MainWindow);
        countDown->setObjectName(QStringLiteral("countDown"));
        countDown->setGeometry(QRect(1080, 180, 141, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        countDown->setFont(font2);
        countDown->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border:0px;\n"
"\n"
""));
        countDown->setAlignment(Qt::AlignCenter);
        countDown->setReadOnly(true);
        runningPri = new QLineEdit(MainWindow);
        runningPri->setObjectName(QStringLiteral("runningPri"));
        runningPri->setGeometry(QRect(1080, 300, 141, 31));
        runningPri->setAlignment(Qt::AlignCenter);
        runningPri->setReadOnly(true);
        runningTimeRequired = new QLineEdit(MainWindow);
        runningTimeRequired->setObjectName(QStringLiteral("runningTimeRequired"));
        runningTimeRequired->setGeometry(QRect(1080, 340, 141, 31));
        runningTimeRequired->setAlignment(Qt::AlignCenter);
        runningTimeRequired->setReadOnly(true);
        runningTimeLeft = new QLineEdit(MainWindow);
        runningTimeLeft->setObjectName(QStringLiteral("runningTimeLeft"));
        runningTimeLeft->setGeometry(QRect(1080, 380, 141, 31));
        runningTimeLeft->setAlignment(Qt::AlignCenter);
        runningTimeLeft->setReadOnly(true);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\345\256\236\344\271\240\344\270\200 \345\244\204\347\220\206\345\231\250\350\260\203\345\272\246\342\200\224\342\200\224\344\274\230\345\205\210\346\225\260\350\260\203\345\272\246\347\256\227\346\263\225</span></p></body></html>", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\345\274\230\346\257\205\345\255\246\345\240\202 2018300003004 \351\255\217\347\221\204</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\277\220\350\241\214\345\220\216\346\234\237\346\234\233\345\207\217\345\260\221\347\232\204\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_1->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\277\220\350\241\214\345\220\216\346\234\237\346\234\233\345\207\217\345\260\221\347\232\204\344\274\230\345\205\210\346\225\260\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\350\277\220\350\241\214\350\277\233\347\250\213\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\213\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\213id\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\344\274\230\345\205\210\346\225\260\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\350\246\201\346\261\202\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\346\211\200\351\234\200\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        scheduleBtn->setText(QApplication::translate("MainWindow", "\350\260\203\345\272\246", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\277\233\347\250\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "pid", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\213\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\350\246\201\346\261\202\350\277\220\350\241\214\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\350\277\220\350\241\214\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\344\274\230\345\205\210\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\347\212\266\346\200\201", Q_NULLPTR));
        textBrowser_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:22px; font-weight:600; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-style:normal;\">\350\277\220\350\241\214\345\200\222\350\256\241\346\227\266\357\274\232</span></p></body></html>", Q_NULLPTR));
        runningPri->setText(QString());
        runningTimeRequired->setText(QString());
        runningTimeLeft->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
