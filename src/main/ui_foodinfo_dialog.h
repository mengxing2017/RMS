/********************************************************************************
** Form generated from reading UI file 'foodinfo_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODINFO_DIALOG_H
#define UI_FOODINFO_DIALOG_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodInfo_Dialog
{
public:
    QPushButton *deleteFood_Button;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *foodName_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *foodPrice_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *addFood_Button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *FoodInfo_Dialog)
    {
        if (FoodInfo_Dialog->objectName().isEmpty())
            FoodInfo_Dialog->setObjectName(QStringLiteral("FoodInfo_Dialog"));
        FoodInfo_Dialog->resize(583, 400);
        deleteFood_Button = new QPushButton(FoodInfo_Dialog);
        deleteFood_Button->setObjectName(QStringLiteral("deleteFood_Button"));
        deleteFood_Button->setGeometry(QRect(360, 360, 80, 22));
        tableWidget = new QTableWidget(FoodInfo_Dialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(280, 20, 251, 331));
        layoutWidget = new QWidget(FoodInfo_Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 102, 191, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        foodName_lineEdit = new QLineEdit(layoutWidget);
        foodName_lineEdit->setObjectName(QStringLiteral("foodName_lineEdit"));

        horizontalLayout->addWidget(foodName_lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        foodPrice_lineEdit = new QLineEdit(layoutWidget);
        foodPrice_lineEdit->setObjectName(QStringLiteral("foodPrice_lineEdit"));

        horizontalLayout_2->addWidget(foodPrice_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        addFood_Button = new QPushButton(layoutWidget);
        addFood_Button->setObjectName(QStringLiteral("addFood_Button"));

        horizontalLayout_3->addWidget(addFood_Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(FoodInfo_Dialog);

        QMetaObject::connectSlotsByName(FoodInfo_Dialog);
    } // setupUi

    void retranslateUi(QDialog *FoodInfo_Dialog)
    {
        FoodInfo_Dialog->setWindowTitle(QApplication::translate("FoodInfo_Dialog", "Dialog", nullptr));
        deleteFood_Button->setText(QApplication::translate("FoodInfo_Dialog", "\345\210\240\351\231\244\350\217\234\345\223\201", nullptr));
        label->setText(QApplication::translate("FoodInfo_Dialog", "\350\217\234\345\223\201\345\220\215\347\247\260:", nullptr));
        label_2->setText(QApplication::translate("FoodInfo_Dialog", "\345\215\225\344\273\267:", nullptr));
        addFood_Button->setText(QApplication::translate("FoodInfo_Dialog", "\346\267\273\345\212\240\350\217\234\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FoodInfo_Dialog: public Ui_FoodInfo_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODINFO_DIALOG_H
