/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineName;
    QLineEdit *linePassword;
    QLabel *label;
    QLabel *label_2;
    QPushButton *BtnLogin;
    QPushButton *BtnCancel;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(739, 402);
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 681, 371));
        lineName = new QLineEdit(groupBox);
        lineName->setObjectName("lineName");
        lineName->setGeometry(QRect(220, 97, 311, 51));
        linePassword = new QLineEdit(groupBox);
        linePassword->setObjectName("linePassword");
        linePassword->setGeometry(QRect(220, 170, 311, 51));
        linePassword->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 100, 121, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 180, 81, 31));
        label_2->setFont(font);
        BtnLogin = new QPushButton(groupBox);
        BtnLogin->setObjectName("BtnLogin");
        BtnLogin->setGeometry(QRect(220, 240, 111, 41));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        BtnLogin->setFont(font1);
        BtnCancel = new QPushButton(groupBox);
        BtnCancel->setObjectName("BtnCancel");
        BtnCancel->setGeometry(QRect(370, 240, 111, 41));
        BtnCancel->setFont(font1);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Giri\305\237", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Login", "Giri\305\237 Sayfas\304\261", nullptr));
        label->setText(QCoreApplication::translate("Login", "\304\260sim", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\305\236ifre", nullptr));
        BtnLogin->setText(QCoreApplication::translate("Login", "Giri\305\237", nullptr));
        BtnCancel->setText(QCoreApplication::translate("Login", "\304\260ptal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
