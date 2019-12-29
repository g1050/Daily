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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *btn_manage;
    QLabel *label_3;
    QComboBox *cb_st;
    QLabel *label_4;
    QComboBox *cb_ed;
    QPushButton *btn_findpath;
    QPushButton *pushButton;
    QPushButton *btn_clear;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(1300, 863);
        MainMenu->setMinimumSize(QSize(1300, 863));
        MainMenu->setMaximumSize(QSize(1300, 863));
        label_2 = new QLabel(MainMenu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(371, 21, 67, 17));
        label = new QLabel(MainMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(371, 44, 67, 17));
        btn_manage = new QPushButton(MainMenu);
        btn_manage->setObjectName(QStringLiteral("btn_manage"));
        btn_manage->setGeometry(QRect(371, 67, 98, 31));
        label_3 = new QLabel(MainMenu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(372, 157, 30, 23));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        cb_st = new QComboBox(MainMenu);
        cb_st->setObjectName(QStringLiteral("cb_st"));
        cb_st->setGeometry(QRect(372, 186, 86, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cb_st->sizePolicy().hasHeightForWidth());
        cb_st->setSizePolicy(sizePolicy1);
        label_4 = new QLabel(MainMenu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(372, 217, 30, 23));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        cb_ed = new QComboBox(MainMenu);
        cb_ed->setObjectName(QStringLiteral("cb_ed"));
        cb_ed->setGeometry(QRect(372, 246, 86, 25));
        btn_findpath = new QPushButton(MainMenu);
        btn_findpath->setObjectName(QStringLiteral("btn_findpath"));
        btn_findpath->setGeometry(QRect(372, 325, 80, 31));
        pushButton = new QPushButton(MainMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(372, 408, 80, 31));
        btn_clear = new QPushButton(MainMenu);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setGeometry(QRect(372, 491, 80, 31));

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Form", Q_NULLPTR));
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
