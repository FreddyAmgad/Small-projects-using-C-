#ifndef CREDITCARD_H
#define CREDITCARD_H

#include <QDialog>
#include <QMessageBox>
#include <payment.h>
#include <string>
#include <fstream>
using namespace std;

struct credit_card {
    int card_num;
    int card_pin;
    int expiry_date;
    credit_card *next;

};

namespace Ui {

class creditcard;
}

class creditcard : public QDialog
{
    Q_OBJECT
public:
    QString user;
    creditcard *card = nullptr;
    bool cardavailable = false;
    bool cardisavailable();
    explicit creditcard(QWidget *parent = nullptr, QString user2="");
    ~creditcard();
    int m_back_to_which_dialog;
    bool m_show_child;
    void close_child();
    void set_card(string card);
    string get_card();
    void set_pin(string pin);
    string get_pin();
    void add_card(string cardholdername, string cardnum, string cardpin, string carddate);
    void read_card();
private:
    Ui::creditcard *ui;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};


#endif

