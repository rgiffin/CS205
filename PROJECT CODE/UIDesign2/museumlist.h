#ifndef MUSEUMLIST_H
#define MUSEUMLIST_H

#include <QDialog>

#include <accountcurator.h>
#include <museummain.h>
#include <itemsviewed.h>
#include <mycomments.h>




class accountCurator;
class MuseumMain;
class ItemsViewed;
class MyComments;





namespace Ui {
class MuseumList;
}

class MuseumList : public QDialog
{
    Q_OBJECT

public:
    explicit MuseumList(QWidget *parent = nullptr);
    ~MuseumList();

private slots:
    void on_homeButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_accountButton_clicked();

private:
    Ui::MuseumList *ui;

    accountCurator *ac;
    MuseumMain *mm;
    ItemsViewed *iv;
    MyComments *mc;
};

#endif // MUSEUMLIST_H
