#include "itemview.h"
#include "ui_itemview.h"
#include "user.h"
#include "QMessageBox"

ItemView::ItemView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemView)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));


    index = 0;




}

ItemView::~ItemView()
{
    delete ui;
}

void ItemView::on_mListButton_clicked()
{
    //go to museum list page
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}

void ItemView::on_itemsViewedButton_clicked()
{
    //go to items viewed list
    iv = new ItemsViewed();
    iv->setUName(username);
    iv->show();
    hide();
}

void ItemView::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->setUName(username);
    mc->show();
    hide();
}

void ItemView::on_accountButton_clicked()
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

void ItemView::on_homeButton_clicked()
{
    mm = new MuseumMain();
    mm->setUName(username);
    mm->show();
    hide();
}

void ItemView::setUName(std::string u)
{
    username = u;
}

std::string ItemView::getUName()
{
    return username;
}

void ItemView::setMName(std::string m)
{
    museumName = m;
    ui->muName->setText(QString::fromStdString(museumName));

    curItem = getItemObject(museumName, itName);

    ui->iName->setText("Item Name: "+QString::fromStdString(curItem.getName()));
    ui->iCreator->setText("Item Creator: "+QString::fromStdString(curItem.getArtist()));
    ui->description->setText((QString::fromStdString(curItem.getDescription())));
    QPixmap pix = curItem.getImage();
    int width = ui->image->width();
    int height = ui->image->height();
    ui->image->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
    ui->image->setAlignment(Qt::AlignCenter);

    cIndex = 0;
    comments = getItemComments(curItem.getName());
    if(comments.size()>0)
    {
        ui->comment->setText(QString::fromStdString(comments.at(0).getComment()));
        ui->user->setText("User: "+QString::fromStdString(comments.at(0).getUser()));
    }
}

std::string ItemView::getMName()
{
    return museumName;
}

void ItemView::setIName(std::string i)
{
    itName = i;
    ui->iName->setText(QString::fromStdString(itName));
}

std::string ItemView::getIName()
{
    return itName;
}



void ItemView::on_pushButton_4_clicked()
{
    //back to museum
    mp = new MuseumPage();
    mp->setMName(museumName);
    mp->setUName(username);
    mp->show();
    hide();

}

void ItemView::on_pushButton_2_clicked()
{
    int size = items.size();
    //go to next item
    if(++index>=size)
    {
        index = 0;
    }
    itName = items.at(index).getName();
    setMName(museumName);

}


void ItemView::on_pushButton_3_clicked()
{
    //go to previous item
    int size = items.size();
    //go to next item
    if(--index<0)
    {
        index = size-1;
    }
    itName = items.at(index).getName();
    setMName(museumName);

}

Item ItemView::getItemObject(string museum, string itemName)
{
    Item item1;
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT * FROM itemTable WHERE name = ";
    s1.append("'");
    s1.append(itemName);
    s1.append("'");
    s1.append(" AND museum = '");
    s1.append(museum);
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

    if(query.first())
    {
        item1.name = query.value(0).toString().toStdString();
        item1.description = query.value(1).toString().toStdString();
        item1.artist = query.value(2).toString().toStdString();
        item1.owner = query.value(3).toString().toStdString();
        item1.museum = query.value(4).toString().toStdString();
        item1.collection = query.value(5).toString().toStdString();
        item1.filename = query.value(6).toString().toStdString();

         QByteArray outByteArray = query.value(7).toByteArray();
         QPixmap outputpix;
         outputpix.loadFromData(outByteArray);
         item1.image = outputpix;
    }

    return item1;
}

void ItemView::setItems(vector<Item> i)
{
    items = i;
    int size = items.size();
    while(index >= size)
    {
        index = index%size;
    }
}

void ItemView::setIndex(int i)
{
    index = i;
}

void ItemView::on_addComment_clicked()
{
    QString comment = ui->comment_2->toPlainText();
    std::string c = comment.toStdString();

    addComment(c, username, curItem.getName(), "pending");

    ui->comment_2->setText("");

    QMessageBox::information(this,"Message", "Comment submitted for approval", QMessageBox::Ok);

}

void ItemView::addComment(string comment, string user, string item, string approval)
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

    string s1 = "SELECT owner from itemTable WHERE name = '";
    s1.append(item);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    QSqlQuery query;
    query.exec(s2);

    string ownerName;
    if(query.first())
    {
          ownerName = query.value(0).toString().toStdString();
    }

    //Creating query from input
    s1 = "insert into commentTable values('";
    s1.append(comment);
    s1.append("', '");
    s1.append(user);
    s1.append("', '");
    s1.append(item);
    s1.append("', '");
    s1.append(approval);
    s1.append("', '");
    s1.append(ownerName);
    s1.append("')");
    char s3[s1.size()+1];
    strcpy(s3,s1.c_str());

    //Adds the item created to the table
    query.exec(s3);
}


vector<Comment> ItemView::getItemComments(std::string itemName)
{
    QSqlDatabase db;
    Comment c;
    vector<Comment> retVector;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT * FROM commentTable WHERE approved = 'true' AND item = '";
    s1.append(itemName);
    s1.append("'");
    cout << s1 << endl;
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    QSqlQuery query;
    query.exec(s2);

    while(query.next())
    {
        c.comment = query.value(0).toString().toStdString();
        c.user = query.value(1).toString().toStdString();
        c.item = query.value(2).toString().toStdString();
        c.approved = query.value(3).toString().toStdString();
        c.itemOwner = query.value(4).toString().toStdString();

        retVector.push_back(c);
    }

    cout << retVector.size() << endl;

    return retVector;
}

void ItemView::on_pushButton_clicked()
{
    int s = comments.size();
    if(comments.size()>0)
    {
    cIndex++;
    if(cIndex>=s)
    {
        cIndex = 0;
    }
    ui->comment->setText(QString::fromStdString(comments.at(cIndex).getComment()));
    ui->user->setText("User: "+QString::fromStdString(comments.at(cIndex).getUser()));
    }
}
