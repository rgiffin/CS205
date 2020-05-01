#ifndef MUSEUMMAIN_H
#define MUSEUMMAIN_H

#include <QDialog>

#include <accountcurator.h>
#include <museumlist.h>
#include <itemsviewed.h>
#include <mycomments.h>
#include "accountviewer.h"
#include "museumpage.h"



class accountViewer;
class accountCurator;
class MuseumList;
class ItemsViewed;
class MyComments;
class MuseumPage;




namespace Ui {
class MuseumMain;
}

class MuseumMain : public QDialog
{
    Q_OBJECT

public:
    explicit MuseumMain(QWidget *parent = nullptr);
    ~MuseumMain();

    void setUName(std::string u);
    std::string getUName();

private slots:
    void on_mListButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_accountButton_clicked();



    void on_pushButton_clicked();

private:
    Ui::MuseumMain *ui;
    accountViewer *av;
    accountCurator *ac;
    MuseumList *ml;
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

#endif // MUSEUMMAIN_H
