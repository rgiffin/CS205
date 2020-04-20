#ifndef ITEMSVIEWED_H
#define ITEMSVIEWED_H

#include <QDialog>

#include <accountcurator.h>
#include <museummain.h>
#include <museumlist.h>
#include <mycomments.h>




class accountCurator;
class MuseumMain;
class MuseumList;
class MyComments;



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

private slots:
    void on_mListButton_clicked();

    void on_myCommentsButton_clicked();

    void on_homeButton_clicked();

    void on_accountButton_clicked();

private:
    Ui::ItemsViewed *ui;

    accountCurator *ac;
    MuseumMain *mm;
    MuseumList *ml;
    MyComments *mc;

    std::string username;

};

#endif // ITEMSVIEWED_H
