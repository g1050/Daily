#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "File.h"
#include "radiusprogressbar.h"
#include "ringsmapprogressbar.h"

class MainWindow : public QMainWindow,public File
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private slots:
    void on_btn_decode_clicked();

private:
    Ui::MainWindow ui;
    void encoded(string src,string des);//src是源文件，des是压缩后的文件
    //void decoding(string src,string des);//src是压缩文件,des是解压后的文件
    map<char,unsigned> getMap(const string &s);
    RadiusProgressBar *progressbar;
    QProgressBar *progressbar_read;
};

#endif // MAINWINDOW_H
