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
}

accountCurator::~accountCurator()
{
    delete ui;
}

void accountCurator::on_pushButton_clicked()
{
    //open account editor
    ae = new AccountEdit();
    ae->show();
    hide();
}

void accountCurator::on_homeButton_clicked()
{
    mu = new MuseumMain();
    mu->show();
    hide();
}

void accountCurator::on_mListButton_clicked()
{
    ml = new MuseumList();
    ml->show();
    hide();
}

void accountCurator::on_myCommentsButton_clicked()
{
    //go to my comments
    mc = new MyComments();
    mc->show();
    hide();
}




void accountCurator::on_itemsViewedButton_clicked()
{
    iv = new ItemsViewed();
    iv->show();
    hide();
}

void accountCurator::setUser(User u)
{
    curUser = &u;
    QString name = QString::fromStdString((curUser->getName()));
    QString username = QString::fromStdString((curUser->getUsername()));
    QString password = QString::fromStdString((curUser->getPassword()));
    QString type = QString::fromStdString((curUser->getType()));
    QString email = QString::fromStdString((curUser->getEmail()));


    ui->getName->setText(name);
    ui->getUsername->setText(username);
    ui->getPassword->setText(password);
    ui->getAccountType->setText(type);
    ui->getEmail->setText(email);

}

void accountCurator::on_addMusButton_clicked()
{
    am = new AddMuseum();
    am->show();
    hide();
}

void accountCurator::on_pushButton_2_clicked()
{
    ai = new AddItem();
    ai->show();
    hide();
}
