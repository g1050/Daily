#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    QFont font=ui.textEdit->font();
    font.setUnderline(checked);
    ui.textEdit->setFont(font);

}

void MainWindow::setTextFontColor()
{
    QPalette plet=ui.textEdit->palette();
        if (ui.radioButton->isChecked())
            plet.setColor(QPalette::Text,Qt::blue);
        else if (ui.radioButton_2->isChecked())
           plet.setColor(QPalette::Text,Qt::red);
        else if (ui.radioButton_3->isChecked())
            plet.setColor(QPalette::Text,Qt::black);
        else
           plet.setColor(QPalette::Text,Qt::black);
        ui.textEdit->setPalette(plet);

}

void MainWindow::on_radioButton_3_clicked()
{
    QPalette plet=ui.textEdit->palette();
    plet.setColor(QPalette::Text,Qt::red);
    ui.textEdit->setPalette(plet);
}

void MainWindow::on_radioButton_clicked()
{
    QPalette plet=ui.textEdit->palette();
    plet.setColor(QPalette::Text,Qt::black);
    ui.textEdit->setPalette(plet);
}

void MainWindow::on_radioButton_2_clicked()
{
    QPalette plet=ui.textEdit->palette();
    plet.setColor(QPalette::Text,Qt::blue);
    ui.textEdit->setPalette(plet);
}

void MainWindow::on_checkBox_2_clicked(bool checked)
{
    QFont font=ui.textEdit->font();
    font.setItalic(checked);
    ui.textEdit->setFont(font);
}

void MainWindow::on_checkBox_3_clicked(bool checked)
{
    QFont font=ui.textEdit->font();
    font.setBold(checked);
    ui.textEdit->setFont(font);
}

void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}
