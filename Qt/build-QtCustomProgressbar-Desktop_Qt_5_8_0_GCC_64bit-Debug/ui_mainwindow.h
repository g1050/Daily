/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "animationprogressbar.h"
#include "radiusprogressbar.h"
#include "ringsmapprogressbar.h"
#include "ringsprogressbar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    RingsProgressbar *bar3;
    RingsMapProgressbar *bar2;
    AnimationProgressbar *bar4;
    RadiusProgressBar *bar1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(924, 565);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        bar3 = new RingsProgressbar(centralWidget);
        bar3->setObjectName(QStringLiteral("bar3"));
        bar3->setGeometry(QRect(500, 50, 200, 200));
        bar2 = new RingsMapProgressbar(centralWidget);
        bar2->setObjectName(QStringLiteral("bar2"));
        bar2->setGeometry(QRect(120, 270, 200, 200));
        bar2->setStyleSheet(QStringLiteral(""));
        bar4 = new AnimationProgressbar(centralWidget);
        bar4->setObjectName(QStringLiteral("bar4"));
        bar4->setGeometry(QRect(500, 270, 200, 200));
        bar1 = new RadiusProgressBar(centralWidget);
        bar1->setObjectName(QStringLiteral("bar1"));
        bar1->setGeometry(QRect(120, 150, 200, 61));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
