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
    int row=ui->tableWidget->currentIndex().row();
    QAbstractItemModel *model = ui->tableWidget->model();
    QModelIndex indexfood=model->index(row,0);
    model->data(indexfood).toString();
    QSqlQuery query(m_db);
//    char *foodname;
//    QByteArray tempfoodname=model->data(indexfood).toString().toLatin1();
//    foodname=tempfoodname.data();
    query.prepare("delete from FoodInfo where FoodName ='"+model->data(indexfood).toString()+"'");
    if(query.exec())
        qDebug()<<"test delete";
    initFood();
}

void FoodInfo_Dialog::on_addFood_Button_clicked()
{
    //插入菜品
    QString foodName=ui->foodName_lineEdit->text();
    QString foodPrice=ui->foodPrice_lineEdit->text();
    if(""!=foodName&&""!=foodPrice)
    {
        QSqlQuery query(m_db);
        query.prepare("INSERT INTO FoodInfo (FoodName,FoodPrice)"
                      "VALUES (:foodname, :price)");
        query.bindValue(":foodname", foodName);
        query.bindValue(":price",foodPrice);
        if(query.exec()) qDebug()<<"数据库打开";
        initFood();
    }
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
        QString foodPrice=query.value(2).toString();
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(foodName));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(foodPrice));
        i++;
    }
}
