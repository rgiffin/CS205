#include "itemsviewed.h"
#include "ui_itemsviewed.h"
#include "user.h"

ItemsViewed::ItemsViewed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemsViewed)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
    ui->error->setText("");
}

ItemsViewed::~ItemsViewed()
{
    delete ui;
}


void ItemsViewed::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->setUName(username);
    mc->show();
    hide();
}

void ItemsViewed::on_accountButton_clicked()
{
    //go to account
    User u;
    u.setUsername(username);
    u.getAccInfo(username);

    //if curator open curator account look
    if(u.ifCurator())
    {
        ac = new accountCurator();
        ac->setUName(username);
        ac->show();
        hide();
    }
    else
    {
        av = new accountViewer();
        av->setUName(username);
        av->show();
        hide();
    }
}
void ItemsViewed::on_homeButton_clicked()
{
    mm = new MuseumMain();
    mm->setUName(username);
    mm->show();
    hide();
}


void ItemsViewed::on_mListButton_clicked()
{
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}


void ItemsViewed::setUName(std::string u)
{
    username = u;
}

std::string ItemsViewed::getUName()
{
    return username;
}

//Gets Item Object from item name
Item ItemsViewed::getItemFromName(string name)
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


//Gets Museum Object from the museum name
Museum ItemsViewed::getMuseumFromName(string name)
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


void ItemsViewed::on_search_clicked()
{
    std::string s = ui->field->text().toStdString();
    Item i = getItemFromName(s);
    Museum m = getMuseumFromName(s);

    if(i.getName() != "dne")
    {
        iv = new ItemView();
        iv->setIName(i.getName());
        iv->setUName(username);
        iv->setMName(i.getMuseum());
        iv->show();
        hide();
    }
    else if(m.getName() != "dne")
    {
        mp = new MuseumPage();
        mp->setUName(username);
        mp->setMName(m.getName());
        mp->show();
        hide();
    }
    else
    {
        ui->error->setText("Error: No item or Museum Found with matching name");
    }
}
