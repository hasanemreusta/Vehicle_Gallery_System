/********************************************************************************
** Form generated from reading UI file 'SaveCar.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVECAR_H
#define UI_SAVECAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineBrand;
    QLineEdit *lineModel;
    QLineEdit *lineYear;
    QLabel *label_6;
    QLineEdit *lineHp;
    QLabel *label_7;
    QTableWidget *tableWidget;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QPushButton *btnUpdate;
    QComboBox *comColor;
    QComboBox *comGearType;
    QComboBox *comFuelType;
    QGroupBox *groupFuelCons;
    QLineEdit *lineKm;
    QPushButton *btnCal;
    QLineEdit *lineResult;
    QLabel *label_8;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(822, 600);
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 71, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 70, 61, 16));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 110, 49, 16));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 160, 49, 16));
        label_4->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 210, 61, 16));
        label_5->setFont(font);
        lineBrand = new QLineEdit(centralwidget);
        lineBrand->setObjectName("lineBrand");
        lineBrand->setGeometry(QRect(180, 30, 113, 22));
        lineModel = new QLineEdit(centralwidget);
        lineModel->setObjectName("lineModel");
        lineModel->setGeometry(QRect(180, 70, 113, 22));
        lineYear = new QLineEdit(centralwidget);
        lineYear->setObjectName("lineYear");
        lineYear->setGeometry(QRect(180, 110, 113, 22));
        lineYear->setInputMethodHints(Qt::ImhNone);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 30, 61, 16));
        label_6->setFont(font);
        lineHp = new QLineEdit(centralwidget);
        lineHp->setObjectName("lineHp");
        lineHp->setGeometry(QRect(430, 30, 113, 22));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(380, 70, 41, 16));
        label_7->setFont(font);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 290, 731, 192));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(60, 490, 101, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../free-green-add-button-icon-12023-thumb.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon);
        btnAdd->setIconSize(QSize(25, 25));
        btnDelete = new QPushButton(centralwidget);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(300, 490, 101, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../delete-icon-close-symbol-vector-no-sign-cancel-symbol-wrong-reject-illustration-delete-icon-close-symbol-vector-no-sign-cancel-131584727.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        btnDelete->setIcon(icon1);
        btnDelete->setIconSize(QSize(25, 25));
        btnDelete->setAutoRepeat(false);
        btnDelete->setAutoRepeatDelay(398);
        btnDelete->setAutoRepeatInterval(200);
        btnUpdate = new QPushButton(centralwidget);
        btnUpdate->setObjectName("btnUpdate");
        btnUpdate->setGeometry(QRect(540, 490, 101, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../50787717-update-icon-flat-design-style-eps-10.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        btnUpdate->setIcon(icon2);
        btnUpdate->setIconSize(QSize(25, 25));
        comColor = new QComboBox(centralwidget);
        comColor->addItem(QString());
        comColor->addItem(QString());
        comColor->addItem(QString());
        comColor->addItem(QString());
        comColor->addItem(QString());
        comColor->setObjectName("comColor");
        comColor->setGeometry(QRect(430, 70, 111, 22));
        comGearType = new QComboBox(centralwidget);
        comGearType->addItem(QString());
        comGearType->addItem(QString());
        comGearType->addItem(QString());
        comGearType->setObjectName("comGearType");
        comGearType->setGeometry(QRect(180, 160, 111, 22));
        comFuelType = new QComboBox(centralwidget);
        comFuelType->addItem(QString());
        comFuelType->addItem(QString());
        comFuelType->addItem(QString());
        comFuelType->addItem(QString());
        comFuelType->setObjectName("comFuelType");
        comFuelType->setGeometry(QRect(180, 210, 111, 22));
        groupFuelCons = new QGroupBox(centralwidget);
        groupFuelCons->setObjectName("groupFuelCons");
        groupFuelCons->setGeometry(QRect(380, 120, 311, 141));
        lineKm = new QLineEdit(groupFuelCons);
        lineKm->setObjectName("lineKm");
        lineKm->setGeometry(QRect(110, 30, 113, 22));
        btnCal = new QPushButton(groupFuelCons);
        btnCal->setObjectName("btnCal");
        btnCal->setGeometry(QRect(110, 60, 111, 31));
        btnCal->setIconSize(QSize(25, 25));
        btnCal->setAutoRepeat(false);
        btnCal->setAutoRepeatDelay(398);
        btnCal->setAutoRepeatInterval(200);
        lineResult = new QLineEdit(groupFuelCons);
        lineResult->setObjectName("lineResult");
        lineResult->setGeometry(QRect(110, 100, 113, 22));
        label_8 = new QLabel(groupFuelCons);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 30, 71, 16));
        label_8->setFont(font);
        label_9 = new QLabel(groupFuelCons);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 100, 71, 16));
        label_9->setFont(font);
        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 822, 22));
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName("statusbar");
        MainMenu->setStatusBar(statusbar);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "Araba Kay\304\261t", nullptr));
        label->setText(QCoreApplication::translate("MainMenu", "Marka", nullptr));
        label_2->setText(QCoreApplication::translate("MainMenu", "Model", nullptr));
        label_3->setText(QCoreApplication::translate("MainMenu", "Y\304\261l", nullptr));
        label_4->setText(QCoreApplication::translate("MainMenu", "Vites", nullptr));
        label_5->setText(QCoreApplication::translate("MainMenu", "Yak\304\261t Tipi", nullptr));
        label_6->setText(QCoreApplication::translate("MainMenu", "Motor", nullptr));
        label_7->setText(QCoreApplication::translate("MainMenu", "Renk", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainMenu", "Marka", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainMenu", "Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainMenu", "Y\304\261l", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainMenu", "Vites Tipi", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainMenu", "Yak\304\261t Tipi", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainMenu", "Motor G\303\274c\303\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainMenu", "Renk", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainMenu", "Ekle", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainMenu", "Sil", nullptr));
        btnUpdate->setText(QCoreApplication::translate("MainMenu", "G\303\274ncelle", nullptr));
        comColor->setItemText(0, QCoreApplication::translate("MainMenu", "Beyaz", nullptr));
        comColor->setItemText(1, QCoreApplication::translate("MainMenu", "Siyah", nullptr));
        comColor->setItemText(2, QCoreApplication::translate("MainMenu", "K\304\261rm\304\261z\304\261", nullptr));
        comColor->setItemText(3, QCoreApplication::translate("MainMenu", "Mavi", nullptr));
        comColor->setItemText(4, QCoreApplication::translate("MainMenu", "Gri", nullptr));

        comGearType->setItemText(0, QCoreApplication::translate("MainMenu", "Otomatik", nullptr));
        comGearType->setItemText(1, QCoreApplication::translate("MainMenu", "Manuel", nullptr));
        comGearType->setItemText(2, QCoreApplication::translate("MainMenu", "Yar\304\261 Otomatik", nullptr));

        comFuelType->setItemText(0, QCoreApplication::translate("MainMenu", "Benzin", nullptr));
        comFuelType->setItemText(1, QCoreApplication::translate("MainMenu", "Gaz", nullptr));
        comFuelType->setItemText(2, QCoreApplication::translate("MainMenu", "Dizel", nullptr));
        comFuelType->setItemText(3, QCoreApplication::translate("MainMenu", "Hybrid", nullptr));

        groupFuelCons->setTitle(QCoreApplication::translate("MainMenu", "Yak\304\261t T\303\274ketimi Hesaplama", nullptr));
        btnCal->setText(QCoreApplication::translate("MainMenu", "Hesapla", nullptr));
        label_8->setText(QCoreApplication::translate("MainMenu", "Kilometre", nullptr));
        label_9->setText(QCoreApplication::translate("MainMenu", "T\303\274ketim", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVECAR_H
