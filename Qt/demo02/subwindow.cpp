#include "subwindow.h"

subwindow::subwindow(QWidget *parent) : QWidget(parent)
{
    btn.setParent(this);
    btn.setText("To main");
    this->resize(500,500);
    btn.move(100,100);

    connect(&btn,&QPushButton::clicked,this,&subwindow::sendslots);
}

void subwindow::sendslots()
{
    emit mysignals();
    emit mysignals(250,"I am the subwindos");
}
