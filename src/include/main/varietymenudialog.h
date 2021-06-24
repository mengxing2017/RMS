#ifndef VARIETYMENUDIALOG_H
#define VARIETYMENUDIALOG_H

#include <QDialog>

namespace Ui {
class VarietyMenuDialog;
}

class VarietyMenuDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VarietyMenuDialog(QWidget *parent = 0);
    ~VarietyMenuDialog();

private slots:
    void on_addFoodNameButton_clicked();

    void on_modification_Button_clicked();

    void on_delete_Button_clicked();

    void on_quit_Button_clicked();

private:
    Ui::VarietyMenuDialog *ui;
};

#endif // VARIETYMENUDIALOG_H
