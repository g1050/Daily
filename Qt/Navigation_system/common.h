#ifndef COMMON_H
#define COMMON_H

#include <QString>
#include <QDebug>
#include <QMovie>
#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTime>
#include <QSqlError>
#include <QtDebug>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QMessageBox>
#include <vector>

const int MAXSIZE = 1024;
const int MAXN = 0xffff;

typedef struct{
       QString nickname;
       QString username;
       QString passwd1;
       QString passwd2;
       QString school;
       QString friendd;
       QString movie;
}infomation ;

//边
struct EdgeNode{
    QString v1;
    QString v2;
    int weight[2];
    int adjvex;
    EdgeNode *next;
};

//点
struct AdjList{
    int x;
    int y;
    QString name;
    EdgeNode *firstEdg;
};
#endif // COMMON_H
