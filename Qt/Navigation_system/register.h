#ifndef REGISTER_H
#define REGISTER_H

#include "ui_register.h"
#include "common.h"
#include "account.h"
class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);

private slots:
    void on_btn_reg_clicked();

private:
    Ui::Register ui;
};

#endif // REGISTER_H
