#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QDebug>
class Mybutton : public QPushButton
{
    Q_OBJECT
public:
    explicit Mybutton(QWidget *parent = 0);
     ~Mybutton(){
        qDebug() << "xigouhanshu" << endl;
    }

signals:

public slots:
};

#endif // MYBUTTON_H
