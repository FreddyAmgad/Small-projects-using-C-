#ifndef CRUISE1_H
#define CRUISE1_H
#include<trans1.h>
#include <QDialog>

namespace Ui {
class cruise1;
}

class cruise1 : public QDialog, public trans1
{
    Q_OBJECT

public:
    void setPrice(float p);
    void setRoom(int number);
        void setDistance(float);
        int* getRooms();
        bool* getEmpty();
        void TakeDetails(QString n);
        bool* FindEmpty();
        void Reserve();
        double CalculatePrice();
    explicit cruise1(QWidget *parent = nullptr);
    ~cruise1();

private slots:

        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

private:
    float Distance;
        int RoomNo;
        int Room;
        int Rooms[100];
        bool Empty[100];
    Ui::cruise1 *ui;
};

#endif // CRUISE1_H
