#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include<string>
#include<Windows.h>
#include "addprocess.h"
#include<QmessageBox>
#include<QTime>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




struct PCB {
    int pid;
    string pName;
    int timeRequired;
    int timeLeft;
    int priority;
    string state = "Ready";
    PCB *next = nullptr;
};

int pNum = 0;   //进程总数目（含已结束进程）
int pTempNum = 0;   //当前进程数（不含已结束进程）
int runningTime = -1;	//每次运行的时间长度
int priorityReduced = -1; // 每次运行后的优先级降低数

// 新增进程的参数
string newName;
int newTime;
int newPri;

//进程链表的指针
PCB *head = new PCB;
PCB *tail = head;
PCB *temp = new PCB;

void sort(PCB *head, int pTempNum) {
    // 按照优先级对进程进行排序
    for (int i = 0; i < pTempNum; i++) {
        PCB *pre = head, *node1 = pre->next, *node2 = node1->next;

        while (node1 != nullptr && node2 != nullptr) {
            if (node1->priority < node2->priority	// 优先级高的进程排在前面
                || (node1->priority == node2->priority && node1->timeLeft > node2-> timeLeft) // 优先级相同时，剩余时间短的进程排在前面
                || (node1->priority == node2->priority && node1->timeLeft == node2->timeLeft && node1->pid > node2->pid)	// 优先级、剩余时间均相同时，pid小的排在前面
                ) {
                node1->next = node2->next;
                node2->next = node1;
                pre->next = node2;
                //count++;
            }
            pre = pre->next;
            node1 = pre->next;
            node2 = node1->next;
        }
    }

    //排序完成后更新尾指针的位置,便于插入新的进程
    tail = head;
    while(tail->next != nullptr)
        tail = tail -> next;
}

void MainWindow::beginSort(){
   
    sort(head, pTempNum);
}

void MainWindow::addPro(string newName, int newPri, int newTime){
    //cout<<"here! we got new information: "<<newName<<newPri<<newTime<<endl;


    //向链表中加入新的PCB
    temp = tail;
    temp->next = new PCB;
    temp = temp->next;
    temp->pid = pNum;
    temp->pName = newName;
    temp->priority = newPri;
    temp->timeRequired = newTime;
    temp->timeLeft = newTime;
    tail = tail->next;

    //加入后重新对当前链表排序
    sort(head, pTempNum);

    //cout<<"here! show the table:"<<endl;
    ui->table->setRowCount(pTempNum);
    ui->table->setColumnCount(6);
    //刷新进程列表
    temp = head -> next;
    for(int i = 0; i <pTempNum; i++){
        ui->table->setItem(i, 0, new QTableWidgetItem(QString::number(temp->pid)));
        ui->table->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(temp->pName)));
        ui->table->setItem(i, 2, new QTableWidgetItem(QString::number(temp->timeRequired)));
        ui->table->setItem(i, 3, new QTableWidgetItem(QString::number(temp->timeLeft)));
        ui->table->setItem(i, 4, new QTableWidgetItem(QString::number(temp->priority)));
        ui->table->setItem(i, 5, new QTableWidgetItem(QString::fromStdString(temp->state)));
		tail = temp;
		temp = temp->next;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    pNum++;
    pTempNum++;
    add = new addProcess(this, pNum);
    QObject::connect(add, SIGNAL(toBeginSort()), this, SLOT(beginSort()));
    QObject::connect(add, SIGNAL(toAddProcess(string, int, int)), this, SLOT(addPro(string,int,int)));

    add->exec();

}

