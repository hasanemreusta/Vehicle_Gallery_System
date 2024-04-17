#include "login.h"
#include "ui_login.h"
#include "SaveCar.h"
#include "cartype.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_BtnLogin_clicked()
{
    QString name = ui->lineName->text();
    QString password = ui->linePassword->text();

    if (name == "admin"  && password == "admin"){
        QMessageBox::information(this,"Giriş", "Giriş başarılı!");
        this->hide();
        CarType *carType=new CarType();
        carType->show();

    }
    else{
        QMessageBox::warning(this,"Giriş", "Hatalı giriş. Tekrar deneyiniz.");
    }

}


void Login::on_BtnCancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Giris", "Çıkmak istediğinize emin misiniz?",QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes){
        QApplication::quit();
    }
}

