#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <QFile>
#include "MenuForm.h"
#include "Arduino.h"


class MenuForm;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QString total_path;
    Arduino light_shed, chandelier, light_door;


    void show_menu();
    void hide_menu();
    bool CheckBoxMarking(Arduino object);
    void SavingBufor(Arduino object, QString name);
    void Checkingbox();

    ~MainWindow();

private slots:
    void on_Button_light_shed_clicked();

    void on_Button_chandelier_clicked();

    void on_Button_light_door_clicked();

private:
    Ui::MainWindow *ui;
    MenuForm *options;
};

#endif // MAINWINDOW_H
