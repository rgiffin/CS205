#include "accountedit.h"
#include "ui_accountedit.h"
AccountEdit::AccountEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountEdit)
{
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
    QString username = ui->Username->text();
    QString password = ui->Password->text();
    QString email = ui->Email->text();
    QString name = ui->Name->text();
    QString confP = ui->PasswordConf->text();
    QString type = "";

    if(ui->Viewer->isChecked())
        type = "Viewer";
    if(ui->Curator->isChecked())
        type = "Curator";


    if(type == "Curator")
    {
        ac = new accountCurator();
        ac->setUName(username.toStdString());
        ac->show();
        hide();
    }
    else
    {
        av = new accountViewer();
        av->setUName(username.toStdString());
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
    string s1 = "DELETE * FROM userTable WHERE user = ";
    s1.append("'");
    s1.append(currentUser);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    QSqlQuery query;
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
    query.exec(s3);
    currentUser = newUser;
}
