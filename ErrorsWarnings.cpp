#include "ErrorsWarnings.h"
#include <QDebug>

ErrorsWarnings::ErrorsWarnings()
{

}

ErrorsWarnings::~ErrorsWarnings()
{

}




ErrorConnection::ErrorConnection()
{

}
ErrorConnection::~ErrorConnection()
{

}

void ErrorConnection::PrintError(QWidget *obj, int mod)
{
  QMessageBox::information(obj,"UWAGA","Nie wykryto żadnego Arduino!");
}

WarningConnection::WarningConnection()
{

}
WarningConnection::~WarningConnection()
{

}
void WarningConnection::PrintError(QWidget *obj,int mod=0)
{

}
