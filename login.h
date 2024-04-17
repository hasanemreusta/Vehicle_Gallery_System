#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_BtnLogin_clicked();

    void on_BtnCancel_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
