#include "Staff.h"
#include "ui_Staff.h"

Staff::Staff(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Staff)
{

    ui->setupUi(this);
}

Staff::~Staff()
{
    delete ui;
}
