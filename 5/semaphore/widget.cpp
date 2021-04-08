#include "widget.h"
#include "ui_widget.h"
#include <bits/stdc++.h>
#include <QString>
#include <QMessageBox>
#include<iostream>
#include<QTime>
using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    init();
}

Widget::~Widget()
{
    delete ui;
}

// PCB
struct PCB{
    QString pName;
    QString pState;	// "运行态"/"就绪态"/"等待态"/"完成态"
    QString waitFor;	// 等待原因: "s1"/"s2
    int breakpoint;	// 断点
};

PCB producerPCB;
PCB consumerPCB;

// 全局变量
QString PA[5][2];
QString SA[5][2];
QString B[10];		// 存放products的缓冲区
int s1 = 10, s2 = 0;
int IN = 0, out = 0;	// 放入和取出产品的指针

// 原语操作
void Widget::Wait(int &s, QString pName, QString semaphoreName){
    if(pName == "producer"){
        producerPCB.pState = "等待态";
        ui->ProducerPCB->setItem(1,0, new QTableWidgetItem(producerPCB.pState));
        producerPCB.waitFor = "等待信号量" + semaphoreName;
        ui->ProducerPCB->setItem(2,0, new QTableWidgetItem(producerPCB.waitFor));
        QMessageBox::warning(this, "阻塞警告",pName+"因等待信号量"+semaphoreName+"而阻塞");
    }
    else if(pName == "consumer"){
        consumerPCB.pState = "等待态";
        ui->ConsumerPCB->setItem(1,0, new QTableWidgetItem(consumerPCB.pState));
        consumerPCB.waitFor = "等待信号量" + semaphoreName;
        ui->ConsumerPCB->setItem(2,0, new QTableWidgetItem(consumerPCB.waitFor));
        QMessageBox::warning(this, "阻塞警告",pName+"因等待信号量"+semaphoreName+"而阻塞");
    }
    else
        QMessageBox::warning(this, "警告","调用p操作的进程名有误");
}

void Widget::Release(int &s, QString pName, QString semaphoreName){
    if(pName == "producer"){
        producerPCB.pState = "就绪态";
        ui->ProducerPCB->setItem(1,0, new QTableWidgetItem(producerPCB.pState));
        producerPCB.waitFor = "";
        ui->ProducerPCB->setItem(2,0, new QTableWidgetItem(producerPCB.waitFor));
        QMessageBox::information(this, "提示",pName+"获得信号量"+semaphoreName+",已就绪!");
    }
    else if(pName == "consumer"){
        consumerPCB.pState = "就绪态";
        ui->ConsumerPCB->setItem(1,0, new QTableWidgetItem(consumerPCB.pState));
        consumerPCB.waitFor = "";
        ui->ConsumerPCB->setItem(2,0, new QTableWidgetItem(consumerPCB.waitFor));
        QMessageBox::information(this, "提示",pName+"获得信号量"+semaphoreName+",已就绪!");
    }
}

// p原语的实现
void Widget::p(int &s, QString pName, QString semaphoreName){
    s--;
    cout<<"s1: "<<s1<<"s2: "<<s2<<endl;

    // 渲染到界面
    if(semaphoreName == "s1"){
        ui->s1->setText(QString::number(s1));
    }
    else if(semaphoreName == "s2"){
        ui->s2->setText(QString::number(s2));
    }
    else
        QMessageBox::warning(this, "警告", "信号量名称有误.");

    if(s < 0)
        Wait(s, pName, semaphoreName);	// 将调用此过程的进程设置为等待信号量s的状态
}

// v原语的实现
void Widget::v(int &s, QString pName, QString semaphoreName){
    s++;

    cout<<"s1: "<<s1<<"s2: "<<s2<<endl;
    // 渲染到界面
    if(semaphoreName == "s1"){
        ui->s1->setText(QString::number(s1));
    }
    else if(semaphoreName == "s2"){
        ui->s2->setText(QString::number(s2));
    }
    else
        QMessageBox::warning(this, "警告", "信号量名称有误.");

    if(s <= 0)
        Release(s, pName, semaphoreName);	// 释放一个等待信号量s的进程
}


