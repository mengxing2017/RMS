#ifndef CHECK_OUTDIALOG_H
#define CHECK_OUTDIALOG_H

#include <QDialog>

namespace Ui {
class Check_OutDialog;
}

class Check_OutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit Check_OutDialog(QWidget *parent = 0);
    ~Check_OutDialog();

private:
    Ui::Check_OutDialog *ui;
};

#endif // CHECK_OUTDIALOG_H
