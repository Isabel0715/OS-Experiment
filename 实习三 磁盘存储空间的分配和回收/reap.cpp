#include "reap.h"
#include "ui_reap.h"
#include <QMessageBox>

reap::reap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reap)
{
    ui->setupUi(this);
}

reap::~reap()
{
    delete ui;
}

void reap::on_lineEdit_textChanged(const QString &arg1)
{
    this->newFreeBlockID = arg1.toInt();
    this->valueEntered = true;
}

void reap::on_pushButton_clicked()
{
    if(this->valueEntered){
        emit toReapBlock(this->newFreeBlockID);
        this->hide();
    }
    else
        QMessageBox::warning(this, "Error!", "please enter the block ID correctly!");
}
