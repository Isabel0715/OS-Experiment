/********************************************************************************
** Form generated from reading UI file 'require.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUIRE_H
#define UI_REQUIRE_H

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

class Ui_Require
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;
    QLineEdit *jSize;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *jID;

    void setupUi(QDialog *Require)
    {
        if (Require->objectName().isEmpty())
            Require->setObjectName(QStringLiteral("Require"));
        Require->resize(408, 298);
        Require->setStyleSheet(QStringLiteral("background-color: rgb(255, 242, 216)"));
        textBrowser = new QTextBrowser(Require);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 30, 271, 61));
        textBrowser->setStyleSheet(QLatin1String("background: transparent;\n"
"border: 0;"));
        pushButton_2 = new QPushButton(Require);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(208, 210, 101, 31));
        jSize = new QLineEdit(Require);
        jSize->setObjectName(QStringLiteral("jSize"));
        jSize->setGeometry(QRect(220, 150, 141, 31));
        label = new QLabel(Require);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 100, 91, 31));
        label->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        pushButton = new QPushButton(Require);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 210, 101, 31));
        label_3 = new QLabel(Require);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 150, 91, 31));
        label_3->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        jID = new QLineEdit(Require);
        jID->setObjectName(QStringLiteral("jID"));
        jID->setEnabled(true);
        jID->setGeometry(QRect(220, 100, 141, 31));
        jID->setStyleSheet(QLatin1String("border:0;\n"
"background-color:transparent;"));
        jID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        jID->setReadOnly(true);

        retranslateUi(Require);

        QMetaObject::connectSlotsByName(Require);
    } // setupUi

    void retranslateUi(QDialog *Require)
    {
        Require->setWindowTitle(QApplication::translate("Require", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Require", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">\350\243\205\345\205\245\344\275\234\344\270\232</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Require", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("Require", "\344\275\234\344\270\232\345\272\217\345\217\267\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Require", "\347\241\256\345\256\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Require", "\346\211\200\351\234\200\347\251\272\351\227\264\357\274\232", Q_NULLPTR));
        jID->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class Require: public Ui_Require {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUIRE_H
