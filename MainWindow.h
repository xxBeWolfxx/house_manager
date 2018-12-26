#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <QFile>
#include <QSerialPort>
#include <QSerialPortInfo>
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
    Arduino light_shed, chandelier, light_door, sending;
    QSerialPort *controller;
    static const quint16 arduino_uno_vendor_id = 10755;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;



    void show_menu();
    void hide_menu();
    void window_closing();
    void window_opening();
    bool CheckBoxMarking(Arduino object);
    void SavingBufor(Arduino object, QString name);
    void Checkingbox();

    ~MainWindow();
public slots:
   void Slotbox();

private slots:

    void on_Button_light_shed_clicked();

    void on_Button_chandelier_clicked();

    void on_Button_light_door_clicked();

    void on_set_arduino_clicked();

private:
    Ui::MainWindow *ui;
    MenuForm *options;
};

#endif // MAINWINDOW_H
