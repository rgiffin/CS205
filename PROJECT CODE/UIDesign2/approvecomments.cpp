#include "approvecomments.h"
#include "ui_approvecomments.h"


ApproveComments::ApproveComments(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ApproveComments)
{
    ui->setupUi(this);
    username = "";
}

ApproveComments::~ApproveComments()
{
    delete ui;
}

void ApproveComments::on_exit_clicked()
{
    hide();
}

void ApproveComments::on_deny_clicked()
{
    //deny comment
    if(comments.size()>0)
    {
    disproveComment(curComment.getItem(), curComment.getComment(), curComment.getUser());
    nextComment();
    }
}

void ApproveComments::on_approve_clicked()
{
    //approve comment
    if(comments.size()>0)
    {
    approveComment(curComment.getItem(), curComment.getComment(), curComment.getUser());
    nextComment();
    }
}


std::string ApproveComments::getUName()
{
    return username;
}

void ApproveComments::nextComment()
{
    if(comments.size()>0)
    {
        curComment = comments.back();
        comments.pop_back();
    }
    else
    {
        ui->user->setText("User: N/A");
        ui->comment->setText("No Comments left to approve");
    }
}

//Shows the comments that an owner of a user can approve, returns vector of not yet approved comments
vector<Comment> ApproveComments::commentsToApprove(string user)
{
    QSqlDatabase db;
    Comment c;
    vector<Comment> retVector;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT * FROM commentTable WHERE approved = 'pending' AND itemOwner = '";
    s1.append(user);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    QSqlQuery query;
    query.exec(s2);

    while(query.next())
    {
        c.comment = query.value(0).toString().toStdString();
        c.user = query.value(1).toString().toStdString();
        c.item = query.value(2).toString().toStdString();
        c.approved = query.value(3).toString().toStdString();
        c.itemOwner = query.value(4).toString().toStdString();

        retVector.push_back(c);
    }


    return retVector;
}

void ApproveComments::setUName(string u)
{
    username = u;
    comments = commentsToApprove(u);
    nextComment();
}



//takes the item, comment, and commenter's username and sets the approval to true
void ApproveComments::approveComment(string item, string comment, string user)
{
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    //Creating query from input

    string s1 = "UPDATE commentTable SET approved = 'true' WHERE comment = '";
    s1.append(comment);
    s1.append("' AND item = '");
    s1.append(item);
    s1.append("' AND user = '");
    s1.append(user);
    s1.append("'");
    cout << s1 << endl;
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
    query.exec(s2);
}

void ApproveComments::disproveComment(string item, string comment, string user)
{
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    //Creating query from input

    string s1 = "UPDATE commentTable SET approved = 'false' WHERE comment = '";
    s1.append(comment);
    s1.append("' AND item = '");
    s1.append(item);
    s1.append("' AND user = '");
    s1.append(user);
    s1.append("'");
    cout << s1 << endl;
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
    query.exec(s2);
}
