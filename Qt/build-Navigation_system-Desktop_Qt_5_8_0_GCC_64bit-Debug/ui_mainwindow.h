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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ln_usr;
    QCommandLinkButton *link_reg;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *ln_pwd;
    QCommandLinkButton *link_find;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *login;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(577, 406);
        MainWindow->setMinimumSize(QSize(507, 406));
        MainWindow->setMaximumSize(QSize(577, 406));
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(235, 242, 249);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/build-Navigation_system-Desktop_Qt_5_8_0_GCC_64bit-Debug/background.jpg);"));
        label_2->setScaledContents(false);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/build-Navigation_system-Desktop_Qt_5_8_0_GCC_64bit-Debug/small.jpg")));
        label->setScaledContents(true);

        horizontalLayout_3->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ln_usr = new QLineEdit(centralWidget);
        ln_usr->setObjectName(QStringLiteral("ln_usr"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ln_usr->sizePolicy().hasHeightForWidth());
        ln_usr->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(ln_usr);

        link_reg = new QCommandLinkButton(centralWidget);
        link_reg->setObjectName(QStringLiteral("link_reg"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(link_reg->sizePolicy().hasHeightForWidth());
        link_reg->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(link_reg);

        horizontalLayout->setStretch(0, 7);
        horizontalLayout->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ln_pwd = new QLineEdit(centralWidget);
        ln_pwd->setObjectName(QStringLiteral("ln_pwd"));

        horizontalLayout_2->addWidget(ln_pwd);

        link_find = new QCommandLinkButton(centralWidget);
        link_find->setObjectName(QStringLiteral("link_find"));
        sizePolicy1.setHeightForWidth(link_find->sizePolicy().hasHeightForWidth());
        link_find->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(link_find);

        horizontalLayout_2->setStretch(0, 7);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 5);

        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 7);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 5);
        verticalLayout_2->setStretch(1, 5);

        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        login = new QPushButton(centralWidget);
        login->setObjectName(QStringLiteral("login"));
        sizePolicy1.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy1);
        login->setMaximumSize(QSize(16777215, 16777215));
        login->setStyleSheet(QStringLiteral("background-color: rgb(60, 195, 245);"));

        horizontalLayout_4->addWidget(login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_4->setStretch(0, 4);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 4);

        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_3->setStretch(0, 8);
        verticalLayout_3->setStretch(1, 2);

        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4->setStretch(0, 1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
        link_reg->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        link_find->setText(QApplication::translate("MainWindow", "\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        login->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
