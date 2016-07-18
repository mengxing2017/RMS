#ifndef MONTHINCOMEQUERY_DIALOG_H
#define MONTHINCOMEQUERY_DIALOG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class MonthIncomeQuery_Dialog;
}

class MonthIncomeQuery_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit MonthIncomeQuery_Dialog(QWidget *parent = 0);
    ~MonthIncomeQuery_Dialog();

private slots:
    void on_queryButton_clicked();

    void on_quitButton_clicked();

private:
    Ui::MonthIncomeQuery_Dialog *ui;
};

#endif // MONTHINCOMEQUERY_DIALOG_H
