#ifndef SIGNUP_H
#define SIGNUP_H
#include <QDialog>
#include<iostream>
#include <string>
#include<QtSql>

using namespace std;

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();
    void logInfo(string, string, string, string);

private slots:
    void on_pushButton_clicked();

private:
    Ui::SignUp *ui;


};

#endif // SIGNUP_H
