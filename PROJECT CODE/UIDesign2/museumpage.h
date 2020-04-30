#ifndef MUSEUMPAGE_H
#define MUSEUMPAGE_H

#include <QDialog>
#include<string>
#include<vector>
#include <accountcurator.h>
#include <museumlist.h>
#include <itemsviewed.h>
#include <mycomments.h>
#include "accountviewer.h"
#include "museummain.h"
#include "itemview.h"
#include "museum.h"
#include "item.h"

using namespace std;

class ItemView;
class MuseumMain;
class accountViewer;
class accountCurator;
class MuseumList;
class ItemsViewed;
class MyComments;



namespace Ui {
class MuseumPage;
}

class MuseumPage : public QDialog
{
    Q_OBJECT

public:
    explicit MuseumPage(QWidget *parent = nullptr);
    ~MuseumPage();
    Museum museum;
    Museum setMuseum(string, string);


    void setUName(std::string u);
    std::string getUName();

    void setMName(std::string m);
    std::string getMName();




private slots:
    void on_image1_linkActivated(const QString &link);

    void on_mListButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_accountButton_clicked();

    void on_homeButton_clicked();

    void on_next_clicked();

    void on_previous_clicked();

    void on_name_1_clicked();

    void on_name_2_clicked();

    void on_name_3_clicked();

    void on_name_4_clicked();

    void on_name_5_clicked();

    void on_name_6_clicked();

    void on_name_7_clicked();

    void on_name_8_clicked();

    void on_name_9_clicked();

    void on_pushButton_clicked();

private:
    Ui::MuseumPage*ui;
    accountViewer *av;
    accountCurator *ac;
    MuseumList *ml;
    ItemsViewed *iv;
    MyComments *mc;
    MuseumMain *mm;
    ItemView *ip;


    //items
    std::string iName1;
    std::string iName2;
    std::string iName3;
    std::string iName4;
    std::string iName5;
    std::string iName6;
    std::string iName7;
    std::string iName8;
    std::string iName9;








    std::string username;
    std::string museumName;
};

#endif // MUSEUMPAGE_H
