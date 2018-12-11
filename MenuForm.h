#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QCoreApplication>
#include <QTimer>
#include "MainWindow.h"
#include "Arduino.h"
#include "Timer.h"


class MainWindow;

namespace Ui
{
class MenuForm;
}

class MenuForm : public QWidget
{
    Q_OBJECT

public:
    explicit MenuForm(QWidget *parent = 0);
    ~MenuForm();
    QString path;
    Arduino *object;
    Timer *timer;
    QTimer *counter;
    MainWindow *window;
    int tab_status=0;

    QString ReadingBufor(Arduino *object);
    void SetTimerList();
    void seting_ui_timer(Timer *timer);

signals:
    void Sending_Data();

private slots:

    void on_Button_save_quit_clicked();
    void on_timerlist_itemClicked(QListWidgetItem *item);
    void on_Button_on_clicked();
    void on_Button_off_clicked();
    void on_Timer_on_clicked();
    void on_Timer_off_clicked();
    void on_Button_set_clicked();
    void counterout(Arduino *object);

private:
    Ui::MenuForm *ui;
};

#endif // MENUFORM_H
