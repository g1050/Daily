#ifndef FIND_H
#define FIND_H

#include "ui_find.h"
#include "common.h"
#include "account.h"

class Find : public QDialog
{
    Q_OBJECT

public:
    explicit Find(QWidget *parent = 0);

private slots:
    void on_pushButton_clicked();

private:
    Ui::find ui;
};

#endif // FIND_H
