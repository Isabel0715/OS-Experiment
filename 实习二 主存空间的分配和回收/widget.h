#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <string>
#include<iostream>
using namespace std;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void render();

private slots:

    void on_require_clicked();

    void on_reap_clicked();

    void addJob(int jSize);

    void reapJob(int reapJobID);


private:
    Ui::Widget *ui;

    QDialog *alloc;

    QDialog *reap;
};

#endif // WIDGET_H
