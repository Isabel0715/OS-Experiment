/********************************************************************************
** Form generated from reading UI file 'reap.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REAP_H
#define UI_REAP_H

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

class Ui_Reap
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Reap)
    {
        if (Reap->objectName().isEmpty())
            Reap->setObjectName(QStringLiteral("Reap"));
        Reap->resize(461, 241);
        Reap->setStyleSheet(QStringLiteral("background-color: rgb(255, 242, 216)"));
        label = new QLabel(Reap);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 80, 261, 41));
        label->setStyleSheet(QLatin1String("font-size: 20px;\n"
"background-color: transparent;"));
        textBrowser = new QTextBrowser(Reap);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 30, 271, 51));
        textBrowser->setStyleSheet(QLatin1String("background: transparent;\n"
"border: 0;"));
        pushButton_2 = new QPushButton(Reap);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(318, 160, 101, 31));
        pushButton = new QPushButton(Reap);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 160, 101, 31));
        lineEdit = new QLineEdit(Reap);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(330, 90, 91, 31));

        retranslateUi(Reap);

        QMetaObject::connectSlotsByName(Reap);
    } // setupUi

    void retranslateUi(QDialog *Reap)
    {
        Reap->setWindowTitle(QApplication::translate("Reap", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Reap", "\350\257\267\350\276\223\345\205\245\346\211\200\351\234\200\351\207\212\346\224\276\347\232\204\344\275\234\344\270\232\345\272\217\345\217\267\357\274\232", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Reap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">\351\207\212\346\224\276\344\275\234\344\270\232</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Reap", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Reap", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Reap: public Ui_Reap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REAP_H
