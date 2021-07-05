#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDebug>
#include <QDialog>
#include <QMessageBox>

#include "db/user_management.h"

namespace Ui {
class LoginDialog;
}

class LoginSlot : public QDialog {
  Q_OBJECT

 public:
  explicit LoginSlot(QWidget *parent = 0);
  ~LoginSlot();

 private slots:
  void on_button_Login_clicked();

  void on_button_Quit_clicked();

  void on_button_Close_clicked();

 private:
  Ui::LoginDialog *ui;
};

#endif  // LOGINDIALOG_H
