#ifndef APPROVECOMMENTS_H
#define APPROVECOMMENTS_H

#include <QDialog>

#include "comment.h"
#include <vector>
#include "accountcurator.h"
#include "iostream"

#include "string"

using namespace std;



namespace Ui {
class ApproveComments;
}

class ApproveComments : public QDialog
{
    Q_OBJECT

public:
    explicit ApproveComments(QWidget *parent = nullptr);
    ~ApproveComments();

    void setUName(string u);
    std::string getUName();

    vector<Comment> commentsToApprove(string user);
    void nextComment();
    void approveComment(string item, string comment, string user);
    void disproveComment(string item, string comment, string user);

private slots:
    void on_exit_clicked();

    void on_deny_clicked();

    void on_approve_clicked();

private:
    Ui::ApproveComments *ui;

    string username;

    Comment curComment;
    vector<Comment> comments;

    accountCurator *ac;



};

#endif // APPROVECOMMENTS_H
