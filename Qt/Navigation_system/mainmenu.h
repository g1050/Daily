#ifndef MAINMENU_H
#define MAINMENU_H

#include "ui_mainmenu.h"
#include "graph.h"
#include "database.h"
#include "manager.h"

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    MainMenu(int type,DataBase *nsdb);

private slots:
    void on_btn_findpath_clicked();

    void on_btn_manage_clicked();

private:
    Ui::MainMenu ui;
    Manager *manager;
    int type;
    DataBase *nsdb;
    Graph *graph;
};

#endif // MAINMENU_H
