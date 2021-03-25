#include "widget.h"
#include "ui_widget.h"
#include "reap.h"
#include <vector>
#include <iostream>
#include <QMessageBox>

using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


struct Block{
    int tempFreeBlockNum = 0;    // 当前组所含的空闲块数
    int nextFreeBlockNum = 0;    // 下一组所含的空闲块数
    vector<int> freeBlockID;
};

int M = 1000;    // 总块数
int N = 3;     // 每组所含块数
void Widget::on_inputM_textChanged(const QString &arg1)
{
    M = arg1.toInt();
    //init();
}

void Widget::on_inputN_textChanged(const QString &arg1)
{
    N = arg1.toInt();
}

vector<Block> disk(M);
Block MA;


void Widget::on_require_clicked()
{

    if(MA.tempFreeBlockNum > 1){ // 当前组所剩多于1块
        int allocBlockID = MA.freeBlockID.back(); // 记录所要分配出的空闲块号
        MA.freeBlockID.pop_back();
        MA.tempFreeBlockNum--;
        QString msg = "分配到的空闲块号: " + QString::number(allocBlockID);
        QMessageBox::information(this, tr("提示"),msg);
    }
    else if(MA.tempFreeBlockNum == 1){ // 当前组仅剩最后一块
        int allocBlockID = MA.freeBlockID.back(); // 记录所要分配出的空闲块号
        MA.freeBlockID.pop_back();

        // 将该块中的空闲块信息存到专用块中
        MA.freeBlockID = disk[allocBlockID].freeBlockID;
        MA.tempFreeBlockNum = disk[allocBlockID].tempFreeBlockNum;
        MA.nextFreeBlockNum = disk[allocBlockID].nextFreeBlockNum;

        // 释放该块中的空闲块信息
        disk[allocBlockID].freeBlockID.clear();
        disk[allocBlockID].tempFreeBlockNum = 0;
        disk[allocBlockID].nextFreeBlockNum = 0;

         // 将该块分配出去
        QString msg = "分配到的空闲块号: " + QString::number(allocBlockID);
        QMessageBox::information(this, tr("提示"), msg);
    }
    else{
        QMessageBox::warning(this,tr("警告"), tr("暂无空闲块."));
    }

    render();

}
void Widget::on_reap_clicked()
{
    Reap = new reap(this);
    QObject::connect(Reap, SIGNAL(toReapBlock(int)), this, SLOT(reapBlock(int)));
    Reap->exec();
}

void Widget::reapBlock(int newFreeBlockID){
    if(newFreeBlockID >= M){
        QMessageBox::warning(this, tr("警告"), tr("输入的块号超出总块数限制."));
        return ;
    }
    if(MA.tempFreeBlockNum >= N){   // 当前组已满
        disk[newFreeBlockID].freeBlockID = MA.freeBlockID;      // 将主存中登记的一组链接情况复制到归还块中
        disk[newFreeBlockID].tempFreeBlockNum = MA.tempFreeBlockNum;   
        disk[newFreeBlockID].nextFreeBlockNum = MA.nextFreeBlockNum;    
        MA.freeBlockID.clear();     // 将MA中原组信息清空
        MA.freeBlockID.push_back(newFreeBlockID);   // 将归还块ID记录到MA中
        MA.nextFreeBlockNum = MA.tempFreeBlockNum;  // 将原组中所含块数修改为MA所记录的下一组空闲块数        
        MA.tempFreeBlockNum = 1;    // 修改计数
    }
    else{
        MA.freeBlockID.push_back(newFreeBlockID);
        MA.tempFreeBlockNum++;
    }

    render();
}

void Widget::render(){
    ui->table->clearContents(); // 清空表格中的内容
    // 设置表格的行列数
    Block temp = MA;
    int rowCount = 1;
    while(temp.tempFreeBlockNum != 0 && temp.nextFreeBlockNum != 0){  // 求总组数
        temp = disk[temp.freeBlockID[0]];   // 若存在下一组,则将temp赋值为下一组的首块
        rowCount++;
    }
    cout<<"groupNum: "<<rowCount<<endl;
    ui->table->setRowCount(rowCount);
    ui->table->setColumnCount(N + 2);   // 总列数 = 总块数 + 2(最左边两列显示组号和该组所含块号)
    for(int i = 0; i < N; i++){
        ui->table->setHorizontalHeaderItem(i+2,new QTableWidgetItem(QString::number(i+1)));
    }

    temp = MA;
    for(int i = 0; i < rowCount; i++){
        int columnCount = temp.tempFreeBlockNum;
        cout<<"the total of blocks in group "<< i+1 <<" is: "<<temp.freeBlockID.size()<<endl;
        ui->table->setItem(i, 0, new QTableWidgetItem(QString::number(i+1)));
        ui->table->setItem(i, 1, new QTableWidgetItem(QString::number(temp.tempFreeBlockNum)));
        cout<<"the blocks in group "<<i+1<<" are: ";
        for(int j = 0; j < columnCount; j++){
            ui->table->setItem(i, j + 2, new QTableWidgetItem(QString::number(temp.freeBlockID[j])));
            cout<<temp.freeBlockID[j]<<" ";
        }
        cout<<endl;
        if(!temp.freeBlockID.empty())
            temp = disk[temp.freeBlockID[0]];
        else              // 仅剩最后一组时
            break;
    }
}
