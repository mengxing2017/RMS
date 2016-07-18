#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

    bool VerifyPass();

private slots:
    void on_LoginButton_clicked();

    void on_QuitButton_clicked();

private:
    Ui::LoginDialog *ui;
    bool pass;
};

#endif // LOGINDIALOG_H
