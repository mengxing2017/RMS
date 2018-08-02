#ifndef STOCKQQUERY_DIALOG_H
#define STOCKQQUERY_DIALOG_H

#include <QDialog>

namespace Ui {
class StockqQuery_Dialog;
}

class StockqQuery_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit StockqQuery_Dialog(QWidget *parent = 0);
    ~StockqQuery_Dialog();

private slots:
    void on_queryButton_clicked();

    void on_quit_Button_clicked();

private:
    Ui::StockqQuery_Dialog *ui;
};

#endif // STOCKQQUERY_DIALOG_H
