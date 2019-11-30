#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qtoolbobx.h"
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private:
    Ui::MainWindow ui;
    ToolBox tb;
};

#endif // MAINWINDOW_H
