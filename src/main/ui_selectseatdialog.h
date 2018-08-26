/********************************************************************************
** Form generated from reading UI file 'selectseatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSEATDIALOG_H
#define UI_SELECTSEATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectSeatDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *SelectSeatDialog)
    {
        if (SelectSeatDialog->objectName().isEmpty())
            SelectSeatDialog->setObjectName(QStringLiteral("SelectSeatDialog"));
        SelectSeatDialog->resize(530, 291);
        layoutWidget = new QWidget(SelectSeatDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 90, 129, 104));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        verticalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout_2->addWidget(cancelButton);


        verticalLayout_3->addLayout(verticalLayout_2);

        tableWidget = new QTableWidget(SelectSeatDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(200, 0, 331, 291));

        retranslateUi(SelectSeatDialog);

        QMetaObject::connectSlotsByName(SelectSeatDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectSeatDialog)
    {
        SelectSeatDialog->setWindowTitle(QApplication::translate("SelectSeatDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("SelectSeatDialog", "\351\241\276\345\256\242\351\200\211\346\213\251\347\232\204\346\241\214\345\217\267:", nullptr));
        okButton->setText(QApplication::translate("SelectSeatDialog", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QApplication::translate("SelectSeatDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectSeatDialog: public Ui_SelectSeatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSEATDIALOG_H
