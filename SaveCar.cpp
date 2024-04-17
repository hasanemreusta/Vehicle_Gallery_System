#include "SaveCar.h"
#include "car.h"
#include "ui_cartype.h"
#include "ui_SaveCar.h"


MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(0);
}

MainMenu::~MainMenu()
{
    delete ui;
}



void MainMenu::on_btnAdd_clicked()
{
    int insertRow=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(insertRow);
    int c=0;
    Car car;

    while(c<7){
        car.setBrand(ui->lineBrand->text());
        ui->tableWidget->setItem(insertRow,c, new QTableWidgetItem(car.getBrand()));
        c++;

        car.setModel(ui->lineModel->text());
        ui->tableWidget->setItem(insertRow,c, new QTableWidgetItem(car.getModel()));
        c++;

        car.setYear(ui->lineYear->text());
        ui->tableWidget->setItem(insertRow,c, new QTableWidgetItem(car.getYear()));
        c++;

        car.setGearType(ui->comGearType->currentText());
        ui->tableWidget->setItem(insertRow,c, new QTableWidgetItem(car.getGearType()));
        c++;

        car.setFuelType(ui->comFuelType->currentText());
        ui->tableWidget->setItem(insertRow,c, new QTableWidgetItem(car.getFuelType()));
        c++;

        car.sethpInfo(ui->lineHp->text());
        ui->tableWidget->setItem(insertRow,c, new QTableWidgetItem(car.gethpInfo()));
        c++;

        car.setColor(ui->comColor->currentText());
        ui->tableWidget->setItem(insertRow,c, new QTableWidgetItem(car.getColor()));
        c++;

        ui->lineBrand->clear();
        ui->lineModel->clear();
        ui->lineHp->clear();
        ui->lineYear->clear();
        }

}



void MainMenu::on_btnDelete_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());

    ui->lineBrand->clear();
    ui->lineModel->clear();
    ui->lineHp->clear();
    ui->lineYear->clear();
}


void MainMenu::on_tableWidget_clicked(const QModelIndex &index)
{
    int row = index.row();
    ui->lineBrand->setText(index.sibling(row, 0).data().toString());
    ui->lineModel->setText(index.sibling(row, 1).data().toString());
    ui->lineYear->setText(index.sibling(row, 2).data().toString());
    ui->comGearType->setCurrentText(index.sibling(row, 3).data().toString());
    ui->comFuelType->setCurrentText(index.sibling(row, 4).data().toString());
    ui->lineHp->setText(index.sibling(row, 5).data().toString());
    ui->comColor->setCurrentText(index.sibling(row, 6).data().toString());
}


void MainMenu::on_btnUpdate_clicked()
{
    Car car;
    int c=0;
    int currentRow = ui ->tableWidget->currentRow();
    while(c<7){
        c=0;
        car.setBrand(ui->lineBrand->text());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(car.getBrand()));
        c++;

        car.setModel(ui->lineModel->text());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(car.getModel()));
        c++;

        car.setYear(ui->lineYear->text());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(car.getYear()));
        c++;

        car.setGearType(ui->comGearType->currentText());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(car.getGearType()));
        c++;

        car.setFuelType(ui->comFuelType->currentText());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(car.getFuelType()));
        c++;

        car.sethpInfo(ui->lineHp->text());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(car.gethpInfo()));
        c++;

        car.setColor(ui->comColor->currentText());
        ui->tableWidget->setItem(currentRow,c, new QTableWidgetItem(car.getColor()));
        c++;

        ui->lineBrand->clear();
        ui->lineModel->clear();
        ui->lineHp->clear();
        ui->lineYear->clear();
    }
}



void MainMenu::on_btnCal_clicked()
{
    Vehicle *vehicle;
    Car car;
    vehicle=&car;
    double x=vehicle->fuelConsumption(ui->lineKm->text().toDouble());
    QString str=QString::number(x);
    ui->lineResult->setText(str+" ₺");
}

