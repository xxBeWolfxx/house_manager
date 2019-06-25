#include "Staff.h"
#include "ui_Staff.h"
#include <QMessageBox>


Staff::Staff(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Staff)
{
    staff_transfer = new TransferData;
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0); //setting of table
    ui->tabWidget->setTabEnabled(2,false);



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
void Staff::CatchInfo(TransferData *transfer) //show received data
{
   staff_transfer->ReceiveData(transfer);
   staff_transfer->TranscriptValue();
   ui->COM->setText(transfer->com_port);
   ui->ID->setText(transfer->arduino_id);

   ui->lcd_temp_1->display(transfer->temp1);
   ui->temp_bar1->setValue(transfer->temp1);

   ui->lcd_bright_1->display(transfer->foto1);
   ui->bright_bar1->setValue(transfer->foto1);

   ui->ID->setText(transfer->arduino_id);
   ui->COM->setText(transfer->com_port);

   switch (transfer->statusObject)
   {
    case 1:
   {
       ui->obj1->setChecked(true);
       ui->obj1->setDisabled(true);

       break;
   }
   case 2:
   {
       ui->obj2->setChecked(true);
       ui->obj2->setDisabled(true);

       break;
   }
   case 3:
   {
       ui->obj3->setChecked(true);
       ui->obj3->setDisabled(true);

       break;
   }
    case 12:
   {
       ui->obj1->setChecked(true);
       ui->obj1->setDisabled(true);

       ui->obj2->setChecked(true);
       ui->obj2->setDisabled(true);


       break;
   }
   case 13:
   {
       ui->obj1->setChecked(true);
       ui->obj1->setDisabled(true);

       ui->obj3->setChecked(true);
       ui->obj3->setDisabled(true);

       break;
   }
   case 23:
   {
       ui->obj2->setChecked(true);
       ui->obj2->setDisabled(true);

       ui->obj3->setChecked(true);
       ui->obj3->setDisabled(true);

       break;
   }
   case 123:
   {

       ui->obj1->setChecked(true);
       ui->obj2->setChecked(true);
       ui->obj3->setChecked(true);
       ui->obj1->setDisabled(true);
       ui->obj2->setDisabled(true);
       ui->obj3->setDisabled(true);

       break;
   }
   }





}
