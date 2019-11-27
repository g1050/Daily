#include "mainwindow.h"
#include <QMenu>
#include <QMenuBar>
#include <QDebug>
#include <QToolBar>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QTextEdit>
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(500,500);
    QMenuBar *mbar = new QMenuBar();
    mbar->setParent(this);

    QMenu *pFile = mbar->addMenu("File");

    QAction *pNew = pFile->addAction("Create");
    pFile->addSeparator();
    QAction *pNew2 = pFile->addAction("Open");
    pFile->addSeparator();
    connect(pNew,&QAction::triggered,
            [=]()mutable
            {
                 qDebug() << "Create is pushed!" << endl;
            }
            );

    QToolBar *toolbar = this->addToolBar("toolbar");
    toolbar->addAction(pNew);
    QPushButton *b = new QPushButton(this);
    b->setText("^_^");
    toolbar->addWidget(b);
    connect(b,&QPushButton::clicked,
            [=]()mutable{
                b->setText("233");
            }
            );
    toolbar->addWidget(new QPushButton("233"));


    QStatusBar *sBar = statusBar();
    QLabel * label = new QLabel(this);
    label->setText("Normal text file");
    sBar->addWidget(label);

    QTextEdit *textEdit = new QTextEdit(this);
    setCentralWidget(textEdit);

    QDockWidget *dock = new QDockWidget(this);
    this->addDockWidget(Qt::LeftDockWidgetArea,dock);
    QTextEdit *textEdit1 = new QTextEdit(this);
    dock->setWidget(textEdit1);
}

MainWindow::~MainWindow()
{

}
