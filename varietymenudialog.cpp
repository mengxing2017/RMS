#include "varietymenudialog.h"
#include "ui_varietymenudialog.h"

VarietyMenuDialog::VarietyMenuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VarietyMenuDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("菜品信息管理");
}

VarietyMenuDialog::~VarietyMenuDialog()
{
    delete ui;
}

void VarietyMenuDialog::on_addFoodNameButton_clicked()
{

}

void VarietyMenuDialog::on_modification_Button_clicked()
{

}

void VarietyMenuDialog::on_delete_Button_clicked()
{

}

void VarietyMenuDialog::on_quit_Button_clicked()
{

}
