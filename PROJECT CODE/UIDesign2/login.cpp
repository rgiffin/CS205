#include "login.h"
#include "ui_login.h"
#include "QMessageBox"
#include <QPixmap>

using namespace std;


Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logo->width();
    int height = ui->logo->height();
    ui->logo->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_2_clicked()
{
    //Sign up button clicked
      su = new SignUp(this);
      su->show();



}

void Login::on_pushButton_clicked()
{
    //login button clicked

    QString username = ui->textUsername->text();
    QString password = ui->textPassword->text();

    string use = username.toStdString();
    string pas = password.toStdString();

    bool check = checkUser(use, pas);


    if(username == "test" && password == "test")
    {
        //QMessageBox::information(this,"Message", "Login is correct", QMessageBox::Ok);
        ui->statusbar->showMessage("Username and Password are correct", 5000);
        hide();
        mu = new MuseumMain(this);
        mu->show();
    }
    else
    {
        //QMessageBox::warning(this,"Message", "Login failed", QMessageBox::Ok);
        ui->statusbar->showMessage("Username and Password are not correct");
    }


}

//Returns True or False whether or not account is found
bool Login::checkUser(string user, string pass)
{
    int b;
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    //Creates SQL Query
    string s1 = "SELECT name FROM userTable WHERE user = ";
    s1.append("'");
    s1.append(user);
    s1.append("'");
    s1.append(" AND pass = '");
    s1.append(pass);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    cout << s2 << endl;
    QSqlQuery query;

    //Checks if code can be run, then checks if it comes up with a match
    if(!query.exec(s2))
    {
        cout << "DATABASE MALFUNCTION";
    }
    else
    {
        if(query.next())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
