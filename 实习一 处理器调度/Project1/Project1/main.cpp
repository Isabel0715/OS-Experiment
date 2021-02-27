#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

enum state { Ready, End };
struct PCB {
	int pid;
	string pName;
	int timeRequired;
	int priority;
	state state = Ready;
	PCB *next = nullptr;
};

int runnningTime = 1;	//每次运行的时间长度
int priorityReduced = 1; // 每次运行后的优先级降低数

void sort(PCB *head, int pNum) {
	// 按照优先级对进程进行排序
	for (int i = 0; i < pNum; i++) {
		PCB *pre = head, *node1 = pre->next, *node2 = node1->next;
		int count = 0;
		while (node1 != nullptr && node2 != nullptr) {
			if ( node1->priority < node2->priority	// 优先级高的进程排在前面 
				|| (node1->priority == node2->priority && node1->timeRequired > node2-> timeRequired) // 优先级相同时，剩余时间短的进程排在前面
				|| (node1->priority == node2->priority && node1->timeRequired == node2->timeRequired && node1->pid > node2->pid)	// 优先级、剩余时间均相同时，pid小的排在前面
				) {
				node1->next = node2->next;
				node2->next = node1;
				pre->next = node2;
				count++;
			}
			pre = pre->next;
			node1 = pre->next;
			node2 = node1->next;
		}
		if (count == 0)
			break;
	}
}

void schedule(PCB *head, int pNum) {
	// 默认运行链表中的首个进程
	PCB *first = head->next;
	if (first && first->state == Ready) {	// 若存在就绪进程
		cout << "运行进程" << first->pName << ": " << endl;
		for (int i = 0; i < runnningTime; i++) {
			Sleep(300);
			cout << i + 1 << "个时间单位";
			Sleep(300);
			cout << ".";
			Sleep(300);
			cout << ".";
			Sleep(300);
			cout << "." << endl;
			Sleep(300);
		}
		first->priority -= priorityReduced; // 运行后，降低优先级
		first->timeRequired -= runnningTime; //减少所需的运行时间
		cout << "该进程的优先级变为：" << first->priority << endl;	
		cout << "该进程剩余的运行时间为：" << first->timeRequired << "个时间单位" << endl; 
		if (first->timeRequired <= 0) {
			first->state = End;
			cout << "该进程运行完毕." << endl;
			cout << "--------------------------------" << endl;
			head->next = first->next;
		}
		else {
			sort(head, pNum);	//对剩余进程重新排序
			cout << "--------------------------------" << endl;
		}
	}
	else {
		cout << "无进程，调度结束." << endl;
		cout << "--------------------------------" << endl;
		exit(-1);
	}
}
int main() {
	cout << "--------------------------------" << endl;
	cout << "请输入所需调度的进程数： " << endl;
	int pNum = 0;
	cin >> pNum;
	PCB *head = new PCB;
	PCB *temp = new PCB;
	temp = head;
	for (int i = 0; i < pNum; i++) {
		temp->next = new PCB;
		temp = temp->next;
		cout << "请输入进程" << i+1 << "的进程名、优先数及要求运行时间： " << endl;
		temp->pid = i;
		cin >> temp->pName >> temp->priority >> temp->timeRequired;
	}
	cout << "--------------------------------" << endl;
	sort(head, pNum);
	int scheduleNum = 0;
	char op = ' ';
	cout << "按一次s进行一个时间单位的调度： " << endl;
	while (true) {
		cin >> op;
		if ( op == 's'){
			schedule(head, pNum);
		}
	}
	return 0;
}