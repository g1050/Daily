/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ln_nickname;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *ln_usr;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ln_pwd;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *ln_pwd2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *ln_friend;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLineEdit *ln_movie;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *ln_school;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_reg;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(307, 473);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Register->sizePolicy().hasHeightForWidth());
        Register->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(Register);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_9 = new QLabel(Register);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_5->addWidget(label_9);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Register);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        ln_nickname = new QLineEdit(Register);
        ln_nickname->setObjectName(QStringLiteral("ln_nickname"));

        horizontalLayout->addWidget(ln_nickname);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 7);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Register);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        ln_usr = new QLineEdit(Register);
        ln_usr->setObjectName(QStringLiteral("ln_usr"));

        horizontalLayout_2->addWidget(ln_usr);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 7);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Register);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        ln_pwd = new QLineEdit(Register);
        ln_pwd->setObjectName(QStringLiteral("ln_pwd"));

        horizontalLayout_3->addWidget(ln_pwd);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 7);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(Register);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        ln_pwd2 = new QLineEdit(Register);
        ln_pwd2->setObjectName(QStringLiteral("ln_pwd2"));

        horizontalLayout_4->addWidget(ln_pwd2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 7);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_4);

        label_5 = new QLabel(Register);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(Register);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        ln_friend = new QLineEdit(Register);
        ln_friend->setObjectName(QStringLiteral("ln_friend"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ln_friend->sizePolicy().hasHeightForWidth());
        ln_friend->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(ln_friend);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 4);

        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(Register);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        ln_movie = new QLineEdit(Register);
        ln_movie->setObjectName(QStringLiteral("ln_movie"));
        sizePolicy1.setHeightForWidth(ln_movie->sizePolicy().hasHeightForWidth());
        ln_movie->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(ln_movie);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_8 = new QLabel(Register);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_3->addWidget(label_8);

        ln_school = new QLineEdit(Register);
        ln_school->setObjectName(QStringLiteral("ln_school"));
        sizePolicy1.setHeightForWidth(ln_school->sizePolicy().hasHeightForWidth());
        ln_school->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(ln_school);

        verticalLayout_3->setStretch(0, 6);
        verticalLayout_3->setStretch(1, 4);

        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        btn_reg = new QPushButton(Register);
        btn_reg->setObjectName(QStringLiteral("btn_reg"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_reg->sizePolicy().hasHeightForWidth());
        btn_reg->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(btn_reg);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 7);
        verticalLayout_5->setStretch(2, 1);

        verticalLayout_6->addLayout(verticalLayout_5);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", Q_NULLPTR));
        label_9->setText(QString());
        label->setText(QApplication::translate("Register", "\346\230\265\347\247\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "\350\264\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "\345\257\206\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("Register", "\345\257\206\344\277\235\351\227\256\351\242\230:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Register", "\344\275\240\347\232\204\347\253\245\345\271\264\345\245\275\345\217\213\345\220\215\345\255\227?", Q_NULLPTR));
        label_7->setText(QApplication::translate("Register", "\344\275\240\346\234\200\345\226\234\346\254\242\347\234\213\347\232\204\347\224\265\345\275\261", Q_NULLPTR));
        label_8->setText(QApplication::translate("Register", "\344\275\240\346\257\225\344\270\232\344\272\216\345\223\252\344\270\252\345\260\217\345\255\246?", Q_NULLPTR));
        btn_reg->setText(QApplication::translate("Register", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
