#include "accountcurator.h"
#include "ui_accountcurator.h"


User* accountCurator::curUser;

accountCurator::accountCurator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accountCurator)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM_2->width();
    int height = ui->logoMM_2->height();
    ui->logoMM_2->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));

    ui->getUsername->setText(QString::fromStdString(username));
}

accountCurator::~accountCurator()
{
    delete ui;
}

void accountCurator::on_pushButton_clicked()
{
    //open account editor
    ae = new AccountEdit();
    ae->setUName(username);
    ae->show();
    hide();
}

void accountCurator::on_homeButton_clicked()
{
    mu = new MuseumMain();
    mu->setUName(username);
    mu->show();
    hide();
}

void accountCurator::on_mListButton_clicked()
{
    ml = new MuseumList();
    ml->setUName(username);
    ml->show();
    hide();
}

void accountCurator::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->setUName(username);
    mc->show();
    hide();
}




void accountCurator::on_itemsViewedButton_clicked()
{
    iv = new ItemsViewed();
    iv->setUName(username);
    iv->show();
    hide();
}

void accountCurator::setUser(User u)
{
    curUser = &u;
    QString name = QString::fromStdString((curUser->getName()));
    QString password = QString::fromStdString((curUser->getPassword()));
    QString type = QString::fromStdString((curUser->getType()));
    QString email = QString::fromStdString((curUser->getEmail()));


    ui->getName->setText(name);
    ui->getUsername->setText(QString::fromStdString(username));
    ui->getPassword->setText(password);
    ui->getAccountType->setText(type);
    ui->getEmail->setText(email);

}

void accountCurator::on_addMusButton_clicked()
{
    am = new AddMuseum();
    am->setUName(username);
    am->show();
    hide();
}

void accountCurator::on_pushButton_2_clicked()
{
    ai = new AddItem();
    ai->setUName(username);
    ai->show();
    hide();
}


void accountCurator::setUName(std::string u)
{
    username = u;
    ui->getUsername->setText(QString::fromStdString(username));
    getAccInfo(username);
}

std::string accountCurator::getUName()
{
    return username;
}

//Opens the database and sets some global variables equal to their corresponding results
void accountCurator::getAccInfo(string user)
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
    string s1 = "SELECT * FROM userTable WHERE user = ";
    s1.append("'");
    s1.append(user);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    QSqlQuery query;
    //Checks if code can be run, then checks if it comes up with a match
    if(!query.exec(s2))
    {
        cout << "DATABASE MALFUNCTION";
    }
    query.next();
    QString q1 = query.value(1).toString();
    currPass =  q1.toStdString();
    cout<< "CurrPass = " << currPass << endl;

    QString q2 = query.value(2).toString();
    currName = q2.toStdString();
    cout<< "CurrName = " << currName << endl;

    QString q3 = query.value(3).toString();
    currEmail = q3.toStdString();
    cout<< "CurrEmail = " << currEmail << endl;

    QString q4 = query.value(4).toString();
    currType = q4.toStdString();
    cout<< "CurrType = " << currType << endl;


    ui->getName->setText(QString::fromStdString(currName));
    ui->getUsername->setText(QString::fromStdString(username));
    ui->getPassword->setText(QString::fromStdString(currPass));
    ui->getAccountType->setText(QString::fromStdString(currType));
    ui->getEmail->setText(QString::fromStdString(currEmail));



}
