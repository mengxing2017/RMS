#ifndef SELECTSEATDIALOG_H
#define SELECTSEATDIALOG_H

#include "orderdishes_dialog.h"
#include <QBrush>
#include <QDialog>
#include <QPalette>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QTreeWidgetItem>
#include <QDebug>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QTreeWidget>

#include "src/include/db/seat_info.h"

namespace Ui {
class SelectSeat_Dialog;
}

class SelectSeat_Dialog : public QDialog {
  Q_OBJECT

public:
  explicit SelectSeat_Dialog(QWidget *parent = 0);
  ~SelectSeat_Dialog();
  //窗口初始化
  void initWindow();
  void deskInit();

private slots:
  void on_button_Ok_clicked();
  void on_button_Cancel_clicked();
  void on_tableWidget_clicked(const QModelIndex &index);
  void on_button_Close_clicked();

private:
  Ui::SelectSeat_Dialog *ui;
  QString idData;
  QString flagId;
  OrderDishesDialog *orderDishes;

  SeatInfo *seat;
};

#endif // SELECTSEATDIALOG_H
