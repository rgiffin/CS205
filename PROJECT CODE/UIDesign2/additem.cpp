#include "additem.h"
#include "ui_additem.h"
#include "QFileDialog"
#include "QDir"
#include "iostream"
#include "ostream"

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
    QString iType = ui->itemType->text();

    std::size_t found = filename.toStdString().find_last_of("/\\");
    std::string file = filename.toStdString().substr(found+1);

    cout << file << endl;
    if(!filename.isEmpty())
    {
        QImage pic;
        pic.save(":/resources/images/"+QString::fromStdString(file));
    }



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
