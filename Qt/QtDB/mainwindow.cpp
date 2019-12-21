#include "mainwindow.h"
#include "database.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qDebug() << QSqlDatabase::drivers();
    DataBase *db = new DataBase();
    db->createConnection();
    //db->createTable();
    db->insert();
    db->queryAll();
}

MainWindow::~MainWindow()
{

}
