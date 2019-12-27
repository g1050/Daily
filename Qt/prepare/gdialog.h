#ifndef GDIALOG_H
#define GDIALOG_H
#include <QDialog>
#include <QTabWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>
#include <QIcon>
#include "ui_form.h"
class GDialog : public QDialog
{


public:
    GDialog();
    QTabWidget *tabWidget;
    Ui::Form ui;
};

#endif // GDIALOG_H
