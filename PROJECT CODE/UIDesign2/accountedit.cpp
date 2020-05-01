#include "accountedit.h"
#include "ui_accountedit.h"
#include "QMessageBox"
#include "iostream"
#include "user.h"


AccountEdit::AccountEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountEdit)
{
    cout << username;
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

AccountEdit::~AccountEdit()
{
    delete ui;
}


//save button pressed
void AccountEdit::on_pushButton_clicked()
{
    QString username2 = ui->Username->text();
    QString password = ui->Password->text();
    QString email = ui->Email->text();
    QString name = ui->Name->text();
    QString confP = ui->PasswordConf->text();
    QString type = "";


    if(password == confP)
    {
        //save data here

        std::string u = username2.toStdString();
        std::string p = password.toStdString();
        std::string n = name.toStdString();
        std::string e = email.toStdString();
        std::string t = type.toStdString();
        if(ui->Viewer->isChecked())
            type = "viewer";
        if(ui->Curator->isChecked())
            type = "curator";




        cout << type.toStdString() << endl;

        editAccount(username, u,p,e,n,type.toStdString());

        close();




    }
    else
    {
        QMessageBox::warning(this,"Message", "Passwords do not match", QMessageBox::Ok);
    }






    if(type == "curator")
    {
        ac = new accountCurator();
        ac->setUName(username2.toStdString());
        ac->show();
        hide();
    }
    else if(type == "viewer")
    {
        av = new accountViewer();
        av->setUName(username2.toStdString());
        av->show();
        hide();
    }

}

//cancel button pressed
void AccountEdit::on_pushButton_2_clicked()
{
    ac = new accountCurator();
    ac->setUName(username);
    ac->show();
    hide();
}



void AccountEdit::on_homeButton_clicked()
{
    mu = new MuseumMain();
    mu->setUName(username);
    mu->show();
    hide();
}


void AccountEdit::setUName(std::string u)
{
    username = u;
    User user1;
    user1.setUsername(username);
    user1.getAccInfo(username);
    ui->Username->setText(QString::fromStdString(user1.getUsername()));
    ui->Name->setText(QString::fromStdString(user1.getName()));
    ui->Email->setText(QString::fromStdString(user1.getEmail()));
    ui->Password->setText(QString::fromStdString(user1.getPassword()));
    string type = user1.getType();

    if(type == "curator")
    {
        ui->Curator->setChecked(true);
    }
    else if(type == "viewer")
    {
        ui->Viewer->setChecked(true);
    }



}

std::string AccountEdit::getUName()
{
    return username;
}

//Deletes currentUser and creates new account with edited credentials (also changes current user)
void AccountEdit::editAccount(string currentUser, string newUser, string newPassword, string newEmail, string newName, string newType)
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

    //Creates SQL Query
    string s1 = "DELETE FROM userTable WHERE user = ";
    s1.append("'");
    s1.append(currentUser);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    QSqlQuery query;
    cout << s2 << endl;
    //Checks if code can be run, then checks if it comes up with a match
    if(!query.exec(s2))
    {
        cout << "DATABASE MALFUNCTION";
    }

    //Creating query from input
    s1 = "insert into userTable values('";
    s1.append(newUser);
    s1.append("', '");
    s1.append(newPassword);
    s1.append("', '");
    s1.append(newName);
    s1.append("', '");
    s1.append(newEmail);
    s1.append("', '");
    s1.append(newType);
    s1.append("')");
    char s3[s1.size()+1];
    strcpy(s3,s1.c_str());
    cout << s3 << endl;
    query.exec(s3);
    currentUser = newUser;
}
