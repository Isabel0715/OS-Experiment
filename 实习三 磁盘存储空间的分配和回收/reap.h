#ifndef REAP_H
#define REAP_H

#include <QDialog>

namespace Ui {
class reap;
}

class reap : public QDialog
{
    Q_OBJECT

public:
    explicit reap(QWidget *parent = 0);
    ~reap();
signals:
    void toReapBlock(int newBlockID );
private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::reap *ui;

    int newFreeBlockID;

    bool valueEntered = false;
};

#endif // REAP_H
