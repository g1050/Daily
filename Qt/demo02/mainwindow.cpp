#include "mainwindow.h"
#include "mybutton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{//mainwindows 's constructor
 //func firsly move here

    ui.setupUi(this);

    this->resize(500,500);

    btn1.setParent(this);
    btn1.setText("Hello Qt!");
    btn1.move(100,100);
    btn1.resize(75,30);

    btn2 = new QPushButton(this);
    btn2->setText("Hi gxk!");
    btn2->move(50,50);

    btn3.setParent(this);
    btn3.setText("To sub");
    btn3.resize(75,30);
    btn3.move(200,200);

    connect(&btn1,&QPushButton::pressed,this,&QWidget::close);
    connect(btn2,&QPushButton::pressed,this,&MainWindow::myslot);
    connect(btn2,&QPushButton::pressed,this,&MainWindow::myslot2);//one signal to two slots
    connect(&btn3,&QPushButton::clicked,this,&MainWindow::hs);


    void (subwindow::*p2)(int,QString) = &subwindow::mysignals;
    void (subwindow::*p1)() = &subwindow::mysignals;
    connect(&w2,p1,this,&MainWindow::hs2);
    //connect(&w2,&subwindow::mysignals,this,&MainWindow::dealSlot);会报错因为不知道是哪个槽函数
    connect(&w2,p2,this,&MainWindow::dealSlot);

    int a = 0,b = 0;
    btn4 = new QPushButton(this);
    btn4->setText("btn4");
    connect(btn4,&QPushButton::clicked,
            [=](bool isCheck)mutable{
                a = 1;
                btn4->setText("b4");
                qDebug() << "233333333" << endl;
                qDebug() << "a = " << a << "b = " << b << endl;
                qDebug() << isCheck << endl;
            }

            );

   Mybutton *btn5 = new Mybutton(this);
   btn5->move(200,200);
   btn5->setText("btn5");
}

void MainWindow::hs2()
{
    this->show();
    w2.hide();
    return ;
}

void MainWindow::dealSlot(int num,QString s)
{
    qDebug() << num << s << endl;
    return ;
}

void MainWindow::hs()
{
    this->hide();
    w2.show();
    return ;
}

void MainWindow::myslot()
{
    btn1.setText("23333");
    return ;
}

void MainWindow::myslot2()
{
    btn2->setText("23333");
    return ;
}
