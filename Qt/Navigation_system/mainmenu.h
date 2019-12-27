#ifndef MAINMENU_H
#define MAINMENU_H

#include "ui_mainmenu.h"
#include "graph.h"

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    MainMenu(int type);

private:
    Ui::MainMenu ui;
    int type;
    Graph *graph;
    QPushButton* buttonManager;
};

#endif // MAINMENU_H
