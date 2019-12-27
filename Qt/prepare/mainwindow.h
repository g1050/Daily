//MainWidget.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mapwidget.h"
#include <QToolButton>
#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLabel>
#include <QComboBox>
#include <QSpinBox>
#include <QTextEdit>
#include <QPainter>
#include <QVector>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void createToolBar();
    void paintEvent (QPaintEvent *);
    void setStart(int X, int Y);
    void setEnd(int X, int Y);
    void setNextPos (int index);
    void initScene();
public slots:
    void setStartStation();
    void setEndStation();
    void FindPath();
    void Clear();
private:
    MapWidget *mapWidget;
    QLabel *startLabel;
    QLabel *endLabel;
    QComboBox *startComboBox;
    QComboBox *endComboBox;
    QToolButton *findPathBtn;
    QToolButton *clearBtn;

    QGraphicsScene *scene;
    QGraphicsView *view;

    int startX, startY, endX, endY;
    QVector<int> nextPath;

    struct ArcCell{  //弧信息
        int adj;     //对无权图有1，0表示是否相邻，对带权图，则为权值类型
    //    string info; //该弧的相关信息
    };

    //内部类
    static const int MAX_VERTEX_NUM = 31;
    static const int INF = 999999;

    struct MGraph{
        QVector<int> vexs;                                    //顶点集合
        //临接矩阵
        ArcCell arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
        int vexnum;                                           //顶点数
        int arcnum;                                           //边数
    //    int kind;                                           //图的类型
    };




    class DijkstraFindPath
    {
    public:
        DijkstraFindPath();
        MGraph mgraph;
        void CreateGraph();
//        void ShortestPath(int v0, PathMatrix &path, ShortPathTable &DP, int prev[]);
        int prev[MAX_VERTEX_NUM];  //最短路上的前驱顶点
        int d[MAX_VERTEX_NUM];     //表示边e = (u,v)的权值(不存在时为INF,不过d[i][i]=0)
        bool used[MAX_VERTEX_NUM]; //已经使用过的图
        void dijkstra(int startPos);      //求从起点startPos出发到各个顶点的最短距离
        QVector<int> get_Path(int endPos);//到顶点endPos的最短路
    };

    DijkstraFindPath *dj;
};

#endif // MAINWINDOW_H
