#include "rgtr.h"
#include "ui_rgtr.h"

bool usernameexists=false;
int MINi;
int MAXi;
User_list newUser;
vector<string> usedusername, usedpassword, first_name, last_name;
void writeMAX(int& MAXi)
{
    ofstream write;
    write.open("MAX.dat");
    if (write.is_open())
    {
        write << MAXi;
    }
    write.close();
}
void readMAX()
{
    ifstream read;
    read.open("MAX.dat");
    if (read.is_open())
    {
        read >> MAXi;
    }
    read.close();
}
void readaccounts()
{
    ifstream read;
    read.open("users.dat");
string temp1,temp2,temp3,temp4;
    if (read.is_open())
    {
        for (int i = 0; i < MAXi; i++)
        {
            read >>temp1 >> temp2>>temp3>>temp4;
            usedusername.push_back(temp1);
            usedpassword.push_back(temp2);
            first_name.push_back(temp3);
            last_name.push_back(temp4);
        }
    }
}


void User_list::Register(QString username, QString password, QString firstname, QString lastname)
{

    usernameexists=false;
    readMAX();
    readaccounts();

    for(int i=0;i<usedusername.size();i++)
    {

        if(username.toStdString()==usedusername[i])
        {

            usernameexists=true;
            break;
        }
        else
        {

        }
    }
if(!usernameexists){
    saveaccount( username.toStdString(),  password.toStdString(), firstname.toStdString(),lastname.toStdString(), MAXi);
}
}
void saveaccount(string newusername, string newpassword , string firstname, string lastname, int& MAXi)
{
    ofstream write;
    write.open("users.dat", ios::app);
    if (write.is_open())
    {
        write << newusername << endl << newpassword << endl<<firstname<<endl<<lastname<<endl;
    }
    MAXi += 1;
    writeMAX(MAXi);
    readaccounts();
}
User_list::User_list()
{
}

User_list::User_list(QString username, QString password, QString firstname, QString lastname /*,Card card*/)
{
    User *temp=new User;
    string usernametoregister=username.toStdString();
                temp->UserName=usernametoregister;
                temp->Password=password.toStdString();
                temp->FirstName=firstname.toStdString();
                temp->LastName=lastname.toStdString();
                temp->userID=MAXi;
               // temp->UserName=card.toStdString();
                temp->next=NULL;
                if(head==NULL)
                {
                    head=temp;
                    tail=temp;
                    temp=NULL;
                }
                else
                {
                    tail->next=temp;
                    tail=temp;
                }
   // Balance = 0.0;
   // Points = 0.0;
   // userID = ++;


}

rgtr::rgtr(QWidget *parent) :
    QDialog(parent),
    m_back_to_which_dialog(2),ui(new Ui::rgtr),m_show_child(true)
{
    ui->setupUi(this);

}

rgtr::~rgtr()
{
    delete ui;
}

void rgtr::on_pushButton_2_clicked()
{
    m_show_child=false;
    hide();

}
void rgtr::closeEvent(QCloseEvent *)
{
  emit close_me();
}
void rgtr::close_child()
{
  m_show_child = false;
}


void rgtr::on_pushButton_3_clicked()
{
    QString username_entered =ui->lineEdit_4->text();
    QString password_entered = ui->lineEdit_3->text();
    QString first_name_entered=ui->lineEdit_7->text();
    QString last_name_entered=ui->lineEdit_5->text();
    if(username_entered!=""){
  newUser.Register(username_entered,password_entered,first_name_entered,last_name_entered);
    }
    if(username_entered!=""){
  newUser.Register(username_entered,password_entered,first_name_entered,last_name_entered);

  if(usernameexists)
  {
      ui->label_2->setText("Registered Successfully");
  }
  else
  {
      ui->label_2->setText("Registered Successfully");
  }
    }
    else
    {
      ui->label_2->setText("Please Fill Out the Required Information");
    }
}
