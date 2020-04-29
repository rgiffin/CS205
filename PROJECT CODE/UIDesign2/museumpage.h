#ifndef MUSEUMPAGE_H
#define MUSEUMPAGE_H

#include <QDialog>

#include <accountcurator.h>
#include <museumlist.h>
#include <itemsviewed.h>
#include <mycomments.h>
#include "accountviewer.h"
#include "museummain.h"


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

private:
    Ui::MuseumPage*ui;
    accountViewer *av;
    accountCurator *ac;
    MuseumList *ml;
    ItemsViewed *iv;
    MyComments *mc;
    MuseumMain *mm;


    std::string username;
    std::string museumName;
};

#endif // MUSEUMPAGE_H
