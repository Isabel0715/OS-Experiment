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

int runnningTime = 1;	//ÿ�����е�ʱ�䳤��
int priorityReduced = 1; // ÿ�����к�����ȼ�������

void sort(PCB *head, int pNum) {
	// �������ȼ��Խ��̽�������
	for (int i = 0; i < pNum; i++) {
		PCB *pre = head, *node1 = pre->next, *node2 = node1->next;
		int count = 0;
		while (node1 != nullptr && node2 != nullptr) {
			if ( node1->priority < node2->priority	// ���ȼ��ߵĽ�������ǰ�� 
				|| (node1->priority == node2->priority && node1->timeRequired > node2-> timeRequired) // ���ȼ���ͬʱ��ʣ��ʱ��̵Ľ�������ǰ��
				|| (node1->priority == node2->priority && node1->timeRequired == node2->timeRequired && node1->pid > node2->pid)	// ���ȼ���ʣ��ʱ�����ͬʱ��pidС������ǰ��
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
	// Ĭ�����������е��׸�����
	PCB *first = head->next;
	if (first && first->state == Ready) {	// �����ھ�������
		cout << "���н���" << first->pName << ": " << endl;
		for (int i = 0; i < runnningTime; i++) {
			Sleep(300);
			cout << i + 1 << "��ʱ�䵥λ";
			Sleep(300);
			cout << ".";
			Sleep(300);
			cout << ".";
			Sleep(300);
			cout << "." << endl;
			Sleep(300);
		}
		first->priority -= priorityReduced; // ���к󣬽������ȼ�
		first->timeRequired -= runnningTime; //�������������ʱ��
		cout << "�ý��̵����ȼ���Ϊ��" << first->priority << endl;	
		cout << "�ý���ʣ�������ʱ��Ϊ��" << first->timeRequired << "��ʱ�䵥λ" << endl; 
		if (first->timeRequired <= 0) {
			first->state = End;
			cout << "�ý����������." << endl;
			cout << "--------------------------------" << endl;
			head->next = first->next;
		}
		else {
			sort(head, pNum);	//��ʣ�������������
			cout << "--------------------------------" << endl;
		}
	}
	else {
		cout << "�޽��̣����Ƚ���." << endl;
		cout << "--------------------------------" << endl;
		exit(-1);
	}
}
int main() {
	cout << "--------------------------------" << endl;
	cout << "������������ȵĽ������� " << endl;
	int pNum = 0;
	cin >> pNum;
	PCB *head = new PCB;
	PCB *temp = new PCB;
	temp = head;
	for (int i = 0; i < pNum; i++) {
		temp->next = new PCB;
		temp = temp->next;
		cout << "���������" << i+1 << "�Ľ���������������Ҫ������ʱ�䣺 " << endl;
		temp->pid = i;
		cin >> temp->pName >> temp->priority >> temp->timeRequired;
	}
	cout << "--------------------------------" << endl;
	sort(head, pNum);
	int scheduleNum = 0;
	char op = ' ';
	cout << "��һ��s����һ��ʱ�䵥λ�ĵ��ȣ� " << endl;
	while (true) {
		cin >> op;
		if ( op == 's'){
			schedule(head, pNum);
		}
	}
	return 0;
}