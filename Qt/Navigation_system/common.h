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

typedef struct{
       QString nickname;
       QString username;
       QString passwd1;
       QString passwd2;
       QString school;
       QString friendd;
       QString movie;
}infomation ;
#endif // COMMON_H
