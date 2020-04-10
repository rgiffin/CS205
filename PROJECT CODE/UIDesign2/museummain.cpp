#include "museummain.h"
#include "ui_museummain.h"

MuseumMain::MuseumMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MuseumMain)
{
    ui->setupUi(this);
}

MuseumMain::~MuseumMain()
{
    delete ui;
}
