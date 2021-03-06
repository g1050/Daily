#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QPainter>

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *);
public:
    explicit MainWindow(QWidget *parent = 0);

private:
    Ui::MainWindow ui;

};

#endif // MAINWINDOW_H
