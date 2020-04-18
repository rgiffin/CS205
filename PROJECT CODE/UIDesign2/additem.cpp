#include "additem.h"
#include "ui_additem.h"
#include "QFileDialog"
#include "QDir"

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
    ac->show();
    hide();
}

void AddItem::on_pushButton_clicked()
{
    //save item data

    QString iName = ui->itemName->text();
    QString iDescription = ui->itemDescription->toPlainText();
    QString iType = ui->itemType->text();

    if(!filename.isEmpty())
    {
        QImage pic;
        pic.save(":/resources/images/"+filename);
    }



    ac = new accountCurator();
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
