#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{

    new MyButton(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui.setupUi(this);
}
