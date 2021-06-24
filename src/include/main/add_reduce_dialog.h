#ifndef ADD_REDUCE_DIALOG_H
#define ADD_REDUCE_DIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QStringList>

namespace Ui {
class Add_Reduce_Dialog;
}

class Add_Reduce_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Reduce_Dialog(QWidget *parent = 0);
    ~Add_Reduce_Dialog();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

    void on_addButton_clicked();

    void on_deleteButton_clicked();

//    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_activated(const QString &arg1);

private:
    Ui::Add_Reduce_Dialog *ui;
    int count;
    QSqlDatabase m_db;
    QString time;
    void initFoodTable();
    void initCombox();

    void initWindowFoodTable();
    void initWindowIsAddTable();

};

#endif // ADD_REDUCE_DIALOG_H
