#ifndef ORDERDISHESDIALOG_H
#define ORDERDISHESDIALOG_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>
#include <QBrush>
#include <QPalette>

#include "src/include/db/food_info.h"
#include "src/include/db/order_dishes.h"

namespace Ui {
class OrderDishesDialog;
}

class OrderDishesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OrderDishesDialog(QWidget *parent = 0);
    ~OrderDishesDialog();

    void receiverIdData(QString data);
    QString returnTime();
    bool returnIsOrder();
    void initFoodTable();


private slots:
    void on_OkButton_clicked();
    void on_cancelButton_clicked();
    void on_deleteButton_clicked();
    void on_addButton_clicked();

private:
    Ui::OrderDishesDialog *ui;
    QString idData;
    int count;
    QString dateStr;
   //初始化菜单表
    bool isOrder;

    //窗口初始化
    void initWindow();
};

#endif // ORDERDISHESDIALOG_H
