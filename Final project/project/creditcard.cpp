#include "creditcard.h"
#include "ui_creditcard.h"


creditcard::creditcard(QWidget *parent, QString user2) :
    QDialog(parent),
    ui(new Ui::creditcard)
{
    user=user2;
    ui->setupUi(this);
}
creditcard::~creditcard()
{
    delete ui;
}


void creditcard::add_card(string cardholdername, string cardnum, string cardpin, string cardexpiry) {
ofstream card_input("cards.txt", ios::app);
card_input  << cardholdername << endl << cardnum << endl << cardpin << endl << cardexpiry << endl;
card_input.close();
}

bool creditcard::cardisavailable() {
    string getinfo;
    ifstream check("cards.txt");
    while(getline(check, getinfo)) {
        if (user.toStdString() == getinfo) {
            cardavailable = true;
            return true;
        }
    }
}
void creditcard::on_pushButton_clicked()
{

    if (cardavailable == true) {
        ui->label_2->setText("Payment has been completed");
    }
    else {
        ui->label_2->setText("Please enter a credit card in order to pay.");
    }

}

void creditcard::on_pushButton_2_clicked()
{
    QString cardholdername_entered=ui->lineEdit->text();
    QString cardnum_entered=ui->lineEdit_2->text();
    QString cardpin_entered = ui->lineEdit_3->text();
    QString cardexpiry_entered=ui->lineEdit_4->text();

    if (cardnum_entered != "") {
        add_card(cardholdername_entered.toStdString(), cardnum_entered.toStdString() , cardpin_entered.toStdString(), cardexpiry_entered.toStdString());
        cardisavailable();
        ui->label_2->setText("Credit card has been registered");
        ui->label_9->setText("Your payment has been sucessful!");
    }
    else {
        ui->label_2->setText("Your card is already registered");
    }
}

