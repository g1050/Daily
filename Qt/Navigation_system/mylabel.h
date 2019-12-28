#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>
#include <QLabel>
#include "common.h"

class MyLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = 0);
//    void paintEvent(QPaintEvent *event)
//    {
//        QLabel::paintEvent(event);//先调用父类的paintEvent为了显示'背景'!!!
//        QPainter painter(this);
//        painter.setPen(QPen(Qt::red,2));
////        painter.drawRect(QRect(x,y,w,h));
//    //画线条
//        painter.drawLine(100,100,150,150);
//    }

signals:

public slots:
};

#endif // MYLABEL_H
