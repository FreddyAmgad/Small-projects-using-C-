#include "cruise1.h"
#include "ui_cruise1.h"

cruise1::cruise1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cruise1)

{
    ui->setupUi(this);
    Price = 0.0;
    QPixmap pix("C:/Users/Youssef Omar/Downloads/imyoussef/boat.jpeg");
    ui->label_3->setPixmap(pix.scaled(500,500,Qt::KeepAspectRatio));

        //Departure.Day = 01;
        //Departure.Month = 01;
       // Departure.Year = 2021;
       // Arrival.Day = 01;
        //Arrival.Month = 01;
       // Arrival.Year = 2021;
        IndvidualsNo = 0;
        Distance = 0;
     //   TimeofDeparture.Hour = 00;
      //  TimeofDeparture.Minute = 00;
      //  TimeofArrival.Hour = 00;
       // TimeofArrival.Minute = 00;
        RoomNo = 0;
        Type = " ";
        ExtraFee = 1;
        Room = 0;
        int s = 1000;
        for (int i = 0; i < 100; i++) {
            Rooms[i] = s;
            s++;
            Empty[i] = true;
        }

}

cruise1::~cruise1()
{
    delete ui;
}
void cruise1::setDistance(float d) {
    Distance = d;
}
int* cruise1::getRooms() {
    int* a = Rooms;
    return a;
}

bool* cruise1::getEmpty() {
    bool* e = Empty;
    return e;
}

void cruise1::TakeDetails(QString type) {

    if (type == "First" || type == "first")
        ExtraFee = first.getExtraFee();
    else if (type == "Business" || type == "business")
        ExtraFee = business.getExtraFee();
    else if (type == "Economy" || type == "economy")
        ExtraFee = economy.getExtraFee();

}

bool* cruise1::FindEmpty() {
    bool* x;
    for (int i = 0; i < 100; i++) {
        if (Empty[i]) {
            Room = Rooms[i];
            x = &Empty[i];
            return x;
        }
    }
}
void cruise1:: setRoom(int number)
{
    this->RoomNo=number;
}
void cruise1::Reserve() {
    for (int i = 0; i < RoomNo; i++) {
        bool* x = FindEmpty();
        *x = false;
    }
}

double cruise1::CalculatePrice() {
    Price = Distance * 10 * ExtraFee * RoomNo;   //Km=10EGP
    return Price;
}
void cruise1::setPrice(float p)
{
    this->Price=p;
}



void cruise1::on_pushButton_clicked()
{
    setRoom(ui->lineEdit->text().toInt());
CalculatePrice();
}

void cruise1::on_pushButton_2_clicked()
{
    hide();
}
