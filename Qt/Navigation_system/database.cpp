#include "database.h"

DataBase::DataBase()
{
    this->createConnection();
}

DataBase::~DataBase()
{
//    QSqlDatabase::removeDatabase("NSDB.db");
//    db.close();
}

QString DataBase::getPasswdByUsername(QString username)
{
    QSqlQuery query;
    QString passwd = "";
    QString sql = QString("select * from ACCOUNT where USERNAME = '%1'").arg(username);
    query.exec(sql);
    while(query.next())
    {
        passwd = query.value("PASSWD").toString() ;
        //qDebug() << "passwd = " << passwd ;
    }
    return passwd;

}

bool DataBase::ifExist(QString username)
{
    QSqlQuery query;
    QString sql = QString("select * from ACCOUNT where USERNAME = '%1'").arg(username);
    query.exec(sql);
    while(query.next())
    {
        return true;
    }
    return false;
}

bool DataBase::createConnection()
{

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("NSDB.db");
    if( !db.open())
    {
        QMessageBox::critical(NULL, "critical", "无法建立数据库连接", QMessageBox::Yes);
        //qDebug() << "无法建立数据库连接";
        return false;
    }else{
        return true;
        //qDebug() << "成功连接数据库";
    }

}

bool DataBase::insert(infomation info)
{
    QSqlQuery query;
    query.prepare("insert into ACCOUNT(USERNAME,PASSWD,TYPE,NICKNAME,FRIEND,MOVIE,SCHOOL) values(:USERNAME,:PASSWD,:TYPE,:NICKNAME,:FRIEND,:MOVIE,:SCHOOL)");

    query.bindValue(":USERNAME",info.username);
    query.bindValue(":PASSWD",info.passwd1);
    query.bindValue(":TYPE",0);
    query.bindValue(":NICKNAME",info.nickname);
    query.bindValue(":FRIEND",info.friendd);
    query.bindValue(":MOVIE",info.movie);
    query.bindValue(":SCHOOL",info.school);


    return query.exec();
}

infomation DataBase::fetchQues(QString username)
{
    infomation info;
    QSqlQuery query;
    QString sql = QString("select * from ACCOUNT where USERNAME = '%1'").arg(username);
    query.exec(sql);
    while(query.next())
    {
        info.friendd = query.value("FRIEND").toString();
        info.school = query.value("SCHOOL").toString();
        info.movie = query.value("MOVIE").toString();
    }
    return info;
}

bool DataBase::update(infomation info)
{
    QSqlQuery query;
    QString sql = QString("update ACCOUNT set PASSWD = '%1' where USERNAME = '%2'").arg(info.passwd1,info.username);
    return query.exec(sql);
}
