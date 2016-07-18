#include "varietymenudialog.h"
#include "ui_varietymenudialog.h"

VarietyMenuDialog::VarietyMenuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VarietyMenuDialog)
{
    ui->setupUi(this);
}

VarietyMenuDialog::~VarietyMenuDialog()
{
    delete ui;
}
