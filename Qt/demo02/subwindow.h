#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QWidget>
#include <QString>
#include <QPushButton>
class subwindow : public QWidget
{
    Q_OBJECT
public:
    explicit subwindow(QWidget *parent = 0);

signals:
    void mysignals(int num,QString str);//重载xinhao

    void mysignals();
public slots:
    void sendslots();

private:
    QPushButton btn;
};

#endif // SUBWINDOW_H
