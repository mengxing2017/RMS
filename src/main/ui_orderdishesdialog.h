/********************************************************************************
** Form generated from reading UI file 'orderdishesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERDISHESDIALOG_H
#define UI_ORDERDISHESDIALOG_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderDishesDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *OkButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QTableWidget *food_tableWidget;
    QTableWidget *isSelcteFood_tableWidget;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *date_lineEdit;

    void setupUi(QDialog *OrderDishesDialog)
    {
        if (OrderDishesDialog->objectName().isEmpty())
            OrderDishesDialog->setObjectName(QStringLiteral("OrderDishesDialog"));
        OrderDishesDialog->resize(690, 423);
        layoutWidget = new QWidget(OrderDishesDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 360, 301, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        OkButton = new QPushButton(layoutWidget);
        OkButton->setObjectName(QStringLiteral("OkButton"));

        horizontalLayout_3->addWidget(OkButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);

        food_tableWidget = new QTableWidget(OrderDishesDialog);
        food_tableWidget->setObjectName(QStringLiteral("food_tableWidget"));
        food_tableWidget->setGeometry(QRect(35, 61, 291, 281));
        isSelcteFood_tableWidget = new QTableWidget(OrderDishesDialog);
        isSelcteFood_tableWidget->setObjectName(QStringLiteral("isSelcteFood_tableWidget"));
        isSelcteFood_tableWidget->setGeometry(QRect(370, 60, 271, 281));
        addButton = new QPushButton(OrderDishesDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(340, 120, 20, 22));
        deleteButton = new QPushButton(OrderDishesDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(340, 190, 20, 22));
        widget = new QWidget(OrderDishesDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(82, 30, 481, 26));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        date_lineEdit = new QLineEdit(widget);
        date_lineEdit->setObjectName(QStringLiteral("date_lineEdit"));

        horizontalLayout_2->addWidget(date_lineEdit);


        retranslateUi(OrderDishesDialog);

        QMetaObject::connectSlotsByName(OrderDishesDialog);
    } // setupUi

    void retranslateUi(QDialog *OrderDishesDialog)
    {
        OrderDishesDialog->setWindowTitle(QApplication::translate("OrderDishesDialog", "Dialog", nullptr));
        OkButton->setText(QApplication::translate("OrderDishesDialog", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QApplication::translate("OrderDishesDialog", "\345\217\226\346\266\210", nullptr));
        addButton->setText(QApplication::translate("OrderDishesDialog", ">>", nullptr));
        deleteButton->setText(QApplication::translate("OrderDishesDialog", "<<", nullptr));
        label->setText(QApplication::translate("OrderDishesDialog", "\346\241\214\345\217\267:", nullptr));
        label_2->setText(QApplication::translate("OrderDishesDialog", "\345\275\223\345\211\215\346\227\245\346\234\237:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderDishesDialog: public Ui_OrderDishesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERDISHESDIALOG_H