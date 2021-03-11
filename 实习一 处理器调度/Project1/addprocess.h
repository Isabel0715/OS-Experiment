#ifndef ADDPROCESS_H
#define ADDPROCESS_H

#include <QDialog>
#include<iostream>
#include<string>

using namespace std;
namespace Ui {
class addProcess;
}

class addProcess : public QDialog
{
    Q_OBJECT

public:
    
    addProcess(QWidget * parent, int pid);

	~addProcess();


private slots:
    void on_pName_textEdited(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_priority_textEdited(const QString &arg1);

    void on_timeRequired_textEdited(const QString &arg1);

	void on_pushButton_clicked();

signals:
    void toBeginSort();

	void toAddProcess(string newName, int newPri, int newTime);

private:
    Ui::addProcess *ui;

};

#endif // ADDPROCESS_H
