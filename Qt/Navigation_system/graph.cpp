#include "graph.h"

Graph::Graph(DataBase *nsdb)
{
    this->nsdb = nsdb;
    this->createGraph();
}




bool Graph::createGraph()
{
    /*从数据库中读取边信息和点信息*/
    nsdb->getVertexAndEdge(vadjlist,vedgenode);
    numEdge = vedgenode.size();
    numVertex = vadjlist.size();
    /*根据获得的vadjlist和vedgenode创建图*/
    for(int i = 0;i<numVertex;i++){
        adjlist[i].name = vadjlist[i].name;
        adjlist[i].x = vadjlist[i].x;
        adjlist[i].y = vadjlist[i].y;
        adjlist[i].firstEdge = NULL;
        qDebug() << adjlist[i].name << adjlist[i].x ;
    }

    for(int k = 0;k<numEdge;k++){
        QString v1,v2;
        v1 = vedgenode[k].v1;
        v2 = vedgenode[k].v2;
        int i = local(v1);
        int j = local(v2);

        if(i == -1 || j == -1){
            qDebug() << i << " " << j ;
            qDebug() << "Input error";
            return false;
        }

        /* 最后把边对应的两个定点加入到图中 */
        if(adjlist[i].firstEdge == NULL){//对应孤立节点的情况，没有与任何点相连接
            //申请新节点，直接插入就可以
            EdgeNode *e = new EdgeNode();
            e->adjvex = j;
            adjlist[i].firstEdge = e;
        }else{//对应已经加入图中的节点
            //指针后移，将新节点插入最后
            EdgeNode *p = adjlist[i].firstEdge;
            while(p->next != NULL){
                p = p->next;
            }
            EdgeNode *e = new EdgeNode();
            e->adjvex = j;
            p->next = e;
        }
        if(adjlist[j].firstEdge == NULL){//对应孤立节点的情况，没有与任何点相连接
            //申请新节点，直接插入就可以
            EdgeNode *e = new EdgeNode();
            e->adjvex = i;
            adjlist[j].firstEdge = e;
        }else{//对应已经加入图中的节点
            //指针后移，将新节点插入最后
            EdgeNode *p = adjlist[j].firstEdge;
            while(p->next != NULL){
                p = p->next;
            }
            EdgeNode *e = new EdgeNode();
            e->adjvex = i;
            p->next = e;
        }

    }
    return true;

}

void Graph::Dijkstra(int st)
{

    /* 每次调用该函数都要初始化 */
    for(int i = 0;i<numEdge;i++){
        node[i].pos = i;
        node[i].minWeight = MAXN;//初始状态每个点到源点的距离无限大
        parent[i] = -1; //每个节点都没有父亲节点
        visit[i] = false;
    }

    node[st].minWeight = 0;//到自己的最短距离就是0
    q.push(node[st]);

    while(!q.empty()){

        Node tp = q.top();
        q.pop();
        int pos = tp.pos;//获取队首元素的值

        if(visit[pos])  continue;
        visit[pos] = true;
        EdgeNode *p = adjlist[pos].firstEdge ;
        while(p){//遍历所有与p相连的节点
            int cur = p->adjvex;//获取当前节点的位置
            //后期优化的点weight数组
            if(!visit[cur] && node[cur].minWeight > node[pos].minWeight + p->weight[0]){//整个算法的核心的
                node[cur].minWeight = node[pos].minWeight + p->weight[0];//更新值
                parent[cur] = pos;
                q.push(node[cur]);
            }
            p = p->next;
        }

    }

}
