#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(700,700);


    mbar = this->menuBar();
    this->setMenuBar(mbar);
    menu = mbar->addMenu("dialog");
    p1 = menu->addAction("mootaiduihua");
    p2 = menu->addAction("feimotai");
    p3 = menu->addAction("question");
    p4 = menu->addAction("about");
    p5 = menu->addAction("File");

    connect(p1,&QAction::triggered,
            [=](){
                //dlg.show();
                dlg.exec();
                qDebug()<< "2333" << endl;

            }

            );

    connect(p2,&QAction::triggered,
            [=](){
                dlg2.show();
            }
            );

    connect(p3,&QAction::triggered,
            [=](){
                int ret =  QMessageBox::question(this,"title","content",QMessageBox::Yes | QMessageBox::No,QMessageBox::Yes);
                switch(ret){
                    case QMessageBox::Yes:
                        qDebug() << "YES" << endl;
                        break;
                    case QMessageBox::No:
                        qDebug() << "NO" << endl;
                        break;
                }

            }
    );

    connect(p4,&QAction::triggered,
            [=](){
                QMessageBox::about(NULL, "title", "content");
            }
            );

    connect(p5,&QAction::triggered,
            [=](){
                QString path = QFileDialog::getOpenFileName(this,"open","/home/gxk/","source(*.cpp *.h .txt *.txt);;Text(*.txt)");
                qDebug() << path << endl;
            }
            );
//    btn = new QPushButton();
//    btn->setParent(this);
//    btn->setText("23333");
//    btn->resize(100,50);
//    btn->show();

}

MainWindow::~MainWindow()
{

}
