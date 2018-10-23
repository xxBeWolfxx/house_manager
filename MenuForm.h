#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QListWidgetItem>
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

    QString ReadingBufor(Arduino *object);
    void SetTimerList();

private slots:
    void on_Button_save_quit_clicked();

    void on_timerlist_itemClicked(QListWidgetItem *item);

private:
    Ui::MenuForm *ui;
};

#endif // MENUFORM_H
