#ifndef SAVECAR_H
#define SAVECAR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainMenu;
}
QT_END_NAMESPACE

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_btnAdd_clicked();

    void on_btnDelete_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);



    void on_btnUpdate_clicked();

    void on_btnCal_clicked();

private:
    Ui::MainMenu *ui;
};
#endif // SAVECAR_H
