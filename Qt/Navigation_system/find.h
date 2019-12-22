#ifndef FIND_H
#define FIND_H

#include "ui_find.h"

class Find : public QDialog
{
    Q_OBJECT

public:
    explicit Find(QWidget *parent = 0);

private:
    Ui::find ui;
};

#endif // FIND_H
