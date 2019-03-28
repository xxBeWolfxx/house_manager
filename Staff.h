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
    int value_foto;
    Arduino *staff_object;


private:
    Ui::Staff *ui;
};

#endif // STAFF_H
