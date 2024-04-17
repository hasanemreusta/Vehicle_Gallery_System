/********************************************************************************
** Form generated from reading UI file 'cartype.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTYPE_H
#define UI_CARTYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CarType
{
public:
    QLabel *label;
    QPushButton *btnCar;
    QPushButton *btnMotor;

    void setupUi(QDialog *CarType)
    {
        if (CarType->objectName().isEmpty())
            CarType->setObjectName("CarType");
        CarType->resize(550, 364);
        label = new QLabel(CarType);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 20, 261, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        btnCar = new QPushButton(CarType);
        btnCar->setObjectName("btnCar");
        btnCar->setGeometry(QRect(50, 110, 161, 91));
        btnCar->setCheckable(true);
        btnCar->setChecked(false);
        btnMotor = new QPushButton(CarType);
        btnMotor->setObjectName("btnMotor");
        btnMotor->setGeometry(QRect(310, 110, 161, 91));
        btnMotor->setCheckable(false);
        btnMotor->setChecked(false);

        retranslateUi(CarType);

        QMetaObject::connectSlotsByName(CarType);
    } // setupUi

    void retranslateUi(QDialog *CarType)
    {
        CarType->setWindowTitle(QCoreApplication::translate("CarType", "Ta\305\237\304\261t Se\303\247im", nullptr));
        label->setText(QCoreApplication::translate("CarType", "\304\260\305\237lem \304\260stedi\304\237iniz Ta\305\237\304\261t Tipini Se\303\247iniz", nullptr));
        btnCar->setText(QCoreApplication::translate("CarType", "Araba", nullptr));
        btnMotor->setText(QCoreApplication::translate("CarType", "Motor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CarType: public Ui_CarType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTYPE_H
