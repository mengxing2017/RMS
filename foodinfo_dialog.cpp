#include "foodinfo_dialog.h"
#include "ui_foodinfo_dialog.h"

FoodInfo_Dialog::FoodInfo_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FoodInfo_Dialog)
{
    ui->setupUi(this);
    //数据库初始化并连接
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("data.db");
    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList list;
    list<<"菜名"<<"菜价";
    ui->tableWidget->setHorizontalHeaderLabels(list);
    ui->tableWidget->setColumnWidth(0,150);
    ui->tableWidget->setColumnWidth(1,100);

    QFont font=ui->tableWidget->horizontalHeader()->font();
    font.setBold(true);
    ui->tableWidget->horizontalHeader()->setFont(font);

    QHeaderView *header=ui->tableWidget->verticalHeader();
    header->setHidden(true);

    ui->tableWidget->setStyleSheet("selection-background-color:lightblue;");
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    initFood();

}

FoodInfo_Dialog::~FoodInfo_Dialog()
{
    delete ui;
}

void FoodInfo_Dialog::on_deleteFood_Button_clicked()
{

}

void FoodInfo_Dialog::on_addFood_Button_clicked()
{




    ui->foodName_lineEdit->clear();
    ui->foodPrice_lineEdit->clear();
}

void FoodInfo_Dialog::initFood()
{
    QSqlQuery query(m_db);
    query.exec("select *from FoodInfo");
    query.last();
    int row=query.value(0).toInt();
    qDebug()<<row;
    ui->tableWidget->setRowCount(row);
    query.first();
    query.previous();
    int i=0;
    while(query.next())
    {
        QString foodName=query.value(1).toString();
        qDebug()<<query.value(2).toDouble();
        QString foodPrice=query.value(2).toString();
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(foodName));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(foodPrice));
        i++;
    }
}
