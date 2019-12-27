#ifndef GRAPH_H
#define GRAPH_H
#include "database.h"
#include "common.h"

class Graph
{
public:
    Graph();
    bool createGraph();
private:
    DataBase *nsdb;
    AdjList adjliist[MAXSIZE];
    std::vector<AdjList> vadjlist;
    std::vector<EdgeNode> vedgenode;
};

#endif // GRAPH_H
