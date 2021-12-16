#ifndef STAFFREGISTER_DIALOG_H
#define STAFFREGISTER_DIALOG_H

#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include <QStringList>

namespace Ui {
class staffRegister_Dialog;
}

class staffRegister_Dialog : public QDialog {
  Q_OBJECT

 public:
  explicit staffRegister_Dialog(QWidget *parent = 0);
  ~staffRegister_Dialog();

 private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_cancel_pushButton_clicked();

 private:
  Ui::staffRegister_Dialog *ui;
};

#endif  // STAFFREGISTER_DIALOG_H
