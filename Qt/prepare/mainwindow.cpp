//MainWidget.cpp
//最短路径算法，和界面的实现

#include "mainwindow.h"
#include <qdebug.h>
#include <QToolBar>
#include <QtAlgorithms>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
   : QMainWindow(parent)
{
//    mapWidget = new MapWidget;
//    painter = new QPainter();
   dj = new MainWindow::DijkstraFindPath();
   dj->CreateGraph ();

   scene = new QGraphicsScene;
   scene->setSceneRect (-100, -100, 700, 700);
   initScene();

   view = new QGraphicsView;
   view->setScene (scene);
   view->setMinimumSize (800, 800);
   view->show ();
   setCentralWidget (view);

   createToolBar ();  //实现一个工具栏
//    setCentralWidget (mapWidget);
//    setMinimumSize (600, 400);  //设置最小尺寸
}

MainWindow::DijkstraFindPath::DijkstraFindPath()
{
   mgraph.vexnum = 31;                      //初始化点数目
      for (int i = 0; i < mgraph.vexnum; i++) //初始化点编号
          mgraph.vexs.push_back (i);
      mgraph.arcnum = 80;                     //暂定
      for (int i = 0; i < mgraph.vexnum; i++) {
          for (int j = 0; j < mgraph.vexnum; j++) {
              if (i == j)
                  mgraph.arcs[i][j].adj = 0;
              else
                  mgraph.arcs[i][j].adj = INF;
  //            mgraph.arcs[i][j].info = "";
          }
      }
}

