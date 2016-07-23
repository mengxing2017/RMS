#include "check_outdialog.h"
#include "ui_check_outdialog.h"
#include <QMessageBox>

Check_OutDialog::Check_OutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Check_OutDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("结帐");

    m_db= QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("data.db");
    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
    //消费明细表
   sumMoney=0;
    initWindow();
    initCombox();
}

Check_OutDialog::~Check_OutDialog()
{
    delete ui;
}

void Check_OutDialog::initWindow()
{

    QBrush myBrush;
    QPalette palette;
    myBrush = QBrush(Qt::blue,Qt::DiagCrossPattern);
    palette.setBrush(QPalette::Text,  myBrush);
    ui->receivable_lineEdit->setEnabled(false);
    ui->receivable_lineEdit->setPalette(palette);

    myBrush = QBrush(Qt::red,Qt::DiagCrossPattern);
    palette.setBrush(QPalette::Text,  myBrush);
    ui->change_lineEdit->setEnabled(false);
    ui->change_lineEdit->setPalette(palette);

//    ui->receipts_lineEdit->setInputMask("9");
    ui->receipts_lineEdit->setValidator(new QDoubleValidator(this));

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->setColumnCount(3);
    QStringList list;
    list<<"菜名"<<"数量"<<"消费金额(元)";
    ui->tableWidget->setHorizontalHeaderLabels(list);
    ui->tableWidget->setColumnWidth(0,110);
    ui->tableWidget->setColumnWidth(1,110);
    ui->tableWidget->setColumnWidth(0,110);
    //设置列名为加粗
    QFont font=ui->tableWidget->horizontalHeader()->font();
    font.setBold(true);
    ui->tableWidget->horizontalHeader()->setFont(font);
    //去掉第一列标号
    QHeaderView *header=ui->tableWidget->verticalHeader();
    header->setHidden(true);
    //设置选中背景色
    ui->tableWidget->setStyleSheet("selection-background-color:lightblue;");
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);//设置为可以选中单个
    ui->tableWidget->setRowCount(50);
}

void Check_OutDialog::on_pushButton_clicked()
{
    QString tableid=ui->comboBox->currentText();
    QSqlQuery query(m_db);
    query.exec("update TableInfo set isuse='空闲'    where  tableid='"+tableid+"'");
    QMessageBox::information(this,"温馨提示","已成功收款!再见!");
    this->close();
}

void Check_OutDialog::on_pushButton_2_clicked()
{
    this->close();
}

void Check_OutDialog::on_comboBox_activated(const QString &arg1)
{
    //更改数据
    ui->receipts_lineEdit->clear();
    ui->receivable_lineEdit->clear();
    ui->change_lineEdit->clear();
    QSqlQuery query(m_db);
    QStringList item;
    query.exec("select *from TableInfo where  tableid='"+arg1+"'");
    qDebug()<<query.exec();
    query.first();
    QString time=query.value(3).toString();
    query.exec("select *from  billinfo where  tableid='"+arg1+"' and datetime='"+time+"'");
    qDebug()<<query.exec();
    item.append("");
    int i=0;
    sumMoney=0;
    while(query.next())
    {
        QString foodName=query.value(2).toString();
        bool ok;
        int number=  query.value(3).toInt(&ok);
        qDebug()<<number;
        double price=query.value(4).toDouble(&ok);
        qDebug()<<price;
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(foodName));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(number)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(price)));
        i++;
        sumMoney+=number*price;
    }
    ui->receivable_lineEdit->setText(QString::number(sumMoney));

}

void Check_OutDialog::initCombox()
{

    QSqlQuery query(m_db);
    QStringList item;

    query.exec("select *from TableInfo where  isuse='有人'");
    item.append("");
    while(query.next())
    {
        if(query.value(2).toString()=="有人")
        {
            QString foodName=query.value(1).toString();
            item.append(foodName);
        }


    }
    ui->comboBox->addItems(item);
}

void Check_OutDialog::on_receipts_lineEdit_textEdited(const QString &arg1)
{
    double receipts= arg1.toDouble();
    double chang=receipts-sumMoney;
    ui->change_lineEdit->setText(QString::number(chang));
}
