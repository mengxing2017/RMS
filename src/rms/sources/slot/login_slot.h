#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDebug>
#include <QDialog>
#include <QMessageBox>

#include "../ui/login_dlg_ui.h"

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
  LoginDlgUi *ui;
};

#endif  // LOGINDIALOG_H