void MainWindow::DijkstraFindPath::CreateGraph ()
{
       mgraph.arcs[0][1].adj = mgraph.arcs[1][0].adj = 45;    //6 - 5
       mgraph.arcs[0][6].adj = mgraph.arcs[6][0].adj = 165;   //6 - 10
       mgraph.arcs[1][2].adj = mgraph.arcs[2][1].adj = 45;    //5 - 4
       mgraph.arcs[2][3].adj = mgraph.arcs[3][2].adj = 45;    //4 - 3
       mgraph.arcs[3][4].adj = mgraph.arcs[4][3].adj = 45;    //3 - 2
       mgraph.arcs[3][15].adj = mgraph.arcs[15][3].adj = 24;  //3 - 22
       mgraph.arcs[4][5].adj = mgraph.arcs[5][4].adj = 45;    //2 - 1
       mgraph.arcs[13][15].adj = mgraph.arcs[15][13].adj = 85;//23 - 22
       mgraph.arcs[0][13].adj = mgraph.arcs[13][0].adj = 55;  //6 - 23
       mgraph.arcs[13][2].adj = mgraph.arcs[2][13].adj = 50;  //23 - 4
       mgraph.arcs[5][11].adj = mgraph.arcs[11][5].adj = 65;  //1 - 一食堂
       mgraph.arcs[11][12].adj = mgraph.arcs[12][11].adj = 10;//一食堂-操场
       mgraph.arcs[11][27].adj = mgraph.arcs[27][11].adj = 85;//一食堂-祁通1
       mgraph.arcs[27][28].adj = mgraph.arcs[28][27].adj = 85;//祁通1-祁通2(路口)
       mgraph.arcs[5][29].adj = mgraph.arcs[29][5].adj = 87;  //一食堂-岔路口
       mgraph.arcs[29][9].adj = mgraph.arcs[9][29].adj = 80;  //岔路-7
       mgraph.arcs[29][11].adj = mgraph.arcs[11][29].adj = 60;//一食堂到岔路(通向7号楼的)
       mgraph.arcs[29][30].adj = mgraph.arcs[30][29].adj = 32;//岔路-祁通大道
       mgraph.arcs[30][10].adj = mgraph.arcs[10][30].adj = 90;//祁通大道-图书馆
       mgraph.arcs[30][28].adj = mgraph.arcs[28][30].adj = 80;//祁通大道-祁通2
       mgraph.arcs[28][26].adj = mgraph.arcs[26][28].adj = 15;//祁通2-方肇周
       mgraph.arcs[25][27].adj = mgraph.arcs[27][25].adj = 273;    //西大门-祁通1
       mgraph.arcs[27][28].adj = mgraph.arcs[28][27].adj = 184;//祁通1-祁通2
//        mgraph.arcs[25][12].adj = mgraph.arcs[12][25].adj = 108; //西大门-西操
       mgraph.arcs[5][12].adj = mgraph.arcs[12][5].adj = 70;  //1 - 操场
       mgraph.arcs[6][7].adj = mgraph.arcs[7][6].adj = 45;    //10 - 9
       mgraph.arcs[7][8].adj = mgraph.arcs[8][7].adj = 45;    //9 - 8
       mgraph.arcs[8][9].adj = mgraph.arcs[9][8].adj = 45;    //8 - 7
       mgraph.arcs[9][10].adj = mgraph.arcs[10][9].adj = 150; //7 - 图书馆
       mgraph.arcs[6][14].adj = mgraph.arcs[14][6].adj = 140; //10 - 13
       mgraph.arcs[14][16].adj = mgraph.arcs[16][14].adj = 39;//13 - 12
       mgraph.arcs[14][17].adj = mgraph.arcs[17][14].adj = 39;//13 - 16
       mgraph.arcs[16][18].adj = mgraph.arcs[18][16].adj = 39;//12 - 15
       mgraph.arcs[17][18].adj = mgraph.arcs[18][17].adj = 39;//16 - 15
       mgraph.arcs[18][19].adj = mgraph.arcs[19][18].adj = 39;//15 - 14
       mgraph.arcs[17][20].adj = mgraph.arcs[20][17].adj = 137;//16 - 19
       mgraph.arcs[20][21].adj = mgraph.arcs[21][20].adj = 39; //19 - 18
       mgraph.arcs[21][22].adj = mgraph.arcs[22][21].adj = 39; //18 - 17
       mgraph.arcs[19][22].adj = mgraph.arcs[22][19].adj = 130;//14 - 17
       mgraph.arcs[22][23].adj = mgraph.arcs[23][22].adj = 53; //17 - 二超
       mgraph.arcs[23][24].adj = mgraph.arcs[24][23].adj = 5;  //二超 - 二食堂
       mgraph.arcs[24][10].adj = mgraph.arcs[10][24].adj = 260;//二食堂-图书馆

       //以下处理细节


       mgraph.arcnum = 80;
}

void MainWindow::DijkstraFindPath::dijkstra (int startPos)
{
  for (int i = 0; i < mgraph.vexnum; i++) d[i] = INF;
  for (int i = 0; i < mgraph.vexnum; i++) used[i] = false;
  for (int i = 0; i < mgraph.vexnum; i++) prev[i] = -1;
  d[startPos] = 0;

  while (true) {
      int v = -1;
      for (int u = 0; u < mgraph.vexnum; u++) {
          if (!used[u] && (v == -1 || d[u] < d[v])) v = u;
      }

      if (v == -1) break;
      used[v] = true;

      for (int u = 0; u < mgraph.vexnum; u++) {
          if (d[u] > d[v] + mgraph.arcs[v][u].adj) {
              d[u] = d[v] + mgraph.arcs[v][u].adj;
              prev[u] = v;
          }
      }
  }
}

QVector<int> MainWindow::DijkstraFindPath::get_Path (int endPos)
{
  QVector<int> path;

  for ( ; endPos != -1; endPos = prev[endPos]) {
//        std::cout << "EndPos: " << endPos << ", ";
      path.push_back (endPos);
  }

  std::reverse(path.begin (), path.end ());

  return path;
}

void MainWindow::initScene ()
{
  QGraphicsPixmapItem *item =
          scene->addPixmap (QPixmap("NanTong.jpg"));
//    item->setFlag (QGraphicsItem::ItemIsMovable);
  item->setPos (-500, -420);
}

