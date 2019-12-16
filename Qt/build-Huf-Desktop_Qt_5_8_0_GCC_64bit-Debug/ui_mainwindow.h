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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btn_decode;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *ln_des;
    QToolButton *tb_des;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rdb_de;
    QRadioButton *rdb_in;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *ln_src;
    QToolButton *tb_src;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(613, 469);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_decode = new QPushButton(centralWidget);
        btn_decode->setObjectName(QStringLiteral("btn_decode"));
        btn_decode->setGeometry(QRect(220, 300, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        btn_decode->setFont(font);
        btn_decode->setStyleSheet(QLatin1String("background-color: rgb(138, 226, 52);\n"
"font: 15pt \"Ubuntu\";"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 220, 341, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        ln_des = new QLineEdit(layoutWidget);
        ln_des->setObjectName(QStringLiteral("ln_des"));

        horizontalLayout_4->addWidget(ln_des);

        tb_des = new QToolButton(layoutWidget);
        tb_des->setObjectName(QStringLiteral("tb_des"));

        horizontalLayout_4->addWidget(tb_des);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 80, 250, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rdb_de = new QRadioButton(layoutWidget1);
        rdb_de->setObjectName(QStringLiteral("rdb_de"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        rdb_de->setFont(font1);

        horizontalLayout->addWidget(rdb_de);

        rdb_in = new QRadioButton(layoutWidget1);
        rdb_in->setObjectName(QStringLiteral("rdb_in"));
        rdb_in->setFont(font1);

        horizontalLayout->addWidget(rdb_in);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 150, 341, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ln_src = new QLineEdit(layoutWidget2);
        ln_src->setObjectName(QStringLiteral("ln_src"));

        horizontalLayout_3->addWidget(ln_src);

        tb_src = new QToolButton(layoutWidget2);
        tb_src->setObjectName(QStringLiteral("tb_src"));

        horizontalLayout_3->addWidget(tb_src);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(496, 0, 111, 31));
        label->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        btn_decode->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label->raise();
        ln_src->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btn_decode->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        tb_des->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        rdb_de->setText(QApplication::translate("MainWindow", "\345\216\213\347\274\251\346\226\207\344\273\266", Q_NULLPTR));
        rdb_in->setText(QApplication::translate("MainWindow", "\350\247\243\345\216\213\346\226\207\344\273\266", Q_NULLPTR));
        tb_src->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
