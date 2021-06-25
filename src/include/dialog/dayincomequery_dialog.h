#ifndef DAYINCOMEQUERY_DIALOG_H
#define DAYINCOMEQUERY_DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QDate>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class DayIncomeQuery_Dialog;
}

class DayIncomeQuery_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit DayIncomeQuery_Dialog(QWidget *parent = 0);
    ~DayIncomeQuery_Dialog();

    void initCombox();

private slots:
    void on_queryButton_clicked();

    void on_quitButton_clicked();

private:
    Ui::DayIncomeQuery_Dialog *ui;
    QSqlDatabase m_db;
};

#endif // DAYINCOMEQUERY_DIALOG_H
