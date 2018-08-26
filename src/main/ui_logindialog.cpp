#include "ui_logindialog.h"

void Ui_LoginDialog::setupUi(QDialog *LoginDialog)
{
    if (LoginDialog->objectName().isEmpty())
        LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
    LoginDialog->resize(420, 320);
    layoutWidget = new QWidget(LoginDialog);
    layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
    layoutWidget->setGeometry(QRect(120, 210, 180, 90));
    verticalLayout = new QVBoxLayout(layoutWidget);
    verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    gridLayout = new QGridLayout();
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    label = new QLabel(layoutWidget);
    label->setObjectName(QStringLiteral("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    UserLineEdit = new QLineEdit(layoutWidget);
    UserLineEdit->setObjectName(QStringLiteral("UserLineEdit"));

    gridLayout->addWidget(UserLineEdit, 0, 1, 1, 1);

    label_2 = new QLabel(layoutWidget);
    label_2->setObjectName(QStringLiteral("label_2"));

    gridLayout->addWidget(label_2, 1, 0, 1, 1);

    passLineEdit = new QLineEdit(layoutWidget);
    passLineEdit->setObjectName(QStringLiteral("passLineEdit"));

    gridLayout->addWidget(passLineEdit, 1, 1, 1, 1);


    verticalLayout->addLayout(gridLayout);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
    LoginButton = new QPushButton(layoutWidget);
    LoginButton->setObjectName(QStringLiteral("LoginButton"));

    horizontalLayout->addWidget(LoginButton);

    QuitButton = new QPushButton(layoutWidget);
    QuitButton->setObjectName(QStringLiteral("QuitButton"));

    horizontalLayout->addWidget(QuitButton);


    verticalLayout->addLayout(horizontalLayout);


    retranslateUi(LoginDialog);

    QMetaObject::connectSlotsByName(LoginDialog);
} // setupUi

void Ui_LoginDialog::retranslateUi(QDialog *LoginDialog)
{
    LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", nullptr));
    label->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215:", nullptr));
    label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201:", nullptr));
    LoginButton->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
    QuitButton->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", nullptr));
} // retranslateUi
