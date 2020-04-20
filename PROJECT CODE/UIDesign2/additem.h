#ifndef ADDITEM_H
#define ADDITEM_H

#include <QDialog>
#include "accountcurator.h"


class accountCurator;

namespace Ui {
class AddItem;
}

class AddItem : public QDialog
{
    Q_OBJECT

public:
    explicit AddItem(QWidget *parent = nullptr);
    ~AddItem();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_addImage_clicked();

private:
    Ui::AddItem *ui;

    accountCurator *ac;

    QString filename;
};

#endif // ADDITEM_H
