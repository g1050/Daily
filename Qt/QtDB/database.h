#ifndef DATABASE_H
#define DATABASE_H
#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTime>
#include <QSqlError>
#include <QtDebug>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QDebug>
#include <QString>
class DataBase
{
private:
    QSqlDatabase db;
public:
    DataBase();
    bool createConnection();
    bool createTable();
    bool insert();
    bool queryAll();
};

#endif // DATABASE_H
