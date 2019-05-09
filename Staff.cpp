#include "Staff.h"
#include "ui_Staff.h"


Staff::Staff(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Staff)
{
    staff_object = new Arduino;
    staff_transfer = new TransferData;
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(2,false);

    staff_object = new Arduino;
}

Staff::~Staff()
{    
    delete ui;
}

void Staff::on_pushButton_clicked()
{
    this->close();
}
void Staff::closeEvent(QCloseEvent *event)
{
    emit SendInfo();
}
void Staff::CatchInfo(TransferData *transfer)
{
   staff_transfer->ReceiveData(transfer);
   staff_transfer->TranscriptValue();
   ui->COM->setText(transfer->com_port);
   ui->ID->setText(transfer->arduino_id);

   ui->lcd_temp_1->display(transfer->temp1);
   ui->temp_bar1->setValue(transfer->temp1);

   ui->lcd_bright_1->display(transfer->foto1);
   ui->bright_bar1->setValue(transfer->foto1);





}
