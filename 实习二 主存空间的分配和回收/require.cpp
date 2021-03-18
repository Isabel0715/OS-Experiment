#include "require.h"
#include "ui_require.h"
#include<Qstring>

Require::Require(QWidget *parent, int jobNum) :
    QDialog(parent),
    ui(new Ui::Require)
{
    ui->setupUi(this);
    this->jobNum = jobNum;
    ui->jID->setText(QString::number(this->jobNum));
}

Require::~Require()
{
    delete ui;
}

void Require::on_pushButton_2_clicked()
{
    this->hide();
}

void Require::on_pushButton_clicked()
{
    emit toAddJob(this->jobSize);
    this->hide();
}

void Require::on_jSize_textChanged(const QString &arg1)
{
    this->jobSize = arg1.toInt();
}
