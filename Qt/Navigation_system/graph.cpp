#include "graph.h"

Graph::Graph()
{
    nsdb = new DataBase();
    this->createGraph();
}

bool Graph::createGraph()
{
    /*从数据库中读取边信息和点信息*/
    nsdb->getVertexAndEdge(vadjlist,vedgenode);
    /*根据获得的vadjlist和vedgenode创建图*/
//    for(int i = 0;i<vadjlist.size();i++){
//        adjliist[i].name = vadjlist[i].name;
//        adjliist[i].x = vadjlist[i].x;
//    }

//    for(int i = 0;i<vedgenode.size();i++){

//    }
}
