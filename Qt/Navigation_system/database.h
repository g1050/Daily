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
};

#endif // DATABASE_H
