/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_map;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *lb_hello;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QPushButton *btn_manage;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QComboBox *cb_st;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_7;
    QComboBox *cb_ed;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_findpath;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btn_clear;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(1300, 863);
        MainMenu->setMinimumSize(QSize(1300, 863));
        MainMenu->setMaximumSize(QSize(1300, 863));
        horizontalLayout_2 = new QHBoxLayout(MainMenu);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lb_map = new QLabel(MainMenu);
        lb_map->setObjectName(QStringLiteral("lb_map"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_map->sizePolicy().hasHeightForWidth());
        lb_map->setSizePolicy(sizePolicy);
        lb_map->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lb_map);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lb_hello = new QLabel(MainMenu);
        lb_hello->setObjectName(QStringLiteral("lb_hello"));
        lb_hello->setEnabled(false);
        sizePolicy.setHeightForWidth(lb_hello->sizePolicy().hasHeightForWidth());
        lb_hello->setSizePolicy(sizePolicy);
        lb_hello->setStyleSheet(QString::fromUtf8("background-image: url(:/build-Navigation_system-Desktop_Qt_5_8_0_GCC_64bit-Debug/63579592780098770\345\244\264\345\203\217.jpg);"));
        lb_hello->setScaledContents(false);

        verticalLayout_4->addWidget(lb_hello);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(MainMenu);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout_3->addWidget(label);

        btn_manage = new QPushButton(MainMenu);
        btn_manage->setObjectName(QStringLiteral("btn_manage"));
        sizePolicy.setHeightForWidth(btn_manage->sizePolicy().hasHeightForWidth());
        btn_manage->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        btn_manage->setFont(font1);
        btn_manage->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));

        verticalLayout_3->addWidget(btn_manage);

        verticalLayout_3->setStretch(0, 9);
        verticalLayout_3->setStretch(1, 1);

        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4->setStretch(0, 6);
        verticalLayout_4->setStretch(1, 4);

        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_3 = new QLabel(MainMenu);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        cb_st = new QComboBox(MainMenu);
        cb_st->setObjectName(QStringLiteral("cb_st"));
        sizePolicy1.setHeightForWidth(cb_st->sizePolicy().hasHeightForWidth());
        cb_st->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(cb_st);

        label_4 = new QLabel(MainMenu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        cb_ed = new QComboBox(MainMenu);
        cb_ed->setObjectName(QStringLiteral("cb_ed"));
        sizePolicy1.setHeightForWidth(cb_ed->sizePolicy().hasHeightForWidth());
        cb_ed->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(cb_ed);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 2);
        verticalLayout_2->setStretch(5, 2);

        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        btn_findpath = new QPushButton(MainMenu);
        btn_findpath->setObjectName(QStringLiteral("btn_findpath"));
        sizePolicy1.setHeightForWidth(btn_findpath->sizePolicy().hasHeightForWidth());
        btn_findpath->setSizePolicy(sizePolicy1);
        btn_findpath->setFont(font2);
        btn_findpath->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));

        verticalLayout->addWidget(btn_findpath);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton = new QPushButton(MainMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        btn_clear = new QPushButton(MainMenu);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        sizePolicy1.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy1);
        btn_clear->setFont(font2);
        btn_clear->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));

        verticalLayout->addWidget(btn_clear);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(3, 3);
        verticalLayout->setStretch(5, 3);

        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_5->setStretch(0, 6);
        verticalLayout_5->setStretch(1, 3);
        verticalLayout_5->setStretch(2, 3);

        horizontalLayout->addLayout(verticalLayout_5);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(1, 2);

        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Form", Q_NULLPTR));
        lb_map->setText(QApplication::translate("MainMenu", "map", Q_NULLPTR));
        lb_hello->setText(QString());
        label->setText(QApplication::translate("MainMenu", "Hello", Q_NULLPTR));
        btn_manage->setText(QApplication::translate("MainMenu", "\347\256\241\347\220\206\345\257\274\350\210\252\347\263\273\347\273\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainMenu", "\350\265\267\347\202\271", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainMenu", "\347\273\210\347\202\271", Q_NULLPTR));
        btn_findpath->setText(QApplication::translate("MainMenu", "\346\234\200\350\277\221\350\267\257\347\272\277", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainMenu", "\346\234\200\347\276\216\350\267\257\347\272\277", Q_NULLPTR));
        btn_clear->setText(QApplication::translate("MainMenu", "\345\210\267\346\226\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
