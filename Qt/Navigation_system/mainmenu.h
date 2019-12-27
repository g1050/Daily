#ifndef MAINMENU_H
#define MAINMENU_H

#include "ui_mainmenu.h"

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);

private:
    Ui::MainMenu ui;
};

#endif // MAINMENU_H
