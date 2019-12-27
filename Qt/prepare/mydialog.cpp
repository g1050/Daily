//mydialog.cpp
#include "mydialog.h"
#include <QTabWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>
#include <QIcon>
MyDialog::MyDialog(QWidget *parent) :
  QDialog(parent)
{
  tabWidget = new QTabWidget();

  //新建第一个页面的部件
  QWidget *widget = new QWidget();
  QLineEdit *lineEdit = new QLineEdit();
  QPushButton *pushButton = new QPushButton("Test");
  QVBoxLayout *vLayout = new QVBoxLayout();
  vLayout->addWidget(lineEdit);
  vLayout->addWidget(pushButton);
  widget->setLayout(vLayout);


  //新建第二个页面的部件
  QLabel *label = new QLabel("Hello Qt");

  //新建第三个页面的部件
  QPushButton *pushButton3 = new QPushButton("Click Me");

  //向QTabWidget中添加第一个页面
  //QIcon icon1();
  tabWidget->addTab(widget,"Tab1");

  //向QTabWidget中添加第二个页面
  //QIcon icon2();
  tabWidget->addTab(label, "Tab2");

  //向QTabWidget中添加第三个页面
  //QIcon icon3();
  tabWidget->addTab(pushButton3,"Tab3");

  QHBoxLayout *layout = new QHBoxLayout();
  layout->addWidget(tabWidget);

  this->setLayout(layout);
  this->resize(300, 100);
  this->setWindowTitle("QTabWidgetDemo");
}
