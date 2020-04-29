#ifndef ITEMVIEW_H
#define ITEMVIEW_H

#include <QDialog>

#include <accountcurator.h>
#include <museumlist.h>
#include <itemsviewed.h>
#include <mycomments.h>
#include "accountviewer.h"
#include "museummain.h"
#include "museumpage.h"


class MuseumMain;
class accountViewer;
class accountCurator;
class MuseumList;
class ItemsViewed;
class MyComments;
class ItemPage;

namespace Ui {
class ItemView;
}

class ItemView : public QDialog
{
    Q_OBJECT

public:
    explicit ItemView(QWidget *parent = nullptr);
    ~ItemView();

    void setUName(std::string u);
    std::string getUName();

    void setMName(std::string m);
    std::string getMName();

    void setIName(std::string i);
    std::string getIName();

private slots:

    void on_mListButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_accountButton_clicked();

    void on_homeButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ItemView *ui;

    std::string itName;
    std::string iDesc;
    std::string userC;
    std::string userComment;
    std::string iCreator;

    accountViewer *av;
    accountCurator *ac;
    MuseumList *ml;
    ItemsViewed *iv;
    MyComments *mc;
    MuseumMain *mm;
    ItemPage *ip;


    std::string username;
    std::string museumName;



};

#endif // ITEMVIEW_H
