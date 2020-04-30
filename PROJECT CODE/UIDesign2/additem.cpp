#include "additem.h"
#include "ui_additem.h"
#include "QFileDialog"
#include "QDir"
#include "iostream"
#include "ostream"
#include "QFile"

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

    QFile *f = new QFile(filename);
    std::size_t found = filename.toStdString().find_last_of("/\\");
    std::string file = filename.toStdString().substr(found+1);

    logInfo(name, description, artist, username, museum, collection, file, f);





    cout << file << endl;
//    if(!filename.isEmpty())
//    {
//        QImage pic;
//        pic.save(":/resources/images/"+QString::fromStdString(file));
//    }



    ac = new accountCurator();
    ac->setUName(username);
    ac->show();
    hide();
}

void AddItem::on_addImage_clicked()
{
    QString filter = "images (*.jpg *.png *.heic)";
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
void AddItem::logInfo(string name, string description, string artist, string owner, string museum, string collection, string filename, QFile *image)
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

    char filen[filename.size()+1];
    strcpy(filen, filename.c_str());


   QFile file(filen);
   QByteArray inByteArray = file.readAll();


    cout << s1 << endl;
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
    query.prepare(s2);
    query.bindValue( ":imageData", inByteArray );
    cout << s2 << endl;
    if( !query.exec() )
    qDebug() << "Error inserting image into table:\n" << query.lastError();
}
