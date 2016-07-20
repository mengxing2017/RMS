#ifndef SELECTSEATDIALOG_H
#define SELECTSEATDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include <QSqlDatabase>
#include <QSqlQuery>


namespace Ui {
class SelectSeatDialog;
}

class SelectSeatDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SelectSeatDialog(QWidget *parent = 0);
    ~SelectSeatDialog();


private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();
    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::SelectSeatDialog *ui;
    QString idData;
    QString flagId;
    QSqlDatabase m_db;

    void deskInit();
};

#endif // SELECTSEATDIALOG_H
