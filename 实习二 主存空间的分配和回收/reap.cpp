#include "reap.h"
#include "ui_reap.h"

Reap::Reap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reap)
{
    ui->setupUi(this);
}

Reap::~Reap()
{
    delete ui;
}

void Reap::on_pushButton_2_clicked()
{
    this->hide();
}

void Reap::on_lineEdit_textChanged(const QString &arg1)
{
    this->reapJobId = arg1.toInt();
}

void Reap::on_pushButton_clicked()
{
    emit toReapJob(this->reapJobId);
    this->hide();
}
