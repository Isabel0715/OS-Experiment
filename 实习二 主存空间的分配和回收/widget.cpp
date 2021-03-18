#include "widget.h"
#include "ui_widget.h"
#include "reap.h"
#include "require.h"
#include <string>
#include<QMessageBox>
#include <iostream>
using namespace std;

struct mem_Block{
    int id = 0;
    int addr_Begin;
    int size;
    int addr_End;
    bool state = 0; // 0: 空闲; 1: 已占用。
    int jobAllocated = 0; // 0: 未被作业占用; 其他:作业id;
    mem_Block *prior = nullptr;
    mem_Block *next = nullptr;
};

mem_Block* head_mem = new mem_Block;    // 内存分配链的头指针
mem_Block* head_free = new mem_Block;   // 空闲区块链的头指针

int jobNum = 0; // 当前作业数
int memSizeLeft = 128;  // 内存剩余空间总量
int freeBlockNum = 1;   // 空闲块数量
int memBlockNum = 1;


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 空闲区块链初始化
    mem_Block *temp =  new mem_Block;
    temp -> id = freeBlockNum;
    temp -> addr_Begin = 0;
    temp -> addr_End = 128;
    temp -> size = temp -> addr_End - temp -> addr_Begin;
    cout<< "the size of first free block is: " << temp->size<<endl;
    head_free -> next = temp;
    temp -> prior = head_free;

    // 内存分配链初始化
    mem_Block *temp2= new mem_Block;
	temp2->id = temp->id;
	temp2->addr_Begin = temp->addr_Begin;
	temp2->addr_End = temp->addr_End;
	temp2->size = temp->size;
	temp2->prior = head_mem;
    head_mem->next = temp2;
    cout<<"the first block in memory is starting at: "<<head_mem->next->addr_Begin<<endl;

}

Widget::~Widget()
{
    delete ui;
}

void Widget::render(){
    mem_Block *temp;
    // 将空闲分区链中的各结点信息渲染到表中
    ui->table_free->setColumnCount(4);
    ui->table_free->setRowCount(freeBlockNum);
    temp = head_free -> next;
    for(int i = 0; i < freeBlockNum; i++){
        ui->table_free->setItem(i, 0, new QTableWidgetItem(QString::number(temp->id)));
        ui->table_free->setItem(i, 1, new QTableWidgetItem(QString::number(temp->addr_Begin)));
        ui->table_free->setItem(i, 2, new QTableWidgetItem(QString::number(temp->size)));
        ui->table_free->setItem(i, 3, new QTableWidgetItem(QString::number(temp->addr_End)));
        temp = temp->next;
    }

    // 将内存分配链中的各结点信息渲染到表中
    ui->table_mem->setColumnCount(6);
    ui->table_mem->setRowCount(memBlockNum);
    temp = head_mem -> next;
    for(int i = 0; i < memBlockNum; i++){
        ui->table_mem->setItem(i, 0, new QTableWidgetItem(QString::number(temp->id)));
        ui->table_mem->setItem(i, 1, new QTableWidgetItem(QString::number(temp->addr_Begin)));
        ui->table_mem->setItem(i, 2, new QTableWidgetItem(QString::number(temp->size)));
        ui->table_mem->setItem(i, 3, new QTableWidgetItem(QString::number(temp->addr_End)));
        if(temp->state == 1){
            ui->table_mem->setItem(i, 4, new QTableWidgetItem(tr("已分配")));
            ui->table_mem->setItem(i, 5, new QTableWidgetItem(QString::number(temp->jobAllocated)));
        }
        else{
            ui->table_mem->setItem(i, 4, new QTableWidgetItem(tr("空闲中")));
            ui->table_mem->setItem(i, 5, new QTableWidgetItem(" "));
        }
        temp = temp->next;
    }
}

