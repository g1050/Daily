#include "manager.h"

Manager::Manager(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
}

Manager::Manager(DataBase *nsdb)
{
    ui.setupUi(this);
    //Init QSqlTableModel
    model = new QSqlTableModel(this);
    model->setTable("ACCOUNT");
    ui.tableView->setModel(model);
    model->select();

    //Hide the unnecessary column.
    ui.tableView->setColumnHidden(2,true);
    ui.tableView->setColumnHidden(4,true);
    ui.tableView->setColumnHidden(5,true);
    ui.tableView->setColumnHidden(6,true);

    //Change name
    model->setHeaderData(0,Qt::Horizontal,"昵称");
    model->setHeaderData(1,Qt::Horizontal,"账号");
    model->setHeaderData(3,Qt::Horizontal,"身份");


    //Init QSqlTableModel
    model2 = new QSqlTableModel(this);
    model2->setTable("ADJVEX");
    ui.tv_adjvex->setModel(model2);
    model2->select();

    //Change name
    model2->setHeaderData(0,Qt::Horizontal,"名字");
    model2->setHeaderData(1,Qt::Horizontal,"描述");
    model2->setHeaderData(2,Qt::Horizontal,"x坐标");
    model2->setHeaderData(3,Qt::Horizontal,"y坐标");

    //Init QSqlTableModel
    model3 = new QSqlTableModel(this);
    model3->setTable("EDGE");
    ui.tableView_2->setModel(model3);
    model3->select();

    //Change name
    model3->setHeaderData(0,Qt::Horizontal,"左端点");
    model3->setHeaderData(1,Qt::Horizontal,"右端点");
    model3->setHeaderData(2,Qt::Horizontal,"距离");
    model3->setHeaderData(3,Qt::Horizontal,"绿化程度");


}

void Manager::on_btn_submit_clicked()
{
    model->submitAll();
}

void Manager::on_btn_cancel_clicked()
{
    model->revertAll();
    model->submitAll();
}

void Manager::on_btn_search_clicked()
{
    //1 Get the name we are looking for.
    QString name = ui.ln_search->text();
    //2 Search.
    QString str = QString("NICKNAME = '%1' OR USERNAME = '%2'").arg(name,name);
    model->setFilter(str);
    model->select();
}

void Manager::on_btn_all_clicked()
{
    model->setFilter("");
    model->select();
}

void Manager::on_btn_submit_2_clicked()
{
    model2->submitAll();
}



void Manager::on_btn_cancel_2_clicked()
{
    model2->revertAll();
    model2->submitAll();
}



void Manager::on_btn_all_2_clicked()
{
    model2->setFilter("");
    model2->select();
}

void Manager::on_btn_search_2_clicked()
{
    //1 Get the name we are looking for.
    QString name = ui.ln_search_2->text();
    //2 Search.
    QString str = QString("NAME = '%1'").arg(name);
    model2->setFilter(str);
    model2->select();
}


