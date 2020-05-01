#include "signup.h"
#include "ui_signup.h"
#include "QMessageBox"
#include <QPixmap>
#include "iostream"

#include "user.h"
#include "accountcurator.h"

SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->RLogo->width();
    int height = ui->RLogo->height();
    ui->RLogo->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));

    ui->Viewer->setChecked(true);
}

SignUp::~SignUp()
{
    delete ui;
}




void SignUp::on_pushButton_clicked()
{
    QString username = ui->Username->text();
    QString password = ui->Password->text();
    QString email = ui->Email->text();
    QString name = ui->Name->text();
    QString confP = ui->PasswordConf->text();
    QString type = "";

    if(ui->Viewer->isChecked())
        type = "viewer";
    if(ui->Curator->isChecked())
        type = "curator";

    cout << type.toStdString() << endl;

    if(password == confP)
    {
        if(username == "" || name == "" || email == "" || password == "")
        {
            QMessageBox::warning(this,"Message", "Empty Fields Exist", QMessageBox::Ok);
        }
        else
        {
            //save data here

            std::string u = username.toStdString();
            std::string p = password.toStdString();
            std::string n = name.toStdString();
            std::string e = email.toStdString();
            std::string t = type.toStdString();

            logInfo(u, p, n, e, t);
            User user(u,p,e,n,t);

            accountCurator x;
            x.setUser(user);


            close();
        }







    }
    else
    {
        QMessageBox::warning(this,"Message", "Passwords do not match", QMessageBox::Ok);
    }
}

//Puts user info into the SQL Database
void SignUp::logInfo(string user, string pass, string name, string email, string type)
{
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    //Creating query from input
    string s1 = "insert into userTable values('";
    s1.append(user);
    s1.append("', '");
    s1.append(pass);
    s1.append("', '");
    s1.append(name);
    s1.append("', '");
    s1.append(email);
    s1.append("', '");
    s1.append(type);
    s1.append("')");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
    query.exec(s2);
}

void SignUp::on_cancel_clicked()
{
    hide();
}