void Widget::addJob(int jSize) {
    cout<< "size required: "<<jSize<<endl;
    // 若申请的空间大于当前剩余的空间总量，添加失败
    if(jSize > memSizeLeft)
        QMessageBox::warning(0, "Error!", "!!There is no enough space to add this job.");

    bool found = false;
    mem_Block *temp = head_free -> next;

    while(temp){
        cout<<"the size of temporary block: "<< temp->size<<endl;
        if(temp->size >= jSize){
            found = true;
            break;
        }
        temp = temp -> next;
    }
    if(!found)
        QMessageBox::warning(0, "Error!", "There is no enough space to add this job.");
    else if (found && temp -> size == jSize){   // 当前分区恰好等于作业所需大小
        // 修改内存分区链表
        mem_Block *temp_mem = head_mem -> next;
        while(temp_mem != nullptr && temp_mem -> addr_Begin != temp ->addr_Begin){ // 在内存分配链中找到对应的区块
            temp_mem = temp_mem -> next;
        }
        temp_mem -> state = true;   // 将内存中该块的状态设为已分配
        temp_mem -> jobAllocated = jobNum;  // 记录

        // 修改空闲区块链表
        freeBlockNum--;
        temp -> prior -> next = temp -> next;
        if(temp->next)
            temp -> next ->prior = temp -> prior;
        cout<<"new begin_addr of this free block is: "<< temp->addr_Begin<<endl;
    }
    else{   // 当前空闲区装入该作业后还有剩余

        // 修改内存分区链表
        mem_Block *temp_mem = head_mem -> next;
        while(temp_mem && temp_mem -> addr_Begin != temp ->addr_Begin){ // 在内存分配链中找到对应的区块
            temp_mem = temp_mem -> next;
        }
        temp_mem -> size = jSize;
        temp_mem -> addr_End = temp_mem -> addr_Begin + temp_mem -> size;
        temp_mem -> state = true;   // 将内存中该块的状态设为已分配
        temp_mem -> jobAllocated = jobNum;  // 记录所属的作业id

        // 修改空闲区块链表
        temp -> size -= jSize;
        cout<<"new size of this free block is: "<< temp->size<<endl;
        temp ->addr_Begin += jSize;
        cout<<"new begin_addr of this free block is: "<< temp->addr_Begin<<endl;


        // 将剩余空间划为新的空闲分区并记录
        memBlockNum++;
        mem_Block *newBlock = new mem_Block;
        newBlock->next = temp_mem->next;
        if(newBlock->next)
            newBlock->next->prior = newBlock;
        newBlock->id = temp_mem->id + 1;
        newBlock->addr_Begin = temp->addr_Begin;
        newBlock->size = temp->size;
        newBlock->addr_End = newBlock->addr_Begin + newBlock->size;
        newBlock->prior = temp_mem;
        temp_mem->next = newBlock;

        cout<<"new block id :"<<newBlock->id<<endl
           <<"new block start at: "<< newBlock->addr_Begin<<endl
          <<"new block size is: "<< newBlock->size<<endl;

        // 更新其后的分区号
        while(newBlock->next != nullptr){
            newBlock = newBlock -> next;
            newBlock -> id++;
        }

    }

    render();

}

