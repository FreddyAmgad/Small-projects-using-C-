#include "userlogined2.h"
#include "ui_userlogined2.h"
int MAX3;
User_list newUser2;
vector<string> usedusername2, usedpassword2, first_name2, last_name2;
userlogined2::userlogined2(QWidget *parent,QString curuser) :
    QDialog(parent),
    ui(new Ui::userlogined2),cur_user1(curuser.toStdString())
{
    ui->setupUi(this);
    ui->label_20->setText(curuser);
    string points2;
    points=paymentfile2(curuser.toStdString() ,points2);
    if(points!=""){

    ui->label_3->setText( QString::fromStdString(points));
    }
    else{
        ui->label_3->setText("0");
    }
}

userlogined2::~userlogined2()
{
    delete ui;
}
string paymentfile2(string name, string points) {
    ifstream read;
    read.open("points.txt");
    if(read.is_open()){
    while(!read.eof()){
    read >> name >> points;
    }
    }

    return points;
}
void readaccounts2()
{
    ifstream read;
    read.open("users.dat");
string temp1,temp2,temp3,temp4;
    if (read.is_open())
    {
        for (int i = 0; i < MAX3; i++)
        {
            read >>temp1 >> temp2>>temp3>>temp4;
            usedusername2.push_back(temp1);
            usedpassword2.push_back(temp2);
            first_name2.push_back(temp3);
            last_name2.push_back(temp4);
        }
    }
}
void readMAX3()
{
    ifstream read;
    read.open("MAX.dat");
    if (read.is_open())
    {
        read >> MAX3;
    }
    read.close();
}


void savenewpassword(string username, string newpassword)
{
    readMAX3();
    readaccounts2();
    ofstream write;
    write.open("users.dat");
    if (write.is_open())
    {
        for(int j=0; j<usedusername2.size() ; j++)
        {
            if(username!=usedusername2[j])
            {
        write << usedusername2[j] << endl << usedpassword2[j]  << endl<<first_name2[j] <<endl<<last_name2[j] <<endl;
            }
            if(username==usedusername2[j])
            {
        write << usedusername2[j] << endl << newpassword  << endl<<first_name2[j] <<endl<<last_name2[j] <<endl;
            }
        }
    }
    usedusername2.clear();
    usedpassword2.clear();
    first_name2.clear();
    last_name2.clear();
    readaccounts2();
}

void savenewname(string user, string first, string last)
{
    readMAX3();
    readaccounts2();
    ofstream write;
    write.open("users.dat");
    if (write.is_open())
    {
        for(int j=0; j<usedusername2.size() ; j++)
        {
            if(user!=usedusername2[j])
            {
        write << usedusername2[j] << endl << usedpassword2[j]  << endl<<first_name2[j] <<endl<<last_name2[j] <<endl;
            }
            if(user==usedusername2[j])
            {
        write << usedusername2[j] << endl << usedpassword2[j]  << endl<< first <<endl<< last <<endl;
            }
        }
    }
    usedusername2.clear();
    usedpassword2.clear();
    first_name2.clear();
    last_name2.clear();
    readaccounts2();
}

void userlogined2::on_pushButton_7_clicked()
{
        flight=true;
        this->hide();

}

void userlogined2::on_pushButton_8_clicked()
{

    cruise=true;
    this->hide();
}

void userlogined2::on_pushButton_6_clicked()
{
        QString newfirstname = ui->lineEdit_7->text();
        QString newlastname = ui->lineEdit_8->text();
        if(newfirstname=="" && newlastname=="")
        {
           ui->label_18->setText("Error.");
        }
        else{
            savenewname(cur_user1, newfirstname.toStdString(),newlastname.toStdString());
            ui->label_18->setText("Information Updated.");
        }


}

void userlogined2::on_pushButton_5_clicked()
{
    QString newpass = ui->lineEdit_5->text();
    QString newpassconfirm = ui->lineEdit_6->text();
    if(newpass==newpassconfirm && newpass!=""){
        savenewpassword(cur_user1, newpass.toStdString());
        ui->label_14->setText("Password Information Updated. Use new password upon next login.");
    }
    else{
    ui->label_14->setText("Password does not match in both cases.");
    }
}
