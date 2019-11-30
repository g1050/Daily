#include "mainwindow.h"
#include "qtoolbox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->resize(700,500);
    tb.setParent(this);
    //tb.setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
    //ui.setupUi(this);
}
