#ifndef MUSEUMMAIN_H
#define MUSEUMMAIN_H

#include <QDialog>

#include <accountcurator.h>

class accountCurator;



namespace Ui {
class MuseumMain;
}

class MuseumMain : public QDialog
{
    Q_OBJECT

public:
    explicit MuseumMain(QWidget *parent = nullptr);
    ~MuseumMain();

private slots:
    void on_mListButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_accountButton_clicked();

private:
    Ui::MuseumMain *ui;

    accountCurator *ac;


};

#endif // MUSEUMMAIN_H
