#include "payment.h"
#include "ui_payment.h"

payment::payment(QWidget *parent, double totalprice3, QString usern) :
    QDialog(parent),
    ui(new Ui::payment)
{
    userna=usern;
    totalprice20=totalprice3;
    ui->setupUi(this);
}

payment::~payment()
{
    delete ui;
}


void payment::on_pushButton_clicked()
{
    this->cardregisteration1 = true;
    hide();
}

void payment::on_pushButton_2_clicked()
{
    ui->label->setText("Please pay upon arrival");
    ui->label_2->setText("Thank you for choosing us");
}

void payment::calculatepoints() {
    if (totalprice20 > 0 || totalprice20 < 20000) {
        points+=500;
    }
    else if (totalprice20 > 20000) {
        points += 1000;
    }
}
int payment::getpoints() {
    return points;
}

void payment::paymentfile(string name, int points) {
    ofstream pointfile("points.txt", ios::app);
    pointfile << name << endl << points;
}

void payment::on_pushButton_3_clicked()
{
    calculatepoints();
    int points = getpoints();
    paymentfile(userna.toStdString(),points);
    if (totalprice20 < points) {
        ui->label->setText("Payment has been successful by points!");
    }
    else {
        ui->label->setText("You do not have enough points :(");
    }
}
