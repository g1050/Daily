#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QString>
#include <QFileDialog>
#include <QDebug>
#include <string>
#include <iostream>
#include <string>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_btn_in_clicked();

    void on_btn_de_clicked();

private:
    Ui::MainWindow ui;
    QString path_src;
    QString path_des;
};

#endif // MAINWINDOW_H
