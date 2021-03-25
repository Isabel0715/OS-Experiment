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

    void init();

    void render();

    ~Widget();


private slots:
    void on_inputM_textChanged(const QString &arg1);

    void on_inputN_textChanged(const QString &arg1);

    void on_require_clicked();

    void on_reap_clicked();

    void reapBlock(int newFreeBlockID);

private:
    Ui::Widget *ui;

    QDialog *Reap;
};

#endif // WIDGET_H
