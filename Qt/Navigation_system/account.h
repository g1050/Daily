#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "common.h"
#include "database.h"

class Account
{
private:
    DataBase *nsdb;
public:
    bool verify(QString username,QString passwd);
    bool ifExist(QString username);
    bool registerr(infomation info);
    Account();
};

#endif // ACCOUNT_H
