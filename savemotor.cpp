#include "savemotor.h"
#include "ui_savemotor.h"
#include "bike.h"


SaveMotor::SaveMotor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SaveMotor)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(0);
}

SaveMotor::~SaveMotor()
{
    delete ui;
}


void SaveMotor::on_btnAdd_clicked()
{
    int insertRow=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(insertRow);
    int c=0;
    Bike bike;

    while (c<6) {

        bike.setBrand(ui->lineBrand->text());
        ui->tableWidget->setItem(insertRow,c, new QTableWidgetItem(bike.getBrand()));
        c++;

        bike.setModel(ui->lineModel->text());
        ui->tableWidget->setItem(insertRow,c,new QTableWidgetItem(bike.getBrand()));
        c++;

        bike.setYear(ui->lineModel->text());
        ui->tableWidget->setItem(insertRow,c,new QTableWidgetItem(bike.getYear()));
        c++;

        bike.sethpInfo(ui->lineHp->text());
        ui->tableWidget->setItem(insertRow,c,new QTableWidgetItem(bike.gethpInfo()));
        c++;

        bike.setColor(ui->comColor->currentText());
        ui->tableWidget->setItem(insertRow,c,new QTableWidgetItem(bike.getColor()));
        c++;

        bike.setCoolingType(ui->comCooler->currentText());
        ui->tableWidget->setItem(insertRow,c,new QTableWidgetItem(bike.getCoolingType()));
        c++;

        ui->lineBrand->clear();
        ui->lineHp->clear();
        ui->lineModel->clear();
        ui->lineYear->clear();
    }
}




void SaveMotor::on_btnUpdate_2_clicked()
{
    Vehicle *vehicle;
    Bike bike;
    vehicle=&bike;
    double x=vehicle->fuelConsumption(ui->lineKm->text().toDouble());
    QString str=QString::number(x);
    ui->lineResult->setText(str+" ₺");
}


void SaveMotor::on_btnDelete_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());

    ui->lineBrand->clear();
    ui->lineModel->clear();
    ui->lineHp->clear();
    ui->lineYear->clear();
}


void SaveMotor::on_tableWidget_clicked(const QModelIndex &index)
{
    int row = index.row();
    ui->lineBrand->setText(index.sibling(row, 0).data().toString());
    ui->lineModel->setText(index.sibling(row, 1).data().toString());
    ui->lineYear->setText(index.sibling(row, 2).data().toString());
    ui->lineHp->setText(index.sibling(row, 3).data().toString());
    ui->comColor->setCurrentText(index.sibling(row, 4).data().toString());
    ui->comCooler->setCurrentText(index.sibling(row, 5).data().toString());
}


void SaveMotor::on_btnUpdate_clicked()
{
    Bike bike;
    int c=0;
    int currentRow = ui ->tableWidget->currentRow();
    while(c<6){

        bike.setBrand(ui->lineBrand->text());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(bike.getBrand()));
        c++;

        bike.setModel(ui->lineModel->text());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(bike.getModel()));
        c++;

        bike.setYear(ui->lineYear->text());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(bike.getYear()));
        c++;

        bike.sethpInfo(ui->lineHp->text());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(bike.gethpInfo()));
        c++;

        bike.setColor(ui->comColor->currentText());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(bike.getColor()));
        c++;

        bike.setCoolingType(ui->comCooler->currentText());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(bike.getCoolingType()));
        c++;

        ui->lineBrand->clear();
        ui->lineModel->clear();
        ui->lineHp->clear();
        ui->lineYear->clear();
    }
}

