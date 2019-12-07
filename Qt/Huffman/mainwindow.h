#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QProgressBar>
#include "ui_mainwindow.h"
#include "File.h"

class MainWindow : public QMainWindow,public File
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    //void encoded(string src, string des);
private slots:
    void on_btn_decode_clicked();

    void on_btn_incoding_clicked();

private:
    Ui::MainWindow ui;
    QProgressBar *progressbar;
};

#endif // MAINWINDOW_H
