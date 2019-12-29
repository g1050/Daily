/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manager
{
public:
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_submit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLineEdit *ln_search;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_search;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_all;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *ln_mouse;
    QTableView *tv_adjvex;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_30;
    QLabel *label_9;
    QLineEdit *ln_st;
    QSpacerItem *horizontalSpacer_33;
    QLabel *label_8;
    QLineEdit *ln_ed;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *btn_distance;
    QLineEdit *ln_distance;
    QSpacerItem *horizontalSpacer_32;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_submit_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btn_cancel_2;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *btn_add2;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *btn_delete2;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_4;
    QLineEdit *ln_search_2;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *btn_search_2;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_all_2;
    QSpacerItem *horizontalSpacer_14;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QTableView *tv_edge;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *btn_submit_3;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *btn_cancel_3;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *btn_add3;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *btn_delete3;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_5;
    QLineEdit *ln_search_3;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *btn_search_3;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *btn_all_3;
    QSpacerItem *horizontalSpacer_21;
    QWidget *tab_3;
    QLabel *label_3;
    QLabel *lb_mouse2;

    void setupUi(QWidget *Manager)
    {
        if (Manager->objectName().isEmpty())
            Manager->setObjectName(QStringLiteral("Manager"));
        Manager->resize(1300, 863);
        Manager->setMinimumSize(QSize(1300, 863));
        Manager->setMaximumSize(QSize(1300, 863));
        horizontalLayout_3 = new QHBoxLayout(Manager);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tabWidget = new QTabWidget(Manager);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_submit = new QPushButton(tab);
        btn_submit->setObjectName(QStringLiteral("btn_submit"));

        horizontalLayout_2->addWidget(btn_submit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btn_cancel = new QPushButton(tab);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout_2->addWidget(btn_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        ln_search = new QLineEdit(tab);
        ln_search->setObjectName(QStringLiteral("ln_search"));

        horizontalLayout->addWidget(ln_search);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btn_search = new QPushButton(tab);
        btn_search->setObjectName(QStringLiteral("btn_search"));

        horizontalLayout->addWidget(btn_search);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        btn_all = new QPushButton(tab);
        btn_all->setObjectName(QStringLiteral("btn_all"));

        horizontalLayout->addWidget(btn_all);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        ln_mouse = new QLineEdit(tab_2);
        ln_mouse->setObjectName(QStringLiteral("ln_mouse"));

        verticalLayout_3->addWidget(ln_mouse);

        tv_adjvex = new QTableView(tab_2);
        tv_adjvex->setObjectName(QStringLiteral("tv_adjvex"));

        verticalLayout_3->addWidget(tv_adjvex);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_30);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        ln_st = new QLineEdit(tab_2);
        ln_st->setObjectName(QStringLiteral("ln_st"));

        horizontalLayout_6->addWidget(ln_st);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_33);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        ln_ed = new QLineEdit(tab_2);
        ln_ed->setObjectName(QStringLiteral("ln_ed"));

        horizontalLayout_6->addWidget(ln_ed);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_31);

        btn_distance = new QPushButton(tab_2);
        btn_distance->setObjectName(QStringLiteral("btn_distance"));

        horizontalLayout_6->addWidget(btn_distance);

        ln_distance = new QLineEdit(tab_2);
        ln_distance->setObjectName(QStringLiteral("ln_distance"));

        horizontalLayout_6->addWidget(ln_distance);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_32);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        btn_submit_2 = new QPushButton(tab_2);
        btn_submit_2->setObjectName(QStringLiteral("btn_submit_2"));

        horizontalLayout_4->addWidget(btn_submit_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        btn_cancel_2 = new QPushButton(tab_2);
        btn_cancel_2->setObjectName(QStringLiteral("btn_cancel_2"));

        horizontalLayout_4->addWidget(btn_cancel_2);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_22);

        btn_add2 = new QPushButton(tab_2);
        btn_add2->setObjectName(QStringLiteral("btn_add2"));

        horizontalLayout_4->addWidget(btn_add2);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_23);

        btn_delete2 = new QPushButton(tab_2);
        btn_delete2->setObjectName(QStringLiteral("btn_delete2"));

        horizontalLayout_4->addWidget(btn_delete2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        ln_search_2 = new QLineEdit(tab_2);
        ln_search_2->setObjectName(QStringLiteral("ln_search_2"));

        horizontalLayout_5->addWidget(ln_search_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        btn_search_2 = new QPushButton(tab_2);
        btn_search_2->setObjectName(QStringLiteral("btn_search_2"));

        horizontalLayout_5->addWidget(btn_search_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);

        btn_all_2 = new QPushButton(tab_2);
        btn_all_2->setObjectName(QStringLiteral("btn_all_2"));

        horizontalLayout_5->addWidget(btn_all_2);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_14);


        verticalLayout_3->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab_2, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tv_edge = new QTableView(widget);
        tv_edge->setObjectName(QStringLiteral("tv_edge"));

        verticalLayout_4->addWidget(tv_edge);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);

        btn_submit_3 = new QPushButton(widget);
        btn_submit_3->setObjectName(QStringLiteral("btn_submit_3"));

        horizontalLayout_7->addWidget(btn_submit_3);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);

        btn_cancel_3 = new QPushButton(widget);
        btn_cancel_3->setObjectName(QStringLiteral("btn_cancel_3"));

        horizontalLayout_7->addWidget(btn_cancel_3);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_24);

        btn_add3 = new QPushButton(widget);
        btn_add3->setObjectName(QStringLiteral("btn_add3"));

        horizontalLayout_7->addWidget(btn_add3);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_25);

        btn_delete3 = new QPushButton(widget);
        btn_delete3->setObjectName(QStringLiteral("btn_delete3"));

        horizontalLayout_7->addWidget(btn_delete3);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_18);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_8->addWidget(label_5);

        ln_search_3 = new QLineEdit(widget);
        ln_search_3->setObjectName(QStringLiteral("ln_search_3"));

        horizontalLayout_8->addWidget(ln_search_3);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_19);

        btn_search_3 = new QPushButton(widget);
        btn_search_3->setObjectName(QStringLiteral("btn_search_3"));

        horizontalLayout_8->addWidget(btn_search_3);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);

        btn_all_3 = new QPushButton(widget);
        btn_all_3->setObjectName(QStringLiteral("btn_all_3"));

        horizontalLayout_8->addWidget(btn_all_3);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_21);


        verticalLayout_4->addLayout(horizontalLayout_8);

        tabWidget->addTab(widget, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1, 1, 1019, 843));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../build-Navigation_system-Desktop_Qt_5_8_0_GCC_64bit-Debug/\345\271\263\351\235\242\345\233\276.png")));
        label_3->setScaledContents(true);
        lb_mouse2 = new QLabel(tab_3);
        lb_mouse2->setObjectName(QStringLiteral("lb_mouse2"));
        lb_mouse2->setGeometry(QRect(1057, 10, 255, 820));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_mouse2->sizePolicy().hasHeightForWidth());
        lb_mouse2->setSizePolicy(sizePolicy);
        lb_mouse2->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        tabWidget->addTab(tab_3, QString());

        horizontalLayout_3->addWidget(tabWidget);


        retranslateUi(Manager);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QWidget *Manager)
    {
        Manager->setWindowTitle(QApplication::translate("Manager", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Manager", "\347\224\250\346\210\267\346\235\203\351\231\2200\350\241\250\347\244\272\346\231\256\351\200\232\347\224\250\346\210\267,1\350\241\250\347\244\272\347\256\241\347\220\206\345\221\230\343\200\202", Q_NULLPTR));
        btn_submit->setText(QApplication::translate("Manager", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        btn_cancel->setText(QApplication::translate("Manager", "\346\222\244\351\224\200\346\223\215\344\275\234", Q_NULLPTR));
        label_2->setText(QApplication::translate("Manager", "\350\276\223\345\205\245\350\246\201\346\237\245\346\211\276\347\232\204\347\224\250\346\210\267", Q_NULLPTR));
        btn_search->setText(QApplication::translate("Manager", "\346\237\245\346\211\276", Q_NULLPTR));
        btn_all->setText(QApplication::translate("Manager", "\346\230\276\347\244\272\345\205\250\351\203\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Manager", "\350\264\246\345\217\267\346\235\203\351\231\220\347\256\241\347\220\206", Q_NULLPTR));
        label_9->setText(QApplication::translate("Manager", "\350\265\267\347\202\271", Q_NULLPTR));
        label_8->setText(QApplication::translate("Manager", "\347\273\210\347\202\271", Q_NULLPTR));
        btn_distance->setText(QApplication::translate("Manager", "\350\256\241\347\256\227\350\267\235\347\246\273", Q_NULLPTR));
        btn_submit_2->setText(QApplication::translate("Manager", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        btn_cancel_2->setText(QApplication::translate("Manager", "\346\222\244\351\224\200\346\223\215\344\275\234", Q_NULLPTR));
        btn_add2->setText(QApplication::translate("Manager", "\345\242\236\345\212\240", Q_NULLPTR));
        btn_delete2->setText(QApplication::translate("Manager", "\345\210\240\351\231\244", Q_NULLPTR));
        label_4->setText(QApplication::translate("Manager", "\350\276\223\345\205\245\350\246\201\346\237\245\346\211\276\347\232\204\346\231\257\347\202\271", Q_NULLPTR));
        btn_search_2->setText(QApplication::translate("Manager", "\346\237\245\346\211\276", Q_NULLPTR));
        btn_all_2->setText(QApplication::translate("Manager", "\346\230\276\347\244\272\345\205\250\351\203\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Manager", "\346\231\257\347\202\271\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        btn_submit_3->setText(QApplication::translate("Manager", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        btn_cancel_3->setText(QApplication::translate("Manager", "\346\222\244\351\224\200\346\223\215\344\275\234", Q_NULLPTR));
        btn_add3->setText(QApplication::translate("Manager", "\345\242\236\345\212\240", Q_NULLPTR));
        btn_delete3->setText(QApplication::translate("Manager", "\345\210\240\351\231\244", Q_NULLPTR));
        label_5->setText(QApplication::translate("Manager", "\350\276\223\345\205\245\350\246\201\346\237\245\346\211\276\347\232\204\351\201\223\350\267\257", Q_NULLPTR));
        btn_search_3->setText(QApplication::translate("Manager", "\346\237\245\346\211\276", Q_NULLPTR));
        btn_all_3->setText(QApplication::translate("Manager", "\346\230\276\347\244\272\345\205\250\351\203\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("Manager", "\351\201\223\350\267\257\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        label_3->setText(QString());
        lb_mouse2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Manager", "\350\216\267\345\217\226\346\231\257\347\202\271\345\235\220\346\240\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
