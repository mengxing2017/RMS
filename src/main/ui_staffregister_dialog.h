/********************************************************************************
** Form generated from reading UI file 'staffregister_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFREGISTER_DIALOG_H
#define UI_STAFFREGISTER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_staffRegister_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *userName_lineEdit;
    QLineEdit *password_lineEdit;
    QLineEdit *rePassword_lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *cancel_pushButton;

    void setupUi(QDialog *staffRegister_Dialog)
    {
        if (staffRegister_Dialog->objectName().isEmpty())
            staffRegister_Dialog->setObjectName(QStringLiteral("staffRegister_Dialog"));
        staffRegister_Dialog->resize(355, 272);
        widget = new QWidget(staffRegister_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(31, 34, 291, 221));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        userName_lineEdit = new QLineEdit(widget);
        userName_lineEdit->setObjectName(QStringLiteral("userName_lineEdit"));

        verticalLayout_2->addWidget(userName_lineEdit);

        password_lineEdit = new QLineEdit(widget);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));

        verticalLayout_2->addWidget(password_lineEdit);

        rePassword_lineEdit = new QLineEdit(widget);
        rePassword_lineEdit->setObjectName(QStringLiteral("rePassword_lineEdit"));

        verticalLayout_2->addWidget(rePassword_lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        cancel_pushButton = new QPushButton(widget);
        cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));

        horizontalLayout_2->addWidget(cancel_pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(staffRegister_Dialog);

        QMetaObject::connectSlotsByName(staffRegister_Dialog);
    } // setupUi

    void retranslateUi(QDialog *staffRegister_Dialog)
    {
        staffRegister_Dialog->setWindowTitle(QApplication::translate("staffRegister_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("staffRegister_Dialog", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_2->setText(QApplication::translate("staffRegister_Dialog", "\345\257\206\347\240\201:", nullptr));
        label_3->setText(QApplication::translate("staffRegister_Dialog", "\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
        label_4->setText(QApplication::translate("staffRegister_Dialog", "\346\235\203\351\231\220:", nullptr));
        pushButton->setText(QApplication::translate("staffRegister_Dialog", "\346\217\220\344\272\244", nullptr));
        pushButton_2->setText(QApplication::translate("staffRegister_Dialog", "\351\207\215\347\275\256", nullptr));
        cancel_pushButton->setText(QApplication::translate("staffRegister_Dialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class staffRegister_Dialog: public Ui_staffRegister_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFREGISTER_DIALOG_H
