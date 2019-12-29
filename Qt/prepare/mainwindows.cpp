#include "mainwindows.h"

MainWindows::MainWindows(QWidget *parent) :
    QMainWindow(parent)
{
//    ui.setupUi(this);
//    //ui.setupUi(this);
    QPushButton *btn = new QPushButton(this);
    btn->setText("233333333");
    connect(btn,&QPushButton::clicked,
                [=](bool isCheck)mutable{
                    //a = 1;
                    btn->setText("b4");
                    this->close();
                    //qDebug() << "233333333" << endl;
                    //Debug() << "a = " << a << "b = " << b << endl;
                    //qDebug() << isCheck << endl;
                }
                );


}

void MainWindows::on_pushButton_clicked()
{
    x1+= 10;
    x2+=10;
}