void Widget::produce(){
    int pc = producerPCB.breakpoint;
    if(pc == 0)
        ui->InsProduer->clearContents();
    producerPCB.pState = "运行态";
    ui->ProducerPCB->setItem(1, 0, new QTableWidgetItem(producerPCB.pState));

    QTime time;
    time.start();
    while(time.elapsed() < 1000)             // 给一个运行时间
        QCoreApplication::processEvents();

    ui->InsProduer->setItem(pc, 0, new QTableWidgetItem(PA[pc][0]));
    ui->InsProduer->setItem(pc, 1, new QTableWidgetItem(PA[pc][1]));


    if(pc == 1){    // 若生产者执行的是p操作
        p(s1, "producer", "s1");
    }
    else if(pc == 2){   // 放产品
        B[IN] = "c";
        ui->productList->setItem(0, IN, new QTableWidgetItem(B[IN]));
        IN = (IN + 1) % 10;
    }
    else if(pc == 3){   // 生产者执行v操作
        v(s2,"consumer","s2");
    }

    // 更新breakpoint
    if(pc == 4){
        producerPCB.breakpoint = 0;
    }
    else{
        producerPCB.breakpoint = pc + 1;
    }
    ui->ProducerPCB->setItem(3,0,new QTableWidgetItem(QString::number(producerPCB.breakpoint)));

    if(producerPCB.pState != "等待态"){
        producerPCB.pState = "就绪态";
        ui->ProducerPCB->setItem(1, 0, new QTableWidgetItem(producerPCB.pState));
    }
}

void Widget::consume(){
    int pc = consumerPCB.breakpoint;
    if(pc == 0)
        ui->InsConsumer->clearContents();
    consumerPCB.pState = "运行态";
    ui->ConsumerPCB->setItem(1, 0, new QTableWidgetItem(consumerPCB.pState));

    QTime time;
    time.start();
    while(time.elapsed() < 1000)             // 给一个运行时间
        QCoreApplication::processEvents();

    ui->InsConsumer->setItem(pc, 0, new QTableWidgetItem(SA[pc][0]));
    ui->InsConsumer->setItem(pc, 1, new QTableWidgetItem(SA[pc][1]));

    if(pc == 0){    // 若消费者执行的是p操作
        p(s2, "consumer", "s2");
    }
    else if(pc == 1){   // 取产品
        B[out] = "";
        ui->productList->setItem(0,out,new QTableWidgetItem(""));
        out = (out + 1) % 10;
    }
    else if(pc == 2){   // 消费者执行v操作
        v(s1,"producer","s1");
    }

    // 更新breakpoint
    if(pc == 4){
        consumerPCB.breakpoint = 0;
    }
    else{
        consumerPCB.breakpoint = pc + 1;
    }
    ui->ConsumerPCB->setItem(3,0,new QTableWidgetItem(QString::number(consumerPCB.breakpoint)));

    if(consumerPCB.pState != "等待态"){
        consumerPCB.pState = "就绪态";
        ui->ConsumerPCB->setItem(1, 0, new QTableWidgetItem(consumerPCB.pState));
    }
}

