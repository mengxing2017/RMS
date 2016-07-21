#ifndef FOODINFO_DIALOG_H
#define FOODINFO_DIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

#include <string>

namespace Ui {
class FoodInfo_Dialog;
}

class FoodInfo_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit FoodInfo_Dialog(QWidget *parent = 0);
    ~FoodInfo_Dialog();

private slots:
    void on_deleteFood_Button_clicked();

    void on_addFood_Button_clicked();

private:
    Ui::FoodInfo_Dialog *ui;
    QSqlDatabase m_db;

    void initFood();
};

#endif // FOODINFO_DIALOG_H
