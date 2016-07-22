#ifndef ORDERDISHESDIALOG_H
#define ORDERDISHESDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QDateTime>
#include <QBrush>
#include <QPalette>
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
    bool returnIsOrder();
    void getDatabase(QSqlDatabase &db);
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
    QSqlDatabase m_db;
    QDateTime time;
   //初始化菜单表
    bool isOrder;

    //窗口初始化
    void initWindow();
};

#endif // ORDERDISHESDIALOG_H
