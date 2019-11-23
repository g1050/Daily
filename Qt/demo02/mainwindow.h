#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QPushButton>
#include "subwindow.h"
#include <QString>
#include <QDebug>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

public slots:
    void myslot();
    void myslot2();
    void hs();
    void hs2();
    void dealSlot(int num,QString s);
private:
    Ui::MainWindow ui;
    QPushButton btn1;
    QPushButton *btn2;
    QPushButton btn3;
    subwindow w2;
//    void myslot();
};

#endif // MAINWINDOW_H