MainWindow::~MainWindow()
{

}

void MainWindow::createToolBar ()
{
  QToolBar *toolBar = addToolBar ("Tool");
  startLabel = new QLabel(tr("起点: "));
  startComboBox = new QComboBox;
  startComboBox->addItem (tr("公寓6号楼"));  //0
  startComboBox->addItem (tr("公寓5号楼"));  //1
  startComboBox->addItem (tr("公寓4号楼"));  //2
  startComboBox->addItem (tr("公寓3号楼"));  //3
  startComboBox->addItem (tr("公寓2号楼"));  //4
  startComboBox->addItem (tr("公寓1号楼"));  //5

  startComboBox->addItem (tr("公寓10号楼")); //6
  startComboBox->addItem (tr("公寓9号楼"));  //7
  startComboBox->addItem (tr("公寓8号楼"));  //8
  startComboBox->addItem (tr("公寓7号楼"));  //9
  startComboBox->addItem (tr("图书馆"));     //10
  startComboBox->addItem (tr("一食堂")); startComboBox->addItem (tr("西操场"));  //11 12
  startComboBox->addItem (tr("公寓23号楼")); startComboBox->addItem (tr("公寓13号楼")); //13 14
  startComboBox->addItem (tr("公寓22号楼")); startComboBox->addItem (tr("公寓12号楼")); //15 16
  startComboBox->addItem (tr("公寓楼16")); startComboBox->addItem (tr("公寓楼15"));     //17 18
  startComboBox->addItem (tr("公寓楼14"));  startComboBox->addItem (tr("公寓楼19"));    //19 20
  startComboBox->addItem (tr("公寓楼18")); startComboBox->addItem (tr("公寓楼17"));     //21 22
  startComboBox->addItem (tr("二超")); startComboBox->addItem (tr("二食堂"));           //23 24
  startComboBox->addItem (tr("西大门")); startComboBox->addItem (tr("方肇周教学楼"));    //25 26

  endLabel = new QLabel(tr("\t终点: "));

  endComboBox = new QComboBox;
  endComboBox->addItem (tr("公寓6号楼"));
  endComboBox->addItem (tr("公寓5号楼"));
  endComboBox->addItem (tr("公寓4号楼"));
  endComboBox->addItem (tr("公寓3号楼"));
  endComboBox->addItem (tr("公寓2号楼"));
  endComboBox->addItem (tr("公寓1号楼"));
  endComboBox->addItem (tr("公寓10号楼"));
  endComboBox->addItem (tr("公寓9号楼"));
  endComboBox->addItem (tr("公寓8号楼"));
  endComboBox->addItem (tr("公寓7号楼"));
  endComboBox->addItem (tr("图书馆"));
  endComboBox->addItem (tr("一食堂"));    endComboBox->addItem (tr("西操场"));
  endComboBox->addItem (tr("公寓23号楼"));endComboBox->addItem (tr("公寓13号楼"));
  endComboBox->addItem (tr("公寓22号楼"));endComboBox->addItem (tr("公寓12号楼"));
  endComboBox->addItem (tr("公寓楼16"));  endComboBox->addItem (tr("公寓楼15"));
  endComboBox->addItem (tr("公寓楼14"));  endComboBox->addItem (tr("公寓楼19"));
  endComboBox->addItem (tr("公寓楼18"));  endComboBox->addItem (tr("公寓楼17"));
  endComboBox->addItem (tr("二超"));      endComboBox->addItem (tr("二食堂"));
  endComboBox->addItem (tr("西大门"));    endComboBox->addItem (tr("方肇周教学楼"));

  connect (startComboBox, SIGNAL(activated(int)), this, SLOT(setStartStation()));
  connect (endComboBox, SIGNAL(activated(int)), this, SLOT(setEndStation()));

  findPathBtn = new QToolButton;
  findPathBtn->setText (tr("\t\t绘制最短路径"));

  connect (findPathBtn, SIGNAL(clicked(bool)), this, SLOT(FindPath()));

  clearBtn = new QToolButton;
  clearBtn->setText (tr("\t\t清除"));

  connect (clearBtn, SIGNAL(clicked(bool)), this, SLOT(Clear()));

  toolBar->addWidget (startLabel);
  toolBar->addWidget (startComboBox);
  toolBar->addWidget (endLabel);
  toolBar->addWidget (endComboBox);
  toolBar->addWidget (findPathBtn);
  toolBar->addWidget (clearBtn);
}

