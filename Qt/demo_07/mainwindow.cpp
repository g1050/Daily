#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);

    ui.label->setStyleSheet("QLabel{color:rgb(0,255,255);background-color:yellow;"
                            "border-image:url(:/home/gxk/图片/xiyoulinux.png)}"
                            "");
}


void MainWindow::paintEvent(QPaintEvent *)
{
    //QPainter p(this);
    QPainter p;

    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::red);
    pen.setStyle(Qt::DashLine);

    p.begin(this);
    p.setPen(pen);
    //p.drawPixmap(0,0,width(),height(),QPixmap("/home/gxk/图片/xiyoulinux.png"));

    p.drawLine(50,60,150,50);
    p.drawLine(50,50,50,150);

    p.drawRect(200,200,100,50);
    p.drawEllipse(QPoint(150,150),50,50);

    p.end();
    return ;
}
