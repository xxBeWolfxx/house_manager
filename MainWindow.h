#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <QFile>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "MenuForm.h"
#include "Arduino.h"
#include "Staff.h"
#include "TransferData.h"


class MenuForm;
class Staff;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent= nullptr);
    QString total_path;
    Arduino light_shed, chandelier, light_door;
    QSerialPort *controller;
    TransferData *transfer;
    QByteArray dataArduino;


    static const quint16 arduino_uno_vendor_id = 10755;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;



    void show_menu();
    void hide_menu();
    void window_closing();
    void window_opening();
    void SendingData(Arduino *object);
    bool CheckBoxMarking(Arduino object);
    void SavingBufor(Arduino object, QString name, TransferData *transfer);
    void Checkingbox();
    void ReceiveData();

    ~MainWindow();
public slots:
    void Slotbox(TransferData *bufor);
    void RefreshStaff();

private slots:

    void on_Button_light_shed_clicked();

    void on_Button_chandelier_clicked();

    void on_Button_light_door_clicked();

    void on_set_arduino_clicked();


    void on_actionOnly_staff_triggered();

signals:
    void BuforTransfer(TransferData *);

private:
    Ui::MainWindow *ui;
    MenuForm *options;
    Staff *staff;
    bool status_staff=0;
};

#endif // MAINWINDOW_H
