#ifndef REAP_H
#define REAP_H

#include <QDialog>
#include<iostream>
using namespace std;

namespace Ui {
class Reap;
}

class Reap : public QDialog
{
    Q_OBJECT

public:
    explicit Reap(QWidget *parent = 0);
    ~Reap();

private slots:
    void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

signals:

    void toReapJob(int reapJobId );

private:
    Ui::Reap *ui;
    int reapJobId;
};

#endif // REAP_H
