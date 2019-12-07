#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
}

void MainWindow::on_btn_decode_clicked()
{
    encoded("/home/gxk/Main.class","/home/gxk/111");
    decoding("/home/gxk/111","/home/gxk/222");
}
