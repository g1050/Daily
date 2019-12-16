#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "File.h"
#include "radiusprogressbar.h"
#include "ringsmapprogressbar.h"
#include <QButtonGroup>
#include <QMessageBox>
#include <QFileDialog>
#include <QLabel>

class MainWindow : public QMainWindow,public File
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private slots:
    void on_btn_decode_clicked();

    void on_tb_src_clicked();

    void on_tb_des_clicked();

    void on_ln_src_textChanged(const QString &arg1);

    void on_ln_des_textChanged(const QString &arg1);

private:
    Ui::MainWindow ui;
    void encoded(string src,string des);//src是源文件，des是压缩后的文件
    void decoding(string src,string des);//src是压缩文件,des是解压后的文件
    map<char,unsigned> getMap(const string &s);
    RadiusProgressBar *progressbar;
    QProgressBar *progressbar_read;
    QButtonGroup getModeSelect;
    QString path_src;
    QString path_des;
};

#endif // MAINWINDOW_H
