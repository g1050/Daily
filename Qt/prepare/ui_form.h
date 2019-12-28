/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *asd;
    QWidget *tab_2;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QWidget *tab;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(768, 568);
        verticalLayout_3 = new QVBoxLayout(Form);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        asd = new QTabWidget(Form);
        asd->setObjectName(QStringLiteral("asd"));
        asd->setTabPosition(QTabWidget::South);
        asd->setElideMode(Qt::ElideNone);
        asd->setUsesScrollButtons(true);
        asd->setDocumentMode(false);
        asd->setTabsClosable(false);
        asd->setMovable(false);
        asd->setTabBarAutoHide(false);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        calendarWidget = new QCalendarWidget(tab_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(110, 170, 456, 177));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 120, 89, 25));
        asd->addTab(tab_2, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_2);

        asd->addTab(widget, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        asd->addTab(tab, QString());

        verticalLayout_3->addWidget(asd);


        retranslateUi(Form);

        asd->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Form", "PushButton", Q_NULLPTR));
        asd->setTabText(asd->indexOf(tab_2), QApplication::translate("Form", "456", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Form", "Add", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Form", "Delete", Q_NULLPTR));
        label->setText(QApplication::translate("Form", "Name", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Form", "Search", Q_NULLPTR));
        asd->setTabText(asd->indexOf(widget), QApplication::translate("Form", "123", Q_NULLPTR));
        asd->setTabText(asd->indexOf(tab), QApplication::translate("Form", "\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
