/********************************************************************************
** Form generated from reading UI file 'dayincomequery_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAYINCOMEQUERY_DIALOG_H
#define UI_DAYINCOMEQUERY_DIALOG_H

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

class Ui_DayIncomeQuery_Dialog
{
public:
    QPushButton *queryButton;
    QPushButton *quitButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *year_comboBox;
    QLabel *label_2;
    QComboBox *month_comboBox;
    QLabel *label_3;
    QComboBox *day_comboBox;
    QLabel *label_4;

    void setupUi(QDialog *DayIncomeQuery_Dialog)
    {
        if (DayIncomeQuery_Dialog->objectName().isEmpty())
            DayIncomeQuery_Dialog->setObjectName(QStringLiteral("DayIncomeQuery_Dialog"));
        DayIncomeQuery_Dialog->resize(465, 165);
        queryButton = new QPushButton(DayIncomeQuery_Dialog);
        queryButton->setObjectName(QStringLiteral("queryButton"));
        queryButton->setGeometry(QRect(40, 60, 80, 22));
        quitButton = new QPushButton(DayIncomeQuery_Dialog);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(150, 60, 80, 22));
        widget = new QWidget(DayIncomeQuery_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 20, 359, 24));
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

        day_comboBox = new QComboBox(widget);
        day_comboBox->setObjectName(QStringLiteral("day_comboBox"));

        horizontalLayout->addWidget(day_comboBox);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);


        retranslateUi(DayIncomeQuery_Dialog);

        QMetaObject::connectSlotsByName(DayIncomeQuery_Dialog);
    } // setupUi

    void retranslateUi(QDialog *DayIncomeQuery_Dialog)
    {
        DayIncomeQuery_Dialog->setWindowTitle(QApplication::translate("DayIncomeQuery_Dialog", "Dialog", nullptr));
        queryButton->setText(QApplication::translate("DayIncomeQuery_Dialog", "\346\237\245\350\257\242", nullptr));
        quitButton->setText(QApplication::translate("DayIncomeQuery_Dialog", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("DayIncomeQuery_Dialog", "\351\200\211\346\213\251\346\227\245\346\234\237", nullptr));
        label_2->setText(QApplication::translate("DayIncomeQuery_Dialog", "\345\271\264", nullptr));
        label_3->setText(QApplication::translate("DayIncomeQuery_Dialog", "\346\234\210", nullptr));
        label_4->setText(QApplication::translate("DayIncomeQuery_Dialog", "\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DayIncomeQuery_Dialog: public Ui_DayIncomeQuery_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAYINCOMEQUERY_DIALOG_H
