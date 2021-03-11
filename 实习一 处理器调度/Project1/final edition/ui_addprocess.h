/********************************************************************************
** Form generated from reading UI file 'addprocess.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROCESS_H
#define UI_ADDPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_addProcess
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *pid;
    QLineEdit *pName;
    QLineEdit *priority;
    QLineEdit *timeRequired;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addProcess)
    {
        if (addProcess->objectName().isEmpty())
            addProcess->setObjectName(QStringLiteral("addProcess"));
        addProcess->resize(455, 351);
        addProcess->setStyleSheet(QStringLiteral("background-color: rgb(255, 242, 216)"));
        textBrowser = new QTextBrowser(addProcess);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 20, 271, 61));
        textBrowser->setStyleSheet(QLatin1String("background: transparent;\n"
"border: 0;"));
        label = new QLabel(addProcess);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 90, 91, 31));
        label->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        label_2 = new QLabel(addProcess);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 130, 91, 31));
        label_2->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        label_3 = new QLabel(addProcess);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 170, 91, 31));
        label_3->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        label_4 = new QLabel(addProcess);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 210, 151, 31));
        label_4->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        pid = new QLineEdit(addProcess);
        pid->setObjectName(QStringLiteral("pid"));
        pid->setEnabled(true);
        pid->setGeometry(QRect(200, 90, 211, 31));
        pid->setStyleSheet(QLatin1String("border:0;\n"
"background-color:transparent;"));
        pid->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pid->setReadOnly(true);
        pName = new QLineEdit(addProcess);
        pName->setObjectName(QStringLiteral("pName"));
        pName->setGeometry(QRect(200, 130, 211, 31));
        priority = new QLineEdit(addProcess);
        priority->setObjectName(QStringLiteral("priority"));
        priority->setGeometry(QRect(200, 170, 211, 31));
        timeRequired = new QLineEdit(addProcess);
        timeRequired->setObjectName(QStringLiteral("timeRequired"));
        timeRequired->setGeometry(QRect(200, 210, 211, 31));
        pushButton = new QPushButton(addProcess);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 287, 101, 31));
        pushButton_2 = new QPushButton(addProcess);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(308, 287, 101, 31));

        retranslateUi(addProcess);

        QMetaObject::connectSlotsByName(addProcess);
    } // setupUi

    void retranslateUi(QDialog *addProcess)
    {
        addProcess->setWindowTitle(QApplication::translate("addProcess", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("addProcess", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt;\">\346\267\273\345\212\240\350\277\233\347\250\213</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("addProcess", "\350\277\233\347\250\213\345\272\217\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("addProcess", "\350\277\233\347\250\213\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("addProcess", "\344\274\230\345\205\210\346\225\260\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("addProcess", "\350\246\201\346\261\202\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        pid->setInputMask(QString());
        pushButton->setText(QApplication::translate("addProcess", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("addProcess", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addProcess: public Ui_addProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROCESS_H
