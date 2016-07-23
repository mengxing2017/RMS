#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>
#include <QSql>
#include <QSqlQuery>
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
    bool returnAdmin();

private slots:
    void on_LoginButton_clicked();

    void on_QuitButton_clicked();

private:
    Ui::LoginDialog *ui;
    bool pass;
    bool admin;
    QSqlDatabase m_db;
//    QSqlQuery query;
};

#endif // LOGINDIALOG_H
