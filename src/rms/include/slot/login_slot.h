#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDebug>
#include <QDialog>
#include <QMessageBox>

#include "ui/ui_login_dialog.h"

class LoginSlot : public QObject {
  Q_OBJECT

 public:
  LoginSlot();
  void show();
  void deleteUi();

 private Q_SLOTS:
  void loginClicked();
  void closeClicked();

 private:
  Ui_Login_Dialog *ui;
};

#endif  // LOGINDIALOG_H
