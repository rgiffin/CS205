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
}

std::string accountCurator::getUName()
{
    return username;
}

