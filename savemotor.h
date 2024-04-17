
#pragma once
#include <QDialog>

namespace Ui {
class SaveMotor;
}

class SaveMotor : public QDialog
{
    Q_OBJECT

public:
    explicit SaveMotor(QWidget *parent = nullptr);
    ~SaveMotor();

private slots:
    void on_btnAdd_clicked();

    void on_btnAdd1_clicked();

    void on_btnUpdate_2_clicked();

    void on_btnDelete_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);

    void on_btnUpdate_clicked();

private:
    Ui::SaveMotor *ui;
};


