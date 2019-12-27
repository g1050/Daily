#include "gdialog.h"

GDialog::GDialog()
{
    ui.setupUi(this);

    connect(ui.pushButton,&QPushButton::clicked,
                [=](bool isCheck)mutable{
                    ui.pushButton->setText("b4");
                }
                );
    /*tabWidget = new QTabWidget();

    //新建第一个页面的部件
    QWidget *widget = new QWidget();
    QLineEdit *lineEdit = new QLineEdit();
    QPushButton *pushButton = new QPushButton("Test");
    QVBoxLayout *vLayout = new QVBoxLayout();
    vLayout->addWidget(lineEdit);
    vLayout->addWidget(pushButton);
    widget->setLayout(vLayout);


    QWidget *widget2 = new QWidget();
    QLineEdit *lineEdit2 = new QLineEdit();
    QPushButton *pushButton2 = new QPushButton("Test");
    QVBoxLayout *vLayout2 = new QVBoxLayout();
    vLayout2->addWidget(lineEdit2);
    vLayout2->addWidget(pushButton2);
    widget2->setLayout(vLayout2);

    tabWidget->addTab(widget,"Tab1");
    tabWidget->addTab(widget2,"Tab2");

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(tabWidget);
    layout->setDirection(QBoxLayout::BottomToTop);//自下而上
    this->setLayout(layout);
    //this->resize(300, 100);
    this->setWindowTitle("QTabWidgetDemo");
    */

}
