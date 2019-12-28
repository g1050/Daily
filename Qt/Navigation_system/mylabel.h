#ifndef MYLABEL_H
#define MYLABEL_H
#include <QLabel>
#include "common.h"


class MyLabel : public QLabel{
    Q_OBJECT
public:

    explicit MyLabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    void paintEvent(QPaintEvent *event)
    {
        QLabel::paintEvent(event);//先调用父类的paintEvent为了显示'背景'!!!
        QPainter painter(this);
        painter.setPen(QPen(Qt::red,2));
        //painter.drawRect(QRect(100,100,w,h));
        //画线条
        painter.drawLine(100,100,150,200);
    }
};

#endif // MYLABEL_H
