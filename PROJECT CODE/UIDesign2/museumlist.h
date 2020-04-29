#ifndef MUSEUMLIST_H
#define MUSEUMLIST_H

#include <QDialog>

#include <accountcurator.h>
#include <museummain.h>
#include <itemsviewed.h>
#include <mycomments.h>
#include "accountviewer.h"
#include "museumpage.h"

class MuseumPage;
class accountViewer;
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

    void setUName(std::string u);
    std::string getUName();

private slots:
    void on_homeButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_accountButton_clicked();

    void on_visit1_4_clicked();

    void on_visit2_4_clicked();

    void on_visit3_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MuseumList *ui;
    accountViewer *av;
    accountCurator *ac;
    MuseumMain *mm;
    ItemsViewed *iv;
    MyComments *mc;
    MuseumPage *mp;

    std::string username;

    std::string name1;
    std::string name2;
    std::string name3;


    std::string desc1;
    std::string desc2;
    std::string desc3;
};

#endif // MUSEUMLIST_H
