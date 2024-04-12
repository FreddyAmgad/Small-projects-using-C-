#ifndef RGTR_H
#define RGTR_H

#include <QDialog>
#include<string>
#include<fstream>
using namespace std;
namespace Ui {
class rgtr;
}

class rgtr : public QDialog
{
    Q_OBJECT

public:
    explicit rgtr(QWidget *parent = nullptr);
    ~rgtr();
    int m_back_to_which_dialog;
    bool m_show_child;
    void close_child();

protected:
void closeEvent(QCloseEvent *);

signals:
void close_me();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::rgtr *ui;

};
using namespace std;

void readMAX();
void writeMAX(int& MAX);
struct User
{
    int userID;
    float Balance;
    int Points;
    string FirstName;
    string UserName;
    string LastName;
    string Password;
    User *next;
};



class User_list {
private:
        User *head, *tail;
public:

    string Login(QString username, QString password);
    void Register(QString username, QString password, QString firstname, QString lastname);
    void addrating();
    User_list();
    User_list(QString username, QString password, QString firstname, QString lastname/*, Card card*/);


};
void saveaccount(string newusername, string newpassword, string firstname, string lastname, int& MAX);
void readaccounts();

#endif // RGTR_H
