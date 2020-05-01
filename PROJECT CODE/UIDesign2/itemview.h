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
#include "item.h"
#include "museum.h"

#include "vector"
#include "comment.h"


class MuseumPage;
class MuseumMain;
class accountViewer;
class accountCurator;
class MuseumList;
class ItemsViewed;
class MyComments;

namespace Ui {
class ItemView;
}

class ItemView : public QDialog
{
    Q_OBJECT

public:
    explicit ItemView(QWidget *parent = nullptr);
    ~ItemView();

    Item getItemObject(string museum, string itemName);

    void setUName(std::string u);
    std::string getUName();

    void setMName(std::string m);
    std::string getMName();

    void setIName(std::string i);
    std::string getIName();

    void setItems(vector<Item> i);

    void setIndex(int i);

    void addComment(std::string comment, std::string user, std::string item, std::string approval);

    vector<Comment> getItemComments(std::string itemName);

private slots:

    void on_mListButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_accountButton_clicked();

    void on_homeButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_addComment_clicked();

    void on_pushButton_clicked();

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
    MuseumPage *mp;


    std::string username;
    std::string museumName;

    vector<Item> items;
    vector<Comment> comments;

    Item curItem;

    int cIndex;

    int index;

};

#endif // ITEMVIEW_H
