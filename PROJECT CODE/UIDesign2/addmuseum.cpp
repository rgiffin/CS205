#include "addmuseum.h"
#include "ui_addmuseum.h"
#include "QMessageBox"

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


    std::string musName = mName.toStdString();
    std::string musDescription = mDescription.toStdString();
    std::string musType = mType.toStdString();

    Museum m = getMuseumFromName(musName);



    if(m.getName()!="dne")
    {
        QMessageBox::warning(this,"Message", "Museum Name already Exists Please Enter Another", QMessageBox::Ok);
    }
    else if(mName == "")
    {
        QMessageBox::warning(this,"Message", "Please Enter A Museum Name", QMessageBox::Ok);
    }
    else
    {
    logInfo(musName,musDescription,username);

    //go back
    ac = new accountCurator();
    ac->setUName(username);
    ac->show();
    hide();
    }
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

Museum AddMuseum::getMuseumFromName(string name)
{
    Museum retMus;
    QSqlDatabase db;
    Comment c;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT * FROM museumTable WHERE name = '";
    s1.append(name);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    QSqlQuery query;
    query.exec(s2);

    if(query.first())
    {
        retMus.name = query.value(0).toString().toStdString();
        retMus.description = query.value(1).toString().toStdString();
        retMus.owner = query.value(2).toString().toStdString();
    }
    else
    {
        retMus.name = "dne";
    }

    cout << retMus.name << endl;
    cout << retMus.description << endl;
    return retMus;
}
