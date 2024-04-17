/********************************************************************************
** Form generated from reading UI file 'savemotor.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEMOTOR_H
#define UI_SAVEMOTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveMotor
{
public:
    QLineEdit *lineYear;
    QLabel *label_7;
    QLabel *label_3;
    QComboBox *comColor;
    QLineEdit *lineHp;
    QLineEdit *lineModel;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *lineBrand;
    QTableWidget *tableWidget;
    QLabel *label_8;
    QComboBox *comCooler;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QPushButton *btnUpdate;
    QGroupBox *groupBox;
    QPushButton *btnUpdate_2;
    QLineEdit *lineKm;
    QLineEdit *lineResult;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *SaveMotor)
    {
        if (SaveMotor->objectName().isEmpty())
            SaveMotor->setObjectName("SaveMotor");
        SaveMotor->resize(737, 473);
        lineYear = new QLineEdit(SaveMotor);
        lineYear->setObjectName("lineYear");
        lineYear->setGeometry(QRect(130, 130, 113, 22));
        lineYear->setInputMethodHints(Qt::ImhNone);
        label_7 = new QLabel(SaveMotor);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(330, 90, 41, 16));
        QFont font;
        font.setPointSize(11);
        label_7->setFont(font);
        label_3 = new QLabel(SaveMotor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 130, 49, 16));
        label_3->setFont(font);
        comColor = new QComboBox(SaveMotor);
        comColor->addItem(QString());
        comColor->addItem(QString());
        comColor->addItem(QString());
        comColor->addItem(QString());
        comColor->addItem(QString());
        comColor->setObjectName("comColor");
        comColor->setGeometry(QRect(380, 90, 111, 22));
        lineHp = new QLineEdit(SaveMotor);
        lineHp->setObjectName("lineHp");
        lineHp->setGeometry(QRect(380, 50, 113, 22));
        lineModel = new QLineEdit(SaveMotor);
        lineModel->setObjectName("lineModel");
        lineModel->setGeometry(QRect(130, 90, 113, 22));
        label = new QLabel(SaveMotor);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 71, 16));
        label->setFont(font);
        label_6 = new QLabel(SaveMotor);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(280, 50, 81, 20));
        label_6->setFont(font);
        label_2 = new QLabel(SaveMotor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 90, 61, 16));
        label_2->setFont(font);
        lineBrand = new QLineEdit(SaveMotor);
        lineBrand->setObjectName("lineBrand");
        lineBrand->setGeometry(QRect(130, 50, 113, 22));
        tableWidget = new QTableWidget(SaveMotor);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(20, 200, 821, 151));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        label_8 = new QLabel(SaveMotor);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 130, 101, 20));
        label_8->setFont(font);
        comCooler = new QComboBox(SaveMotor);
        comCooler->addItem(QString());
        comCooler->addItem(QString());
        comCooler->addItem(QString());
        comCooler->setObjectName("comCooler");
        comCooler->setGeometry(QRect(380, 130, 111, 22));
        btnAdd = new QPushButton(SaveMotor);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(30, 370, 91, 51));
        btnDelete = new QPushButton(SaveMotor);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(250, 370, 91, 51));
        btnUpdate = new QPushButton(SaveMotor);
        btnUpdate->setObjectName("btnUpdate");
        btnUpdate->setGeometry(QRect(460, 370, 91, 51));
        groupBox = new QGroupBox(SaveMotor);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(490, 50, 231, 131));
        btnUpdate_2 = new QPushButton(groupBox);
        btnUpdate_2->setObjectName("btnUpdate_2");
        btnUpdate_2->setGeometry(QRect(80, 50, 111, 31));
        lineKm = new QLineEdit(groupBox);
        lineKm->setObjectName("lineKm");
        lineKm->setGeometry(QRect(80, 20, 113, 22));
        lineResult = new QLineEdit(groupBox);
        lineResult->setObjectName("lineResult");
        lineResult->setGeometry(QRect(80, 90, 113, 22));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 20, 71, 20));
        label_9->setFont(font);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 90, 71, 20));
        label_10->setFont(font);

        retranslateUi(SaveMotor);

        QMetaObject::connectSlotsByName(SaveMotor);
    } // setupUi

    void retranslateUi(QDialog *SaveMotor)
    {
        SaveMotor->setWindowTitle(QCoreApplication::translate("SaveMotor", "Motor Kay\304\261t", nullptr));
        label_7->setText(QCoreApplication::translate("SaveMotor", "Renk", nullptr));
        label_3->setText(QCoreApplication::translate("SaveMotor", "Y\304\261l", nullptr));
        comColor->setItemText(0, QCoreApplication::translate("SaveMotor", "Beyaz", nullptr));
        comColor->setItemText(1, QCoreApplication::translate("SaveMotor", "Siyah", nullptr));
        comColor->setItemText(2, QCoreApplication::translate("SaveMotor", "K\304\261rm\304\261z\304\261", nullptr));
        comColor->setItemText(3, QCoreApplication::translate("SaveMotor", "Mavi", nullptr));
        comColor->setItemText(4, QCoreApplication::translate("SaveMotor", "Gri", nullptr));

        label->setText(QCoreApplication::translate("SaveMotor", "Marka", nullptr));
        label_6->setText(QCoreApplication::translate("SaveMotor", "Motor G\303\274c\303\274", nullptr));
        label_2->setText(QCoreApplication::translate("SaveMotor", "Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SaveMotor", "Marka", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SaveMotor", "Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SaveMotor", "Y\304\261l", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SaveMotor", "Motor G\303\274c\303\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SaveMotor", "Renk", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SaveMotor", "So\304\237utma Tipi", nullptr));
        label_8->setText(QCoreApplication::translate("SaveMotor", "So\304\237utma Tipi", nullptr));
        comCooler->setItemText(0, QCoreApplication::translate("SaveMotor", "Hava", nullptr));
        comCooler->setItemText(1, QCoreApplication::translate("SaveMotor", "Su", nullptr));
        comCooler->setItemText(2, QCoreApplication::translate("SaveMotor", "Ya\304\237", nullptr));

        btnAdd->setText(QCoreApplication::translate("SaveMotor", "Ekle", nullptr));
        btnDelete->setText(QCoreApplication::translate("SaveMotor", "Sil", nullptr));
        btnUpdate->setText(QCoreApplication::translate("SaveMotor", "G\303\274ncelle", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SaveMotor", "Yak\304\261t T\303\274ketimi", nullptr));
        btnUpdate_2->setText(QCoreApplication::translate("SaveMotor", "Hesapla", nullptr));
        label_9->setText(QCoreApplication::translate("SaveMotor", "Kilometre", nullptr));
        label_10->setText(QCoreApplication::translate("SaveMotor", "T\303\274ketim", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveMotor: public Ui_SaveMotor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEMOTOR_H
