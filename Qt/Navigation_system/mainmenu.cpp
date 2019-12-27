#include "mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
}

MainMenu::MainMenu(int type,DataBase *nsdb)
{
    this->nsdb = nsdb;
    graph = new Graph(nsdb);
    ui.setupUi(this);
    this->type = type;

    if(this->type == 1){
       buttonManager = new QPushButton(this);
    }
}

/*当点击按钮时获得起点和终点*/
void MainMenu::on_btn_findpath_clicked()
{
    QString st = ui.cb_st->currentText();
    QString ed = ui.cb_ed->currentText();
    int i = graph->local(st);
    int j = graph->local(ed);

    qDebug() << st << " " <<ed;

}
