#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);

    ~Widget();

    void init();

    void produce();

    void consume();

    void Wait(int &s, QString pName, QString semaphoreName);

    void Release(int &s, QString pName, QString semaphoreName);

    void p(int &s, QString pName, QString semaphoreName);

    void v(int &s, QString pName, QString semaphoreName);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();
    
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
