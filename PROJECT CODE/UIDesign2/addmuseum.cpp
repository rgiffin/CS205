#include "addmuseum.h"
#include "ui_addmuseum.h"

AddMuseum::AddMuseum(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMuseum)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM_2->width();
    int height = ui->logoMM_2->height();
    ui->logoMM_2->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

AddMuseum::~AddMuseum()
{
    delete ui;
}

void AddMuseum::on_pushButton_2_clicked()
{
    //canceled
    ac = new accountCurator();
    ac->setUName(username);
    ac->show();
    hide();
}

void AddMuseum::on_pushButton_clicked()
{
    //save museum data
    QString mName = ui->museumName->text();
    QString mDescription = ui->museumDescription->toPlainText();
    QString mType = ui->museumType->text();



    //go back
    ac = new accountCurator();
    ac->setUName(username);
    ac->show();
    hide();
}


void AddMuseum::setUName(std::string u)
{
    username = u;
}

std::string AddMuseum::getUName()
{
    return username;
}

//logs museum info into the sql table
void AddMuseum::logInfo(string name, string description, string owner)
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
    string s1 = "insert into museumTable values('";
    s1.append(name);
    s1.append("', '");
    s1.append(description);
    s1.append("', '");
    s1.append(owner);
    s1.append("')");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
    query.exec(s2);

}
