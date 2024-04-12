#include "ticket1.h"
#include "ui_ticket1.h"

#include<cstdlib>
#include<sstream>
using namespace std;
ticket1::ticket1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ticket1)
{
    ui->setupUi(this);
    srand(time(NULL));
    int ticket = rand() % 99999999 + 100001;
    TicketNo= QString::number(ticket);
    //Departure.Day = 01;
    //Departure.Month = 01;
    //Departure.Year = 2000;
    IndvidualsNo = 0;
    Price = 0;
//	Return.Day = 01;
//	Return.Month = 01;
//	Return.Year = 2000;
}

ticket1::~ticket1()
{
    delete ui;
}

//void ticket1::setDeparture(Date x) {
//	Departure.Day = x.Day;
//	Departure.Month = x.Month;
//	Departure.Year = x.Year;
//}

//void ticket1::setReturn(Date x) {
//	Return.Day = x.Day;
//	Return.Month = x.Month;
//	Return.Year = x.Year;
//}

void ticket1::setIndvidualsNo(int x) {
    IndvidualsNo = x;
}

void ticket1::setPrice(double p) {
    Price = p;
}

//string ticket1::getTicketNo() {
    //return TicketNo;
//}

//Date ticket1::getDeparture() {
//	return Departure;
//}

//Date ticket1::getReturn() {
//	return Return;
//}

int ticket1::getIndvidualsNo() {
    return IndvidualsNo;
}

double ticket1::getPrice() {
    return Price;
}
void ticket1::on_pushButton_clicked()
{
    ui->lineEdit->setText(QString::number(getIndvidualsNo()));
    ui->lineEdit_2->setText(QString::number(getPrice()));
    ui->lineEdit_3->setText(TicketNo);
}

void ticket1::on_pushButton_2_clicked()
{
    exit(1);
}


void ticket1::on_pushButton_4_clicked()
{
    hide();
}

void ticket1::on_pushButton_3_clicked()
{
    this->modify=true;
hide();
}
