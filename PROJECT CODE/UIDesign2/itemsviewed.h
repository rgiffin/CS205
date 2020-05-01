#ifndef ITEMSVIEWED_H
#define ITEMSVIEWED_H

#include <QDialog>

#include <accountcurator.h>
#include <museummain.h>
#include <museumlist.h>
#include <mycomments.h>
#include "accountviewer.h"
#include "item.h"
#include "string"
#include "museum.h"
#include "itemview.h"
#include "museumpage.h"




class accountViewer;
class accountCurator;
class MuseumMain;
class MuseumList;
class MyComments;
class ItemView;
class MuseumPage;



namespace Ui {
class ItemsViewed;
}

class ItemsViewed : public QDialog
{
    Q_OBJECT

public:
    explicit ItemsViewed(QWidget *parent = nullptr);
    ~ItemsViewed();

    void setUName(std::string u);
    std::string getUName();

    Item getItemFromName(string name);
    Museum getMuseumFromName(string name);

private slots:
    void on_mListButton_clicked();

    void on_myCommentsButton_clicked();

    void on_homeButton_clicked();

    void on_accountButton_clicked();

    void on_search_clicked();

private:
    Ui::ItemsViewed *ui;
    accountViewer *av;
    accountCurator *ac;
    MuseumMain *mm;
    MuseumList *ml;
    MyComments *mc;
    ItemView *iv;
    MuseumPage *mp;

    std::string username;

    Item fItem;
    Item fMuseum;

};

#endif // ITEMSVIEWED_H
