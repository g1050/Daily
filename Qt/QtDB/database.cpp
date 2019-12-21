#include "database.h"
#include <QCoreApplication>
#include <QVariantList>
DataBase::DataBase()
{

}

bool DataBase::createConnection()
{
    //qDebug()<<QCoreApplication::libraryPaths ();

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("test.db");
//    db.setHostName("127.0.0.1");
//    db.setUserName("root");
//    db.setPassword("123456");
//    db.setDatabaseName("info");
    if( !db.open())
    {
        qDebug() << "无法建立数据库连接";
        return false;
    }else{
        qDebug() << "成功连接数据库";
    }

    return true;
}

bool DataBase::createTable()
{
    QSqlQuery query;
    bool success = query.exec("create table student(id primary key,name varchar (255)"
                              ",age int,score int)");
    if(success)
    {
        qDebug() << QObject::tr("数据库表创建成功！");
        return true;
    }
    else
    {
        qDebug() << QObject::tr("数据库表创建失败！");
        return false;
    }
}

bool DataBase::insert()
{
      QSqlQuery query;
//    bool success = query.exec("insert into student(id,name,age,score) values(1,'lilei',18,99);");
//    if(success)
//    {
//        qDebug() << QObject::tr("成功插入数据！");
//        return true;
//    }
//    else
//    {
//        qDebug() << QObject::tr("插入数据失败！");
//        return false;
//    }

    int id = 2;
    QString name = "hanmeimei";
    int age = 17;
    int score = 52;

    QVariantList m_id;
    m_id << id;
    QVariantList m_name;
    m_name << name;
    QVariantList m_age;
    m_age << age;
    QVariantList m_score;
    m_age << score;

    query.prepare("insert into student(id,name,age,score) values(?,?,?,?)");

    query.bindValue(0,id);
    query.bindValue(1,name);
    query.bindValue(2,age);
    query.bindValue(3,score);

    query.exec();


    return true;
}

bool DataBase::queryAll()
{
    QSqlQuery query;
    //QString sql = QString("select * from student where name = '%1'").arg("lilei");
    QString sql = QString("update student set score = 100 where name = '%1'").arg("lilei");
    //delete *from student where name = '%1'
    query.exec(sql);//where id = a
    //QSqlRecord rec = query.record();


//    while(query.next())
//    {
//        qDebug() << query.value("id").toInt() << " ";
//        qDebug() << query.value("name").toString() << " ";
//        qDebug() << query.value("age").toInt() << " ";
//        qDebug() << query.value("score").toInt() << " ";
//        qDebug() << "\n";
//    }
}


