#include "itemview.h"
#include "ui_itemview.h"

ItemView::ItemView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemView)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/logo.png");
    int width = ui->logoMM->width();
    int height = ui->logoMM->height();
    ui->logoMM->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
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

    //if curator open curator account look
    if(1>0)
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
    //go to next item

}


void ItemView::on_pushButton_3_clicked()
{
    //go to previous item

}
