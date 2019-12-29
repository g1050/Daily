#include "mainmenu.h"


MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
}

MainMenu::MainMenu(int type,DataBase *nsdb)
{
    ui.setupUi(this);
    mypix = new QPixmap();
    mypix->load("/home/gxk/Daily/Qt/"
                "build-Navigation_system-Desktop_Qt_5_8_0_GCC_64bit-Debug/"
                "平面图2.png");
    ui.lb_map->setScaledContents(true);
    ui.lb_map->setPixmap(*mypix);




    /*************Get Vertex to add item****************/
    this->nsdb->getVertex(vadjlist);
    //ui.cb_ed->disconnect();
    ui.cb_st->clear();
    for(int i = 0;i<vadjlist.size();i++){
        ui.cb_st->addItem(vadjlist[i].name);
        ui.cb_ed->addItem(vadjlist[i].name);
    }
    /*****************************/

    graph = new Graph(nsdb);

    this->type = type;
    if(this->type != 1){
       ui.btn_manage->hide();
    }

}

/*当点击按钮时获得起点和终点*/
void MainMenu::on_btn_findpath_clicked()
{
    vcoordinate.clear();
    QString st = ui.cb_st->currentText();
    QString ed = ui.cb_ed->currentText();

    int i = graph->local(st);
    int j = graph->local(ed);


    //调用寻找各点到源点的最短距离
    graph->Dijkstra(i);
    //寻找最短路的路径
    graph->getPath(j,vcoordinate);

    loadPixture();


}

void MainMenu::on_btn_manage_clicked()
{
    manager = new Manager(nsdb);
    //this->hide();
    manager->show();
    //this->show();
}

void MainMenu::loadPixture()
{
    /*****************DrawBackGround***********************/
    mypix->load("/home/gxk/Daily/Qt/"
                "build-Navigation_system-Desktop_Qt_5_8_0_GCC_64bit-Debug/"
                "平面图2.png");
    QPainter painter;
    painter.begin(mypix);

    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::red);
    pen.setStyle(Qt::SolidLine);

    painter.setPen(pen);


    int size = vcoordinate.size();
    qDebug() << "size = " <<size;
    if(size != 0){
       for(int i = 0;i<size-1;i++){
            int x1 = vcoordinate[i].x-10,y1 = vcoordinate[i].y-10;
            int x2 = vcoordinate[i+1].x-10,y2 = vcoordinate[i+1].y-10;
            qDebug() << x1 << " " << y1 << x2 << " " << y2;
            painter.drawLine(x1,y1,x2,y2);
        }
    }

    painter.end();

    ui.lb_map->setScaledContents(true);
    ui.lb_map->setPixmap(*mypix);

    update();
}


void MainMenu::on_btn_clear_clicked()
{
    mypix->load("/home/gxk/Daily/Qt/"
                "build-Navigation_system-Desktop_Qt_5_8_0_GCC_64bit-Debug/"
                "平面图2.png");
    ui.lb_map->setScaledContents(true);
    ui.lb_map->setPixmap(*mypix);

    update();
}
