#ifndef MAINWINDOWS_H
#define MAINWINDOWS_H

#include "ui_mainwindows.h"
#include <QPainter>
class MainWindows : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindows(QWidget *parent = 0);
//    void paintEvent(QPaintEvent *)
//    {
//        QPixmap mypix("/home/gxk/图片/xiyoulinux.png");
//        QPainter painter;
//        painter.begin(&mypix);

//        painter.setPen(Qt::red);
//        painter.drawLine(x1,y1,x2,y2);
//        //painter.drawText(0,5,100,20,Qt::AlignTop,"500");    //这里要确保你的坐标等等参数正确，不然你就不知道画到哪里去了
//        painter.end();

//        ui.label->setPixmap(mypix);
//    }

private slots:
    void on_pushButton_clicked();

private:
    int x1 = 0,y1 = 5;
    int x2 = 11,y2 = 20;
    Ui::MainWindows ui;
};

#endif // MAINWINDOWS_H
