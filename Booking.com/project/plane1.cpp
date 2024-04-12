#include "plane1.h"
#include "ui_plane1.h"
#include<QDebug>
Plane1::~Plane1()
{
    delete ui;
}
Plane1::Plane1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Plane1){
    ui->setupUi(this);
    QPixmap pix("C:/Users/Youssef Omar/Downloads/imyoussef/plane.jpeg");
    ui->label_2->setPixmap(pix.scaled(500,500,Qt::KeepAspectRatio));
}

void Plane1:: operator=(const Plane1& p){
    Start=p.Start;
    End=p.End;
    Price=p.Price;
    IndvidualsNo=p.IndvidualsNo;
    Distance=p.Distance;
    Type=p.Type;
    ExtraFee=p.ExtraFee;
    first=p.first;
    business=p.business;
    economy=p.economy;
}
int* Plane1::getSeats() {
    int* a = Seats;
    return a;
}

bool Plane1::getoneway(){
    return oneway;
}
void Plane1::setOneWay(bool x){
    oneway=x;
}
bool* Plane1::getEmpty() {
    bool* e = Empty;
    return e;
}

void Plane1::TakeDetails(QString type) {

    if (type == "FIRST")
    {
        ExtraFee = first.getExtraFee();
    }
        else if (type =="BUSSINES")
    {
        ExtraFee = business.getExtraFee();

    }
    else if (type == "ECONOMY")
    {
        ExtraFee = economy.getExtraFee();
    }
}

bool* Plane1::FindEmpty() {
    bool* x;
    for (int i = 0; i < 100; i++) {
        if (Empty[i]) {
            Seat = Seats[i];
            x = &Empty[i];
            return x;
        }
    }
}

void Plane1::Reserve() {
    for (int i = 0; i < IndvidualsNo; i++) {
        bool* x = FindEmpty();
        *x = false;
    }
}

double Plane1::CalculatePrice() {
    Price = Price*Distance * 10 * ExtraFee * IndvidualsNo;   //Km=10EGP
    return Price;
}
void Plane1::setPrice(double p)
{
    this->Price=p;
}

void Plane1::on_pushButton_clicked()
{
    ui->lineEdit->setText(QString::number(getPrice()));

}

void Plane1::on_pushButton_3_clicked()
{
    this->hotel=true;
     this->hide();
}

void Plane1::on_pushButton_2_clicked()
{
    hide();
}
