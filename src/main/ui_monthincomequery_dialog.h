/********************************************************************************
** Form generated from reading UI file 'monthincomequery_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHINCOMEQUERY_DIALOG_H
#define UI_MONTHINCOMEQUERY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonthIncomeQuery_Dialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *year_comboBox;
    QLabel *label_2;
    QComboBox *month_comboBox;
    QLabel *label_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *queryButton;
    QPushButton *quitButton;

    void setupUi(QDialog *MonthIncomeQuery_Dialog)
    {
        if (MonthIncomeQuery_Dialog->objectName().isEmpty())
            MonthIncomeQuery_Dialog->setObjectName(QStringLiteral("MonthIncomeQuery_Dialog"));
        MonthIncomeQuery_Dialog->resize(328, 148);
        widget = new QWidget(MonthIncomeQuery_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 60, 275, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        year_comboBox = new QComboBox(widget);
        year_comboBox->setObjectName(QStringLiteral("year_comboBox"));

        horizontalLayout->addWidget(year_comboBox);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        month_comboBox = new QComboBox(widget);
        month_comboBox->setObjectName(QStringLiteral("month_comboBox"));

        horizontalLayout->addWidget(month_comboBox);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        widget1 = new QWidget(MonthIncomeQuery_Dialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(90, 110, 168, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        queryButton = new QPushButton(widget1);
        queryButton->setObjectName(QStringLiteral("queryButton"));

        horizontalLayout_2->addWidget(queryButton);

        quitButton = new QPushButton(widget1);
        quitButton->setObjectName(QStringLiteral("quitButton"));

        horizontalLayout_2->addWidget(quitButton);


        retranslateUi(MonthIncomeQuery_Dialog);

        QMetaObject::connectSlotsByName(MonthIncomeQuery_Dialog);
    } // setupUi

    void retranslateUi(QDialog *MonthIncomeQuery_Dialog)
    {
        MonthIncomeQuery_Dialog->setWindowTitle(QApplication::translate("MonthIncomeQuery_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("MonthIncomeQuery_Dialog", "\350\257\267\351\200\211\346\213\251\345\271\264\346\234\210:", nullptr));
        label_2->setText(QApplication::translate("MonthIncomeQuery_Dialog", "\345\271\264", nullptr));
        label_3->setText(QApplication::translate("MonthIncomeQuery_Dialog", "\346\234\210", nullptr));
        queryButton->setText(QApplication::translate("MonthIncomeQuery_Dialog", "\346\237\245\350\257\242", nullptr));
        quitButton->setText(QApplication::translate("MonthIncomeQuery_Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MonthIncomeQuery_Dialog: public Ui_MonthIncomeQuery_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHINCOMEQUERY_DIALOG_H
