#include "addprocess.h"
#include "ui_addprocess.h"
#include<iostream>
#include<string>
#include<qstring.h>
#include "mainwindow.h"
using namespace std;



addProcess::addProcess(QWidget *parent, int pid) :
    QDialog(parent),
    ui(new Ui::addProcess)
{
    ui->setupUi(this);
    QString id = QString::number(pid);
    cout<<pid<<endl;
    ui->pid->setText(id);

}

addProcess::~addProcess()
{
    delete ui;
}

void addProcess::on_pName_textEdited(const QString &arg1)
{
    newName = arg1.toLocal8Bit().toStdString();
    //cout << newName << endl;
}

void addProcess::on_pushButton_2_clicked()
{
    this->hide();
}

void addProcess::on_priority_textEdited(const QString &arg1)
{
    newPri = arg1.toInt();
    //cout << newPri << endl;
}

void addProcess::on_timeRequired_textEdited(const QString &arg1)
{
    newTime = arg1.toInt();
    //cout << newTime << endl;
}

void addProcess::on_pushButton_clicked()
{
    //cout<<newName<<newTime<<newPri<<"got it!"<<endl;
    emit toAddProcess(newName, newPri, newTime);
    emit toBeginSort();
    this->close();
}
