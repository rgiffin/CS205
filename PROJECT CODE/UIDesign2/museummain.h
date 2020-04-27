#ifndef MUSEUMMAIN_H
#define MUSEUMMAIN_H

#include <QDialog>

#include <accountcurator.h>
#include <museumlist.h>
#include <itemsviewed.h>
#include <mycomments.h>
#include "accountviewer.h"



class accountViewer;
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

    void setUName(std::string u);
    std::string getUName();

private slots:
    void on_mListButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_accountButton_clicked();

private:
    Ui::MuseumMain *ui;
    accountViewer *av;
    accountCurator *ac;
    MuseumList *ml;
    ItemsViewed *iv;
    MyComments *mc;


    std::string username;

};

#endif // MUSEUMMAIN_H
