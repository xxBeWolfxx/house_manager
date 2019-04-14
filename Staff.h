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
    int value_foto=0;
    Arduino *staff_object;
    TransferData *staff_transfer;

    void closeEvent(QCloseEvent *event);

signals:
    void SendInfo();

private slots:
    void on_pushButton_clicked();

public slots:
    void CatchInfo(TransferData *transfer);

private:
    Ui::Staff *ui;
};

#endif // STAFF_H
