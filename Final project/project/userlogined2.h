#ifndef userlogined2_H
#define userlogined2_H
#include "rgtr.h"
#include <QDialog>
string paymentfile2(string name, string points);
namespace Ui {
class userlogined2;
}

class userlogined2 : public QDialog
{
    Q_OBJECT

public:
    string points="0";
    explicit userlogined2(QWidget *parent = nullptr, QString curuser="");
    ~userlogined2();
    string cur_user1;
    bool cruise,flight;

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::userlogined2 *ui;
};
void readMAX3();
void readaccounts2();
void savenewpassword(string username, string newpassword);
void savenewname(string user, string first, string last);
#endif // userlogined2_H
