#include "check_outdialog.h"
#include "ui_check_outdialog.h"

Check_OutDialog::Check_OutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Check_OutDialog)
{
    ui->setupUi(this);
}

Check_OutDialog::~Check_OutDialog()
{
    delete ui;
}
