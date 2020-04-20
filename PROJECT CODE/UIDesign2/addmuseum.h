#ifndef ADDMUSEUM_H
#define ADDMUSEUM_H

#include <QDialog>
#include <accountcurator.h>

class accountCurator;

namespace Ui {
class AddMuseum;
}

class AddMuseum : public QDialog
{
    Q_OBJECT

public:
    explicit AddMuseum(QWidget *parent = nullptr);
    ~AddMuseum();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddMuseum *ui;

    accountCurator *ac;
};

#endif // ADDMUSEUM_H
