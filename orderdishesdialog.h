#ifndef ORDERDISHESDIALOG_H
#define ORDERDISHESDIALOG_H

#include <QDialog>

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
    void on_pushButton_clicked();
    void on_OkButton_clicked();
    void on_cancelButton_clicked();
    void on_deleteButton_clicked();
    void on_addButton_clicked();

private:
    Ui::OrderDishesDialog *ui;
    QString idData;
    int count;
};

#endif // ORDERDISHESDIALOG_H
