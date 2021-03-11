#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<iostream>
#include <QMainWindow>
#include <QDialog>
#include <string>
using namespace std;

extern  string newName;
extern  int newTime;
extern  int newPri;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;

private slots:

    void on_pushButton_2_clicked();

    void beginSort();

    void addPro(string newName, int newPri, int newTime);

    void on_scheduleBtn_clicked();

    void on_runnningTime_textChanged(const QString &arg1);

    void on_priorityReduced_textEdited(const QString &arg1);

private:

    QDialog* add;
};

#endif // MAINWINDOW_H
