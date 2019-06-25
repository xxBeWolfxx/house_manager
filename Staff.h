#ifndef STAFF_H
#define STAFF_H


#include <QWidget>
#include "Arduino.h"
#include "TransferData.h"



class MainWindow;

namespace Ui {
class Staff;
}

class Staff : public QWidget
{
    Q_OBJECT

public:
    explicit Staff(QWidget *parent = nullptr);
    ~Staff();

    TransferData *staff_transfer; //bufor of data
    void closeEvent(QCloseEvent *event);

signals:
    void SendInfo(); //to send info to MainWindow

private slots:
    void on_pushButton_clicked();

public slots:
    void CatchInfo(TransferData *transfer); //to receive data from MainWindow

private:
    Ui::Staff *ui;
};

#endif // STAFF_H
