#ifndef PLANE1_H
#define PLANE1_H

#include <QDialog>
#include"trans1.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Plane1;
}
QT_END_NAMESPACE

class Plane1 :public QDialog,public trans1
{
    Q_OBJECT

public:
bool hotel=false;
 void operator=(const Plane1& p);
    void setPrice(double p);
    void setOneWay(bool);
    bool getoneway();
        int* getSeats();
        bool* getEmpty();
        void TakeDetails(QString type);
        bool* FindEmpty();
        void Reserve();
        double CalculatePrice();
    explicit Plane1(QWidget *parent = nullptr);
    ~Plane1();

private slots:


        void on_pushButton_clicked();

        void on_pushButton_3_clicked();

        void on_pushButton_2_clicked();

private:
    int Seat;
    bool oneway;
        int Seats[10];
        bool Empty[10];

    Ui::Plane1 *ui;
};

#endif // PLANE1_H
