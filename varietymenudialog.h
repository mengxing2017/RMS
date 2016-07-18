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

private:
    Ui::VarietyMenuDialog *ui;
};

#endif // VARIETYMENUDIALOG_H
