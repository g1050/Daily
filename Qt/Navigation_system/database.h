#ifndef DATABASE_H
#define DATABASE_H
#include "common.h"

class DataBase
{
private:
    QSqlDatabase db;
public:
    DataBase();
    ~DataBase();
    QString getPasswdByUsername(QString username);
    bool ifExist(QString username);
    bool createConnection();
    bool insert(infomation info);
    infomation fetchQues(QString username);
    bool update(infomation info);
    int getType(QString username);
    bool getVertexAndEdge(std::vector<AdjList> &vadjlist,std::vector<EdgeNode> &vedgenode);
};

#endif // DATABASE_H
