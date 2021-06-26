#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDebug>
#include <QDialog>
#include <QMessageBox>

#include "src/include/db/user_management.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog {
  Q_OBJECT

public:
  explicit LoginDialog(QWidget *parent = 0);
  ~LoginDialog();

  bool VerifyPass();
  bool returnAdmin();

private slots:
  void on_button_Login_clicked();

  void on_button_Quit_clicked();

  void on_button_Close_clicked();

private:
  Ui::LoginDialog *ui;
  bool pass;
  bool admin;
  QSqlDatabase m_db;
  //    QSqlQuery query;
};

#endif // LOGINDIALOG_H
