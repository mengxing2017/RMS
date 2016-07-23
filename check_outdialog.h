#ifndef CHECK_OUTDIALOG_H
#define CHECK_OUTDIALOG_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>

namespace Ui {
class Check_OutDialog;
}

class Check_OutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Check_OutDialog(QWidget *parent = 0);
    ~Check_OutDialog();

    void initWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_receipts_lineEdit_textEdited(const QString &arg1);

private:
    Ui::Check_OutDialog *ui;
    QSqlDatabase m_db;
    double sumMoney;
    void initCombox();
};

#endif // CHECK_OUTDIALOG_H