void Widget::init(){

    PA[0][0] = "Produce";   PA[0][1]="生产者生产一个产品";
    PA[1][0] = "p(s1)";     PA[1][1]="生产者执行P操作";
    PA[2][0] = "PUT";       PA[2][1]="放产品";
    PA[3][0] = "v(s2)";     PA[3][1]="生产者执行V操作";
    PA[4][0] = "goto 0";    PA[4][1]="生产者执行goto";

    SA[0][0] = "p(s2)";     SA[0][1]="消费者执行p操作";
    SA[1][0] = "GET";       SA[1][1]="取产品";
    SA[2][0] = "v(s1)";     SA[2][1]="消费者执行v操作";
    SA[3][0] = "consume";   SA[3][1]="消费者消费一个产品";
    SA[4][0] = "goto 0";    SA[4][1]="消费者执行goto";


    // 初始化信号量和各种表格
    ui->InsConsumer->clearContents();
    ui->InsProduer->clearContents();

    ui->s1->setText(QString::number(s1));
    ui->s2->setText(QString::number(s2));
    producerPCB.pName = "producer";
    producerPCB.pState = "就绪态";
    producerPCB.breakpoint = 0;
    ui->ProducerPCB->setItem(0,0,new QTableWidgetItem(producerPCB.pName));
    ui->ProducerPCB->setItem(1,0,new QTableWidgetItem(producerPCB.pState));
    ui->ProducerPCB->setItem(3,0,new QTableWidgetItem(QString::number(producerPCB.breakpoint)));

    consumerPCB.pName = "consumer";
    consumerPCB.pState = "就绪态";
    consumerPCB.breakpoint = 0;
    ui->ConsumerPCB->setItem(0,0,new QTableWidgetItem(consumerPCB.pName));
    ui->ConsumerPCB->setItem(1,0,new QTableWidgetItem(consumerPCB.pState));
    ui->ConsumerPCB->setItem(3,0,new QTableWidgetItem(QString::number(consumerPCB.breakpoint)));


    // 最初先调用生产者进程
    produce();
}

void Widget::on_pushButton_2_clicked()  // 结束生产
{
    if(producerPCB.breakpoint != 0)
        QMessageBox::warning(this, "错误","当前产品生产流程未结束,不可终止");
    else{
        producerPCB.pState = "完成态";
        ui->ProducerPCB->setItem(1,0,new QTableWidgetItem(producerPCB.pState));
    }
}

void Widget::on_pushButton_5_clicked()  // 结束消费
{
    if(consumerPCB.breakpoint != 0)
        QMessageBox::warning(this, "错误","当前消费流程未结束,不可终止");
    else{
        consumerPCB.pState = "完成态";
        ui->ConsumerPCB->setItem(1,0,new QTableWidgetItem(consumerPCB.pState));
    }
}

void Widget::on_pushButton_clicked()    // 随机调度
{
    if(producerPCB.pState == "完成态" && consumerPCB.pState == "完成态"){
        QMessageBox::warning(this, "提示","生产者消费者进程均已结束,系统将自动退出.");
        this->destroy();
    }
    else if(producerPCB.pState == "等待态" && consumerPCB.pState == "等待态")
        QMessageBox::warning(this, "错误","暂无可调度进程.");
    else if(producerPCB.pState == "完成态" || producerPCB.pState == "等待态"){
        if(consumerPCB.pState == "等待态"){
            QMessageBox::warning(this, "错误", "暂无可调度进程.");
        }
        else
            consume();
    }
    else if(consumerPCB.pState == "等待态"){
        produce();
    }
    else{
        // 随机调度生产者和消费者进程
        int random = rand() % 2;
        if(!random){
            produce();
        }
        else{
            consume();
        }
    }
}

void Widget::on_pushButton_3_clicked()  // 调度生产者
{
    if(producerPCB.pState == "完成态"){
        QMessageBox::warning(this, "错误","已结束生产,不可再调度生产者.");
    }
    else if(producerPCB.pState == "等待态"){
        QMessageBox::warning(this, "错误","生产者阻塞,不可调度.");
    }
    else
        produce();
}


void Widget::on_pushButton_4_clicked()  // 调度消费者
{
    if(consumerPCB.pState == "完成态"){
        QMessageBox::warning(this, "错误","消费生产均已结束,不可再调度消费者.");
    }
    else if(consumerPCB.pState == "等待态"){
        QMessageBox::warning(this, "错误","消费者阻塞,不可调度.");
    }
    else
        consume();
}

