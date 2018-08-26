/********************************************************************************
** Form generated from reading UI file 'dishescountdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISHESCOUNTDIALOG_H
#define UI_DISHESCOUNTDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DishesCountDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DishesCountDialog)
    {
        if (DishesCountDialog->objectName().isEmpty())
            DishesCountDialog->setObjectName(QStringLiteral("DishesCountDialog"));
        DishesCountDialog->resize(219, 92);
        widget = new QWidget(DishesCountDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 17, 198, 56));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DishesCountDialog);

        QMetaObject::connectSlotsByName(DishesCountDialog);
    } // setupUi

    void retranslateUi(QDialog *DishesCountDialog)
    {
        DishesCountDialog->setWindowTitle(QApplication::translate("DishesCountDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("DishesCountDialog", "\344\273\275\346\225\260:", nullptr));
        pushButton->setText(QApplication::translate("DishesCountDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("DishesCountDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DishesCountDialog: public Ui_DishesCountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISHESCOUNTDIALOG_H
