#ifndef MUSEUMMAIN_H
#define MUSEUMMAIN_H

#include <QDialog>

#include <accountcurator.h>
#include <museumlist.h>
#include <itemsviewed.h>
#include <mycomments.h>




class accountCurator;
class MuseumList;
class ItemsViewed;
class MyComments;




namespace Ui {
class MuseumMain;
}

class MuseumMain : public QDialog
{
    Q_OBJECT

public:
    explicit MuseumMain(QWidget *parent = nullptr);
    ~MuseumMain();

private slots:
    void on_mListButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_accountButton_clicked();

private:
    Ui::MuseumMain *ui;

    accountCurator *ac;
    MuseumList *ml;
    ItemsViewed *iv;
    MyComments *mc;



};

#endif // MUSEUMMAIN_H
