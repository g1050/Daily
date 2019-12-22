#include "account.h"

bool Account::verify(QString username, QString passwd)
{
    QString passwd2;


    passwd2 = nsdb->getPasswdByUsername(username);
    if(passwd2 == passwd){
        return true;
    }else{
        return false;
    }

}

bool Account::ifExist(QString username)
{
    return nsdb->ifExist(username);
}

bool Account::registerr(infomation info)
{
    return nsdb->insert(info);
}

Account::Account()
{
    nsdb = new DataBase();
}
