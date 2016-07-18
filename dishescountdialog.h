#ifndef DISHESCOUNTDIALOG_H
#define DISHESCOUNTDIALOG_H

#include <QDialog>

namespace Ui {
class DishesCountDialog;
}

class DishesCountDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DishesCountDialog(QWidget *parent = 0);
    ~DishesCountDialog();

    QString returnCount();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DishesCountDialog *ui;
    QString countS;
};

#endif // DISHESCOUNTDIALOG_H
