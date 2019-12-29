#include "mainwindows.h"

MainWindows::MainWindows(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);


}

void MainWindows::on_pushButton_clicked()
{
    x1+= 10;
    x2+=10;
}