void MainWindow::setStart(int X, int Y) {
  startX = X; startY = Y;
//    qDebug() << X << ", " << Y;
}

void MainWindow::setEnd (int X, int Y)
{
  endX = X; endY = Y;
}

void MainWindow::setStartStation ()
{
  switch (startComboBox->currentIndex ()) {
  case 0:
      setStart(-660, -534); break;
  case 1:
      setStart (-673, -490); break;
  case 2:
      setStart (-682, -446); break;
  case 3:
      setStart (-690, -400); break;
  case 4:
      setStart (-701, -355); break;
  case 5:
      setStart (-711, -310); break;
  case 6:
      setStart (-457, -555); break;
  case 7:
      setStart (-449, -485); break;
  case 8:
      setStart(-446, -432); break;
  case 9:
      setStart (-451, -400); break;
  case 10:
      setStart (-347, -353); break;
  case 11:
      setStart (-720, -247); break;
  case 12:
      setStart (-789, -252); break;
  case 13:
      setStart (-721, -517); break;
  case 14:
      setStart (-271, -540); break;
  case 15:
      setStart (-721, -439); break;
  case 16:
      setStart (-274, -495); break;
  case 17:
      setStart (-180, -552); break;
  case 18:
      setStart (-178, -508); break;
  case 19:
      setStart (-179, -456); break;
  case 20:
      setStart (-73, -549); break;
  case 21:
      setStart (-56, -500); break;
  case 22:
      setStart (-59, -448); break;
  case 23:
      setStart (-94, -381); break;
  case 24:
      setStart (-69, -351); break;
  case 25:
      setStart (-1070, -92); break;
  case 26:
      setStart (-438, -125); break;
  case 27:
      setStart (-721, -119); break;
  case 28:
      setStart (-550, -122); break;
  case 29:
      setStart (-555, -263); break;
  case 30:
      setStart (-498, -235); break;
  default:
      break;
  }
}

void MainWindow::setEndStation ()
{
  switch (endComboBox->currentIndex ()) {
  case 0:
      setEnd(-660, -534); break;
  case 1:
      setEnd (-673, -490); break;
  case 2:
      setEnd (-682, -446); break;
  case 3:
      setEnd (-690, -400); break;
  case 4:
      setEnd (-701, -355); break;
  case 5:
      setEnd (-711, -310); break;
  case 6:
      setEnd (-457, -555); break;
  case 7:
      setEnd (-449, -485); break;
  case 8:
      setEnd (-446, -432); break;
  case 9:
      setEnd (-451, -400); break;
  case 10:
      setEnd (-347, -353); break;
  case 11:
      setEnd (-720, -247); break;
  case 12:
      setEnd (-789, -252); break;
  case 13:
      setEnd (-721, -517); break;
  case 14:
      setEnd (-271, -540); break;
  case 15:
      setEnd (-721, -439); break;
  case 16:
      setEnd (-274, -495); break;
  case 17:
      setEnd (-180, -552); break;
  case 18:
      setEnd (-178, -508); break;
  case 19:
      setEnd (-179, -456); break;
  case 20:
      setEnd (-73, -549); break;
  case 21:
      setEnd (-56, -500); break;
  case 22:
      setEnd (-59, -448); break;
  case 23:
      setEnd (-94, -381); break;
  case 24:
      setEnd (-69, -351); break;
  case 25:
      setEnd (-1070, -92); break;
  case 26:
      setEnd (-438, -125); break;
  case 27:
      setEnd (-721, -119); break;
  case 28:
      setEnd (-550, -122); break;
  case 29:
      setEnd (-555, -263); break;
  case 30:
      setEnd (-498, -235); break;
  default:
      break;
  }
}

