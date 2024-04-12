#ifndef HOTELRES2_H
#define HOTELRES2_H
#include <QString>
#include <fstream>
#include <iostream>
#include <vector>
#include <QDialog>
using namespace std;
class Room
{
private:

    int RoomId;
    double price;
    int size_in_sqm;
    int roomranking;
    bool reserved;
public:
    Room();
    Room(int Roomid, double price, int size, int rating);
    int get_roomid();
    double get_price();
    int get_size();
    bool Isreserved();
    void set_reserved();
    double CalculatePrice();
};



class Hotel
{
private:
    const char* HotelName;
    int HotelRanking;
    bool Breakfast_Included;
    bool SwimmingPool_Included;

public:
    vector<Room> Rooms;
    const char* ShowName();
    void SetName(const char* name);
    int ShowRanking();
    void SetRanking(int ranking);
    Hotel();
    Hotel(const char* Hotel_Name, bool swimming_included, bool breakfastincluded);
    int Reserve();
    bool RoomReserved(int roomid);
    void CreateRoom(int Roomid, float price, int size, int rating);
    float Calculate_Price(int RoomId);
};

namespace Ui {
class hotelres2;
}

class hotelres2 : public QDialog
{
    Q_OBJECT

public:
    float price;
        explicit hotelres2(QWidget *parent = nullptr, QString place="", QString curuser="");
        ~hotelres2();
        QString country;
    QString hoteluser;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_comboBox_3_currentIndexChanged(int index);

private:
    Ui::hotelres2 *ui;
};
void readMAXh();
void writeMAXh(int& MAXh);

void saveaccount(string username,string hotelres, int hotelid);
void readuserhotel();
#endif // HOTELRES2_H
