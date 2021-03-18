#ifndef REQUIE_H
#define REQUIE_H

#include <QDialog>
#include <string>
#include<iostream>
using namespace std;

namespace Ui {
class Require;
}

class Require : public QDialog
{
    Q_OBJECT

public:
    explicit Require(QWidget *parent = 0, int jobNum = 0);
    ~Require();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_jSize_textChanged(const QString &arg1);

signals:

    void toAddJob(int size );

private:
    Ui::Require *ui;
    int jobNum;
    int jobSize;
};

#endif // REQUIE_H
