#ifndef FOODINFO_DIALOG_H
#define FOODINFO_DIALOG_H

#include <QDebug>
#include <QDialog>

#include <string>

#include "db/food_info.h"

namespace Ui {
class FoodInfo_Dialog;
}

class FoodInfo_Dialog : public QDialog {
  Q_OBJECT

 public:
  explicit FoodInfo_Dialog(QWidget *parent = 0);
  ~FoodInfo_Dialog();

 private slots:
  void on_deleteFood_Button_clicked();

  void on_addFood_Button_clicked();

 private:
  Ui::FoodInfo_Dialog *ui;

  void initFood();

  FoodInfo *foodInfo;
};

#endif  // FOODINFO_DIALOG_H
