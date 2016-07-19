#ifndef ORDERDISHESDIALOG_H
#define ORDERDISHESDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlTableModel>

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

    void initFoodTable();//初始化菜单表
};

#endif // ORDERDISHESDIALOG_H
