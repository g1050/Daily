#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    ui.label->setStyleSheet("QLabel{color:rgb(0,255,255);background-color:yellow}");
}
