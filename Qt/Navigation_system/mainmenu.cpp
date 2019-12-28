#include "mainmenu.h"

void MainMenu::initScene()
{
    QGraphicsPixmapItem *item =
            scene->addPixmap (QPixmap("/home/gxk/Daily/Qt"
                                      "/build-Navigation_system-Desktop_Qt_5_8_0_GCC_64bit-Debug/"
                                      "平面图.png"));
//    item->setFlag (QGraphicsItem::ItemIsMovable);
    item->setPos (-500, -420);
}

MainMenu::MainMenu(QMainWindow *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
}

MainMenu::MainMenu(int type,DataBase *nsdb)
{
    ui.setupUi(this);
    this->nsdb = nsdb;

    /*******************Draw Background******************/
    scene = new QGraphicsScene;
    scene->setSceneRect (-100, -100, 700, 700);
    initScene();
    view = new QGraphicsView;
    view->setScene (scene);
    view->setMinimumSize (800, 800);
    view->show ();
    setCentralWidget(view);
    /*******************************************/

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
    QString st = ui.cb_st->currentText();
    QString ed = ui.cb_ed->currentText();

    int i = graph->local(st);
    int j = graph->local(ed);

    //qDebug() << "i = " << i << "j = " << j ;
    //调用寻找各点到源点的最短距离
    graph->Dijkstra(i);
    //寻找最短路的路径
    graph->getPath(j,vcoordinate);
    update();




    //qDebug() << st << " " <<ed;

}

void MainMenu::on_btn_manage_clicked()
{
    manager = new Manager(nsdb);
    //this->hide();
    manager->show();
    //this->show();
}
