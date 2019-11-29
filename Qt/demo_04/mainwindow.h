#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMenuBar>
#include <QMainWindow>
#include <QPushButton>
#include <QMenu>
#include <QAction>
#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QString>

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMenuBar *mbar;
    QMenu  *menu;
    QAction *p1;
    QAction *p2;
    QAction *p3;
    QAction *p4;
    QAction *p5;
    QAction *p6;
    QMessageBox *mbox;
    QDialog dlg;
    QDialog dlg2;
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPushButton *btn;
};

#endif // MAINWINDOW_H
