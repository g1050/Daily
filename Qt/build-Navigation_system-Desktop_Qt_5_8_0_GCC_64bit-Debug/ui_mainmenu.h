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
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label;
    QPushButton *btn_manage;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QComboBox *cb_st;
    QLabel *label_4;
    QComboBox *cb_ed;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btn_findpath;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_clear;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(1300, 863);
        MainMenu->setMinimumSize(QSize(1300, 863));
        MainMenu->setMaximumSize(QSize(1300, 863));
        horizontalLayout = new QHBoxLayout(MainMenu);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(MainMenu);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(MainMenu);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        label = new QLabel(MainMenu);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        btn_manage = new QPushButton(MainMenu);
        btn_manage->setObjectName(QStringLiteral("btn_manage"));

        verticalLayout_3->addWidget(btn_manage);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(MainMenu);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_3);

        cb_st = new QComboBox(MainMenu);
        cb_st->setObjectName(QStringLiteral("cb_st"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cb_st->sizePolicy().hasHeightForWidth());
        cb_st->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(cb_st);

        label_4 = new QLabel(MainMenu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_4);

        cb_ed = new QComboBox(MainMenu);
        cb_ed->setObjectName(QStringLiteral("cb_ed"));

        verticalLayout_2->addWidget(cb_ed);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 4);
        verticalLayout_2->setStretch(2, 1);
        verticalLayout_2->setStretch(3, 4);

        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        btn_findpath = new QPushButton(MainMenu);
        btn_findpath->setObjectName(QStringLiteral("btn_findpath"));

        verticalLayout->addWidget(btn_findpath);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton = new QPushButton(MainMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btn_clear = new QPushButton(MainMenu);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));

        verticalLayout->addWidget(btn_clear);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(1, 2);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainMenu", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainMenu", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("MainMenu", "TextLabel", Q_NULLPTR));
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
