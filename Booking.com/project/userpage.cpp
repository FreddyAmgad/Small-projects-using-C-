#include "userpage.h"
#include "ui_userpage.h"

#include <cassert>

vector<string> usedusername1, usedpassword1, first_name1, last_name1;
User_list newUser1;
int MAXii;
userpage::userpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userpage),
    m_show_child(true)
{
    ui->setupUi(this);
}

userpage::~userpage()
{
    delete ui;
}
void readMAXii()
{
    ifstream read;
    read.open("MAX.dat");
    if (read.is_open())
    {
        read >> MAXii;
    }
    read.close();
}
void userpage::on_pushButton_clicked()
{


    rgtr d;
    while(d.m_show_child)
    {
        this->hide();
        d.exec();

    }
    if(!d.m_show_child)
    {
        d.close();
    }
    this->show();

}
void userpage::close_child()
{
  m_show_child = false;
}
void userpage::closeEvent(QCloseEvent *)
{
  emit close_me();
}

void userpage::on_button_back_to_first_clicked()
{
  close();
}
string User_list::Login(QString username, QString password)
{
    bool usernameexists=false;
    readMAXii();
    readaccounts1();

    for(int i=0;i<usedusername1.size();i++)
    {

        if(username.toStdString()==usedusername1[i])
        {

            usernameexists=true;
            if(password.toStdString()==usedpassword1[i])
            {
                return "2";
            }
            else
            {
                return "1";
            }
        }
    }
if(!usernameexists){
    return "3";
}
}
void readaccounts1()
{
    ifstream read;
    read.open("users.dat");
string temp1,temp2,temp3,temp4;
    if (read.is_open())
    {
        for (int i = 0; i < MAXii; i++)
        {
            read >>temp1 >> temp2>>temp3>>temp4;
            usedusername1.push_back(temp1);
            usedpassword1.push_back(temp2);
            first_name1.push_back(temp3);
            last_name1.push_back(temp4);
        }
    }
}

void userpage::on_login_clicked()
{
    readMAXii();
    readaccounts1();
    QString username_entered=ui->lineEdit->text();
    QString password_entered=ui->lineEdit_2->text();
    if(newUser1.Login(username_entered,password_entered)=="1"){
        ui->label_4->setText("Wrong Password, Try Again");
    }
    if(newUser1.Login(username_entered,password_entered)=="2"){
        cur_user=username_entered;
        m_show_child=false;
        this->hide();

    }
    if(newUser1.Login(username_entered,password_entered)=="3"){
        ui->label_4->setText("Username Doesn't Exist");
    }
}
