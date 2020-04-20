#ifndef MYCOMMENTS_H
#define MYCOMMENTS_H

#include <QDialog>

#include <accountcurator.h>
#include <museummain.h>
#include <museumlist.h>
#include <itemsviewed.h>


class accountCurator;
class MuseumMain;
class MuseumList;
class ItemsViewed;


namespace Ui {
class MyComments;
}

class MyComments : public QDialog
{
    Q_OBJECT

public:
    explicit MyComments(QWidget *parent = nullptr);
    ~MyComments();

private slots:
    void on_itemsViewedButton_clicked();

    void on_homeButton_clicked();

    void on_mListButton_clicked();

    void on_accountButton_clicked();

private:
    Ui::MyComments *ui;

    accountCurator *ac;
    MuseumMain *mm;
    MuseumList *ml;
    ItemsViewed *iv;

};

#endif // MYCOMMENTS_H