void MainWindow::on_scheduleBtn_clicked()
{
    ui->countDown->setText(QString::number(runningTime));
    if(runningTime == -1 || priorityReduced == -1){
        QMessageBox::warning(this, tr("提示"), tr("请输入运行后期望减少的优先数及期望减少的运行时间！"));
    }
    else{
        int runningTimeLeft = runningTime;
        PCB *first = head->next;
        while(runningTimeLeft > 0){
            // 默认运行链表中的首个进程
            first = head->next;
            if (first && first->state == "Ready") {	// 若存在就绪进程
                //cout << "运行进程" << first->pName << ": " << endl;
                ui->runningName->setText(QString::fromStdString(first->pName));
                ui->runningID->setText(QString::number(first->pid));
                ui->runningPri->setText(QString::number(first->priority));
                ui->runningTimeRequired->setText(QString::number(first->timeRequired));
                ui->runningTimeLeft->setText(QString::number(first->timeLeft));
                QTime time;
                time.start();
                while(time.elapsed() < 1000)             //等待时间流逝
                    QCoreApplication::processEvents();
                ui->countDown->setText(QString::number(runningTimeLeft - 1));
                cout << "there are " << runningTimeLeft - 1 <<" s left."<<endl;
                first->timeLeft -= 1; //减少所需的运行时间
                runningTimeLeft -= 1;
                ui->runningTimeLeft->setText(QString::number(first->timeLeft));

                temp = head->next;
                for(int i = 0; i < pTempNum; i++){
                ui->table->setItem(i, 0, new QTableWidgetItem(QString::number(temp->pid)));
                ui->table->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(temp->pName)));
                ui->table->setItem(i, 2, new QTableWidgetItem(QString::number(temp->timeRequired)));
                ui->table->setItem(i, 3, new QTableWidgetItem(QString::number(temp->timeLeft)));
                ui->table->setItem(i, 4, new QTableWidgetItem(QString::number(temp->priority)));
                ui->table->setItem(i, 5, new QTableWidgetItem(QString::fromStdString(temp->state)));
                tail = temp;
                temp = temp->next;
                }


                if (first->timeLeft <= 0) {
                    first->state = "End";
                    ui->table->setItem(0,5, new QTableWidgetItem(QString::fromStdString(first->state)));
                    QMessageBox::information(this, "Information", tr("当前进程运行完毕。"));
                    head->next = first->next;
                    pTempNum--;
                    ui->table->setRowCount(pTempNum);
                    temp = head -> next;
                    for(int i = 0; i < pTempNum; i++){
                    ui->table->setItem(i, 0, new QTableWidgetItem(QString::number(temp->pid)));
                    ui->table->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(temp->pName)));
                    ui->table->setItem(i, 2, new QTableWidgetItem(QString::number(temp->timeRequired)));
                    ui->table->setItem(i, 3, new QTableWidgetItem(QString::number(temp->timeLeft)));
                    ui->table->setItem(i, 4, new QTableWidgetItem(QString::number(temp->priority)));
                    ui->table->setItem(i, 5, new QTableWidgetItem(QString::fromStdString(temp->state)));
                    tail = temp;
                    temp = temp->next;
                    }
                }
            }
            else {
                QMessageBox::warning(this, "Warning!",tr("已无可调度进程。"));
                exit(-1);
            }

        }
        first->priority -= priorityReduced; // 运行后，降低优先级
        sort(head, pTempNum);	//对剩余进程重新排序

        //刷新进程列表
        temp = head -> next;
        for(int i = 0; i < pTempNum; i++){
             ui->table->setItem(i, 0, new QTableWidgetItem(QString::number(temp->pid)));
             ui->table->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(temp->pName)));
             ui->table->setItem(i, 2, new QTableWidgetItem(QString::number(temp->timeRequired)));
             ui->table->setItem(i, 3, new QTableWidgetItem(QString::number(temp->timeLeft)));
             ui->table->setItem(i, 4, new QTableWidgetItem(QString::number(temp->priority)));
             ui->table->setItem(i, 5, new QTableWidgetItem(QString::fromStdString(temp->state)));
             tail = temp;
             temp = temp->next;
        }

    }

}

void MainWindow::on_runnningTime_textChanged(const QString &arg1)
{
    ui->countDown->setText(arg1);
    runningTime = arg1.toInt();
}

void MainWindow::on_priorityReduced_textEdited(const QString &arg1)
{
    priorityReduced = arg1.toInt();
}
