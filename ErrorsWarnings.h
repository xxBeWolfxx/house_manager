#ifndef ERRORSWARNINGS_H
#define ERRORSWARNINGS_H
#include <QString>
#include <QMessageBox>

class ErrorConnection;
class WarningConnection;
class ErrorsWarnings
{

public:
    int number_warnings = 0;
    QString errorname;
    ErrorsWarnings();
    virtual ~ErrorsWarnings();
    virtual void PrintError(QWidget *obj,int mod=0)=0;
};

class ErrorConnection : public ErrorsWarnings
{
public:
    ErrorConnection();
    ~ErrorConnection();
    void PrintError(QWidget *obj,int mod=0);


};
class WarningConnection : public ErrorsWarnings
{
public:
    WarningConnection();
    ~WarningConnection();
    void PrintError(QWidget *obj,int mod=0);


};

#endif // ERRORSWARNINGS_H
