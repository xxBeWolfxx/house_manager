#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QCoreApplication>
#include <QTimer>
#include <QDateTime>
#include "MainWindow.h"
#include "Arduino.h"
#include "Timer.h"
#include "TransferData.h"


class MainWindow;

namespace Ui
{
class MenuForm;
}

class MenuForm : public QWidget
{
    Q_OBJECT

public:
    explicit MenuForm(QWidget *parent = nullptr);
    ~MenuForm();
    QString path;
    QString name;
    Arduino *object;
    Arduino h_timer;
    Timer *timer;
    QTimer *counter;
    QTime time;
    MainWindow *window;
    TransferData *transfer;


    int tab_status=0;


    void SavingBufor(Arduino *object);
    void SetTimerList();
    void seting_ui_timer(Timer *timer);

signals:
    void Sending_Data(TransferData *);

public slots:
    void CatchBufor(TransferData *bufor);

private slots:

    void on_Button_save_quit_clicked();
    void on_timerlist_itemClicked(QListWidgetItem *item);
    void on_Button_on_clicked();
    void on_Button_off_clicked();
    void on_Timer_on_clicked();
    void on_Timer_off_clicked();
    void on_Button_set_clicked();

    void counterout();
    void stop_timer();

private:
    Ui::MenuForm *ui;
};

#endif // MENUFORM_H
