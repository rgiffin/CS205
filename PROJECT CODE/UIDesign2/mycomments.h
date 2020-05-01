#ifndef MYCOMMENTS_H
#define MYCOMMENTS_H

#include <QDialog>

#include <accountcurator.h>
#include <museummain.h>
#include <museumlist.h>
#include <itemsviewed.h>
#include "accountviewer.h"
#include "vector"
#include "item.h"
#include "comment.h"

using namespace std;

class accountViewer;
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

    void setUName(std::string u);
    std::string getUName();

    vector<Comment> commentsApproved(std::string user);

    void display(int i);

    Item getItemFromName(string name);

private slots:
    void on_itemsViewedButton_clicked();

    void on_homeButton_clicked();

    void on_mListButton_clicked();

    void on_accountButton_clicked();

    void on_next_clicked();

    void on_previous_clicked();

private:
    Ui::MyComments *ui;
    accountViewer *av;
    accountCurator *ac;
    MuseumMain *mm;
    MuseumList *ml;
    ItemsViewed *iv;

    vector<Comment> comments;
    std::string username;
    int index;
};

#endif // MYCOMMENTS_H