void MainWindow::setNextPos (int index)
{
  switch (index) {
  case 0:
      setEnd(-660, -534); break;
  case 1:
      setEnd (-673, -490); break;
  case 2:
      setEnd (-682, -446); break;
  case 3:
      setEnd (-690, -400); break;
  case 4:
      setEnd (-701, -355); break;
  case 5:
      setEnd (-711, -310); break;
  case 6:
      setEnd (-457, -555); break;
  case 7:
      setEnd (-449, -485); break;
  case 8:
      setEnd (-446, -432); break;
  case 9:
      setEnd (-451, -400); break;
  case 10:
      setEnd (-347, -353); break;
  case 11:
      setEnd (-720, -247); break;
  case 12:
      setEnd (-789, -252); break;
  case 13:
      setEnd (-721, -517); break;
  case 14:
      setEnd (-271, -540); break;
  case 15:
      setEnd (-721, -439); break;
  case 16:
      setEnd (-274, -495); break;
  case 17:
      setEnd (-180, -552); break;
  case 18:
      setEnd (-178, -508); break;
  case 19:
      setEnd (-179, -456); break;
  case 20:
      setEnd (-73, -549); break;
  case 21:
      setEnd (-56, -500); break;
  case 22:
      setEnd (-59, -448); break;
  case 23:
      setEnd (-94, -381); break;
  case 24:
      setEnd (-69, -351); break;
  case 25:
      setEnd (-1070, -92); break;
  case 26:
      setEnd (-438, -125); break;
  case 27:
      setEnd (-721, -119); break;
  case 28:
      setEnd (-550, -122); break;
  case 29:
      setEnd (-555, -263); break;
  case 30:
      setEnd (-498, -235); break;
  default:
      break;
  }
}

void MainWindow::FindPath ()
{
  //Demo 在图片上绘线 在原有基础上 (+700, +440);
  QVector<QPoint> v;

  dj->dijkstra (startComboBox->currentIndex ());
  //设置下一处的终点
  nextPath = dj->get_Path (endComboBox->currentIndex ());

  //准备绘制
  Clear ();
  //将路线绘制下来
  QGraphicsPathItem *item = new QGraphicsPathItem();

  QPen pen;
  pen.setWidth (4);
  pen.setColor (Qt::red);
  item->setPen (pen);
  item->setFlag (QGraphicsItem::ItemIsPanel);

//    qDebug() << startX << " " << startY << " " << endX << " " << endY;

//    qDebug() << "Hello World !";

  //设置起点
//    v << QPoint(startX + 700, startY + 440);

  for (int i = 1; i < nextPath.size (); i++) {
      qDebug() << nextPath[i] << " , ";
  }
  scene->addItem (item);

  QPainterPath pa;               //path
//    setNextPos (nextPath[1]);
//    item->setLine (startX + 700, startY + 440, endX + 700, endY + 440);
  pa.moveTo (startX + 700, startY + 440);

  for (int i = 1; i < nextPath.size() ; i++) {
      setNextPos (nextPath[i]);
      pa.lineTo (endX + 700, endY + 440);
  }
  item->setPath (pa);

}

void MainWindow::Clear ()
{
  QList<QGraphicsItem*> listItem = scene->items ();
  while (!listItem.empty ())
  {
      scene->removeItem (listItem.at (0));
      listItem.removeAt (0);
  }
  QGraphicsPixmapItem *item =
          scene->addPixmap (QPixmap("NanTong.jpg"));
//    item->setFlag (QGraphicsItem::ItemIsMovable);
  item->setPos (-500, -420);
}

void MainWindow::paintEvent (QPaintEvent *)
{

}