void Widget::reapJob(int reapJobID) {
    mem_Block *temp = head_mem -> next;
    bool found = false;
    while(temp){
        if(temp -> jobAllocated == reapJobID){
            found = true;
            break;
        }
        temp = temp -> next;
    }
    if(!found)
        QMessageBox::warning(0,"Error!", "Can not find this job.");
    else{
        // 若已找到所需回收的分区
        if(memBlockNum == 1){    // 如果内存中只有一个分区(全被一个作业所占用)
            temp->state = 0;
            temp->jobAllocated = 0;
            head_free->next = new mem_Block;
            head_free->next->id = 1;
            head_free->next->addr_Begin = 0;
            head_free->next->addr_End = 128;
            head_free->next->size = head_free->next->addr_End - head_free->next->addr_Begin;
            head_free->next->prior = head_free;
            freeBlockNum = 1;
        }
        else if((temp->id == 1 && temp->next->state == 1)  // 所需回收的分区是第一块,且其后的一个分区已被占用
        || (temp->id == memBlockNum && temp->prior->state == 1) // 所需回收的分区是最后一块,且其前的一个分区已被占用
        || (temp->prior->state == 1 && temp->next->state == 1)){   // 所需回收的分区是中间块,且相邻分区都已被占用

            temp->state = 0; // 释放分区
            temp->jobAllocated = 0; // 清除该作业序号
        
            // 将该分区加入到空闲分区链中
            mem_Block *temp_free = head_free;
            while(temp_free->next && temp_free->next->addr_End <= temp -> addr_Begin){
                temp_free = temp_free -> next;
            }

            mem_Block *newBlock = new mem_Block;
            newBlock -> next = temp_free -> next;   // 将新分区的next指针指向原先的下一块
            if(temp_free->next){
                temp_free -> next -> prior = newBlock;  // 将原先下一块的prior指针指向此新分区
            }
            newBlock -> prior = temp_free;  // 将新分区的prior指针指向原先的上一块
            temp_free -> next = newBlock;   // 将原先上一块的next指针指向此新分区
            newBlock -> id = temp_free -> id + 1;
            newBlock -> addr_Begin = temp -> addr_Begin;
            newBlock -> size = temp -> size;
            newBlock -> addr_End = temp -> addr_End;
            freeBlockNum++;

            // 更新其后的空闲分区号
            while(newBlock -> next){
                newBlock = newBlock -> next;
                newBlock -> id++;
            }
        }
        else if((temp->id == 1 && temp->next->state == 0)     // 回收首块,且第二块为空闲
            || (temp->prior->state == 1 && temp->next->state == 0)) {  // 回收中间块,且其下为空,其上不为空
            // 在空闲分区链中找到对应的空闲块
            mem_Block *temp_free = head_free->next;
            while(temp_free && temp_free->addr_Begin != temp->next->addr_Begin){
                temp_free = temp_free->next;
            }
            // 将空闲分区链中的该空闲块扩大
            temp_free->addr_Begin = temp->addr_Begin;  // 起始地址提前
            temp_free->size += temp->size;  // 容量扩大

            // 在内存分区链中将其下的空闲块合并
            temp->size += temp->next->size;
            temp->addr_End = temp->next->addr_End;
            temp->state = 0;
            temp->jobAllocated = 0;
            temp->next = temp->next->next;
            if(temp->next)
               temp->next->prior = temp;
            // 其后的块序号减一
            while(temp->next){
                temp = temp->next;
                temp->id--;
            }
            memBlockNum--;

        }
        else if((temp->id == memBlockNum && temp->prior->state == 0)    // 回收末块,且其上为空
            || (temp->prior->state == 0 && temp->next->state == 1)){   // 回收中间块,其上为空,其下不为空
            // 在空闲分区链中找到对应的空闲块
            mem_Block *temp_free = head_free->next;
            while(temp_free && temp_free->addr_Begin != temp->prior->addr_Begin){
                temp_free = temp_free->next;
            }
            // 将空闲分区链中的该空闲块扩大
            temp_free->addr_End = temp->addr_End;  // 终止地址推后
            temp_free->size += temp->size;  // 容量扩大

            // 在内存分区链中将其合并到其上的空闲块中
            temp->prior->size += temp->size;
            temp->prior->addr_End = temp->addr_End;
            temp->prior->next = temp->next;
            if(temp->next)
                temp->next->prior = temp->prior;
            // 其后的块序号减一
            temp = temp->prior;
            while(temp->next){
                temp = temp->next;
                temp->id--;
            }
            memBlockNum--;
        }
        else if (temp->id != 1 && temp->id != memBlockNum           // 回收的非首块和末块,且其上下两块均为空闲块
              && temp->prior->state == 0 && temp->next->state == 0){
            // 在空闲分区链中找到对应的空闲块
            mem_Block *temp_free = head_free->next;
                while(temp_free && temp_free->addr_Begin != temp->prior->addr_Begin){
                temp_free = temp_free->next;
            }
            // 将空闲分区链中的该空闲块与其后的一个空闲块合并
            temp_free->size += temp_free->next->size + temp->size;
            temp_free->addr_End = temp_free->next->addr_End;
            temp_free->next = temp_free->next->next;
            if(temp_free->next)
                temp_free->next->prior = temp_free;

            // 空闲分区链中将该作业块和其下的空闲块合并到其上的空闲块中
            temp->prior->addr_End = temp->next->addr_End;
            temp->prior->size = temp->prior->size + temp->size + temp->next->size;
            temp->prior->next = temp->next->next;
            if(temp->prior->next)
            temp->prior->next->prior = temp->prior;
            // 其后的块序号减二
            temp = temp->prior;
            while(temp->next){
                temp = temp->next;
                temp->id -= 2;
            }

            freeBlockNum--;
            memBlockNum -= 2;
        }
        else
            QMessageBox::warning(0,"Error!", "There is something wrong with reaping this job.");

        render();
    }
}

void Widget::on_require_clicked()
{
    jobNum++;
    alloc = new Require(this, jobNum);
    QObject::connect(alloc, SIGNAL(toAddJob(int)), this, SLOT(addJob(int)));
    alloc->exec();
}

void Widget::on_reap_clicked()
{
    reap = new Reap(this);
    QObject::connect(reap, SIGNAL(toReapJob(int)), this, SLOT(reapJob(int)));
    reap->exec();
}
