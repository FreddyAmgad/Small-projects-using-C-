#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>
#include <iostream>
#include <fstream>

using namespace std;

namespace Ui {
class payment;
}

class payment : public QDialog
{
    Q_OBJECT

public:
    QString userna;
    int points = 0;
    double totalprice20;
    void calculatepoints();
    int getpoints();
    payment();
    payment(string Name, double amount, int method);
    explicit payment(QWidget *parent = nullptr, double totalprice3=0, QString usern="");
    ~payment();
    void paymentfile(string name, int poitns);
    bool cardregisteration1 = false;
    bool cashpayment = false;
    bool pointspayment = false;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::payment *ui;
};

struct Payment {
    float balance;
    float credit;
    int method;
};


#endif // PAYMENT_H

