#include "mycomments.h"
#include "ui_mycomments.h"

MyComments::MyComments(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyComments)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

MyComments::~MyComments()
{
    delete ui;
}


void MyComments::on_accountButton_clicked()
{
    //go to account

    //if curator open curator account look
    if(1>0)
    {
        ac = new accountCurator();
        ac->show();
        hide();
    }
    else
    {

    }
}
void MyComments::on_homeButton_clicked()
{
    mm = new MuseumMain();
    mm->show();
    hide();
}


void MyComments::on_mListButton_clicked()
{
    ml = new MuseumList();
    ml->show();
    hide();
}


void MyComments::on_itemsViewedButton_clicked()
{
    iv = new ItemsViewed();
    iv->show();
    hide();

}


