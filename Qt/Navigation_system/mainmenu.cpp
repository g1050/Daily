#include "mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
}

MainMenu::MainMenu(int type)
{
    graph = new Graph();
    ui.setupUi(this);
    this->type = type;

    if(this->type == 1){
       buttonManager = new QPushButton(this);
    }
}
