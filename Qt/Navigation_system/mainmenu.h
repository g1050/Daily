#ifndef MAINMENU_H
#define MAINMENU_H

#include "ui_mainmenu.h"
#include "graph.h"
#include "database.h"
#include "manager.h"
#include "mylabel.h"
#include <QMainWindow>

class MainMenu : public QMainWindow
{
    Q_OBJECT
private:
    std::vector<Coordinate> vcoordinate;
    std::vector<AdjList> vadjlist;
    Ui::MainMenu ui;
    Manager *manager;
    int type;
    DataBase *nsdb;
    Graph *graph;
    MyLabel *label;
public:
    explicit MainMenu(QWidget *parent = 0);
    MainMenu(int type,DataBase *nsdb);
//    void paintEvent(QPaintEvent *)
//    {
//        //QPainter p(this);
//        QPainter p;

//        QPen pen;
//        pen.setWidth(5);
//        pen.setColor(Qt::red);
//        pen.setStyle(Qt::DashLine);

//        p.begin(this);
//        p.setPen(pen);

//        int size = vcoordinate.size();
//        qDebug() << "size = " <<size;
//        if(size != 0){
//            for(int i = 0;i<size-1;i++){
//                p.drawLine(vcoordinate[i].x,vcoordinate[i].y,vcoordinate[i+1].x,vcoordinate[i+1].y);
//            }
//        }



////        p.drawRect(200,200,100,50);
////        p.drawEllipse(QPoint(150,150),50,50);

//        p.end();
//        update();
//        return ;
//    }
//    void mousePressEvent(QMouseEvent *event)
//    {
//       QString msg=QString("鼠标位置:%1,%2").arg(event->pos().x()).arg(event->pos().y());
////       QPoint point = event->pos();
////       qDebug() << point;
////       x1+=10;
////       y2+=10;
////       update();
//      //this->ui.ln_mouse->setText(msg);
//      //this->ui.lb_mouse2->setText(msg);
//      qDebug() << msg ;
//      update();
//    }

private slots:
    void on_btn_findpath_clicked();

    void on_btn_manage_clicked();


};

#endif // MAINMENU_H
