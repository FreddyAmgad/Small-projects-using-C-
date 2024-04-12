#ifndef PLANE2_H
#define PLANE2_H

#include <QDialog>
#include"transportation1.h"

namespace Ui {
class plane2;
}

class plane2 :public Transportation1
{
    Q_OBJECT

public:
    plane2();
        int* getSeats();
        bool* getEmpty();
        void TakeDetails(QString type);
        bool* FindEmpty();
        void Reserve();
        float CalculatePrice();
    explicit plane2(QWidget *parent = nullptr);
    ~plane2();

private:
        int Seat;
            int Seats[10];
            bool Empty[10];
    Ui::plane2 *ui;
};

#endif // PLANE2_H
