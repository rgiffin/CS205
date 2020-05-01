#include "additem.h"
#include "ui_additem.h"
#include "QFileDialog"
#include "QDir"
#include "iostream"
#include "ostream"
#include "QFile"
#include "QMessageBox"

AddItem::AddItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItem)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM_2->width();
    int height = ui->logoMM_2->height();
    ui->logoMM_2->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

AddItem::~AddItem()
{
    delete ui;
}








void AddItem::on_pushButton_2_clicked()
{
    ac = new accountCurator();
    ac->setUName(username);
    ac->show();
    hide();
}

void AddItem::on_pushButton_clicked()
{
    //save item data

    QString iName = ui->itemName->text();
    QString iDescription = ui->itemDescription->toPlainText();
    QString iMuseum = ui->museum->text();
    QString iCollection = ui->collection->text();
    QString iArtist = ui->artist->text();


    std::string name = iName.toStdString();
    std::string description = iDescription.toStdString();
    std::string artist = iArtist.toStdString();
    std::string museum = iMuseum.toStdString();
    std::string collection = iCollection.toStdString();

    std::size_t found = filename.toStdString().find_last_of("/\\");
    std::string file = filename.toStdString().substr(found+1);
    QPixmap pic(filename);

    Museum m = getMuseumFromName(museum);
    Item i = getItemFromName(name);


    if(iName == "" || iMuseum == "")
    {
        QMessageBox::warning(this,"Message", "Empty Fields Exist", QMessageBox::Ok);
    }
    else if(m.getName()=="dne")
    {
        QMessageBox::warning(this,"Message", "Museum Does Not Exist", QMessageBox::Ok);
    }
    else if(m.getOwner()!=username)
    {
        QMessageBox::warning(this,"Message", "You do not own this museum please choose a museum from your collection", QMessageBox::Ok);
    }
    else if(i.getName() != "dne")
    {
        QMessageBox::warning(this,"Message", "Item Name already exsists please choose anohter name for your item", QMessageBox::Ok);
    }
    else
    {
        logInfo(name, description, artist, username, museum, collection, file, pic);
    }






    cout << file << endl;




    ac = new accountCurator();
    ac->setUName(username);
    ac->show();
    hide();
}

void AddItem::on_addImage_clicked()
{
    QString filter = "images (*.png)";
    filename = QFileDialog::getOpenFileName(this, "Open a file", QDir::homePath(), filter);

    if(!filename.isEmpty())
    {
        QPixmap pix(filename);
        int width = ui->itemImage->width();
        int height = ui->itemImage->height();
        ui->itemImage->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
    }


}


void AddItem::setUName(std::string u)
{
    username = u;
}

std::string AddItem::getUName()
{
    return username;
}

//Puts item info into the SQL Database
void AddItem::logInfo(string name, string description, string artist, string owner, string museum, string collection, string filename, QPixmap pix1)
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
    string s1 = "insert into itemTable values('";
    s1.append(name);
    s1.append("', '");
    s1.append(description);
    s1.append("', '");
    s1.append(artist);
    s1.append("', '");
    s1.append(owner);
    s1.append("', '");
    s1.append(museum);
    s1.append("', '");
    s1.append(collection);
    s1.append("', '");
    s1.append(filename);
    s1.append("', :imagedata");
    s1.append(")");

    QByteArray bArray;
    QBuffer buffer(&bArray);
    buffer.open(QIODevice::WriteOnly);
    pix1.save(&buffer, "PNG");

    cout << s1 << endl;
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
    query.prepare(s2);
    query.bindValue( ":imagedata", bArray);
    cout << s2 << endl;
    if( !query.exec() )
    qDebug() << "Error inserting image into table:\n" << query.lastError();
}

Museum AddItem::getMuseumFromName(string name)
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

//Gets Item Object from item name
Item AddItem::getItemFromName(string name)
{
    Item retItem;
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

    string s1 = "SELECT * FROM itemTable WHERE name = '";
    s1.append(name);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    QSqlQuery query;
    query.exec(s2);

    if(query.first())
    {
        retItem.name = query.value(0).toString().toStdString();
        retItem.description = query.value(1).toString().toStdString();
        retItem.artist = query.value(2).toString().toStdString();
        retItem.owner = query.value(3).toString().toStdString();
        retItem.museum = query.value(4).toString().toStdString();
        retItem.collection = query.value(5).toString().toStdString();
        retItem.filename = query.value(6).toString().toStdString();

        QByteArray outByteArray = query.value(7).toByteArray();
        QPixmap outputpix;
        outputpix.loadFromData(outByteArray);
        retItem.image = outputpix;
    }
    else
    {
        retItem.name = "dne";
    }
    return retItem;
}
