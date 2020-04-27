#ifndef ADDMUSEUM_H
#define ADDMUSEUM_H

#include <QDialog>
#include <accountcurator.h>


class accountCurator;

namespace Ui {
class AddMuseum;
}

class AddMuseum : public QDialog
{
    Q_OBJECT

public:
    explicit AddMuseum(QWidget *parent = nullptr);
    ~AddMuseum();
    void logInfo(string, string, string);
    void setUName(std::string u);
    std::string getUName();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddMuseum *ui;

    accountCurator *ac;

    std::string username;
};

#endif // ADDMUSEUM_H
