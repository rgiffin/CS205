#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "museummain.h"
#include "signup.h"
#include<iostream>
#include<QtSql>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();
    bool checkUser(string, string);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();


private:
    Ui::Login *ui;
    MuseumMain *mu;
    SignUp *su;
};
#endif // LOGIN_H
