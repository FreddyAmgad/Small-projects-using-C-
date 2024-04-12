#include "hotelres2.h"
#include "ui_hotelres2.h"
#include <QDebug>
int MAXh;
Hotel hotels[10];
hotelres2::hotelres2(QWidget *parent, QString country1, QString curuser) :
    QDialog(parent),
    ui(new Ui::hotelres2)
{

hoteluser=curuser;
country=country1;

   for(int i=0;i<10;i++){
       if(i==0){
   hotels[i].SetName("Arjaan by Rotana");
   hotels[i].CreateRoom(1,5,125,5);
   hotels[i].CreateRoom(2,6,100,5);
   hotels[i].SetRanking(5);

       }
       if(i==1){
   hotels[i].SetName("4 Season Hotel");
   hotels[i].CreateRoom(1,5,125,5);
   hotels[i].CreateRoom(2,6,100,5);
   hotels[i].SetRanking(5);
       }
       if(i==2){
   hotels[i].SetName("Opp Hotel");
   hotels[i].CreateRoom(1,5,125,5);
   hotels[i].CreateRoom(2,5,100,5);
   hotels[i].SetRanking(5);

       }
       if(i==3){
   hotels[i].SetName("Antica Hotel");
   hotels[i].CreateRoom(1,7,125,5);
   hotels[i].CreateRoom(2,7,100,5);
   hotels[i].SetRanking(5);

       }
       if(i==4){
   hotels[i].SetName("Hayat Hotel");
   hotels[i].CreateRoom(1,4,155,5);
   hotels[i].CreateRoom(2,5,110,5);
   hotels[i].SetRanking(5);

       }
       if(i==5){
   hotels[i].SetName("Tipp Hotel");
   hotels[i].CreateRoom(1,3,135,5);
   hotels[i].CreateRoom(2,4,110,5);
   hotels[i].SetRanking(5);

       }
       if(i==6){
   hotels[i].SetName("Reem Hotel");
   hotels[i].CreateRoom(3,3,135,5);
   hotels[i].CreateRoom(4,4,110,5);
   hotels[i].SetRanking(5);

       }
       if(i==7){
   hotels[i].SetName("Zarif Hotel");
   hotels[i].CreateRoom(1,3,135,5);
   hotels[i].CreateRoom(2,4,110,5);
   hotels[i].SetRanking(4);

       }
       if(i==8){
   hotels[i].SetName("Freddy Hotel");
   hotels[i].CreateRoom(1,3,135,5);
   hotels[i].CreateRoom(2,4,110,5);
   hotels[i].SetRanking(4);

       }
       if(i==9){
   hotels[i].SetName("Youssef Hotel");
   hotels[i].CreateRoom(1,3,135,5);
   hotels[i].CreateRoom(2,4,110,5);
   hotels[i].SetRanking(3);

       }
   }
   readuserhotel();
   QString s,a,p;
    country=country1;
    ui->setupUi(this);
    QPixmap pix2("C:/Users/Youssef Omar/Downloads/imyoussef/hotelpic.jpeg");
    ui->label_2->setPixmap(pix2.scaled(800,800,Qt::KeepAspectRatio));
    if(country1=="Lebanon"){
    ui->comboBox_3->addItem("Arjaan by Rotana");
    ui->comboBox_3->addItem("Reem Hotel");

    }
    else if(country1=="Canada"){

    ui->comboBox_3->addItem("4 Season Hotel");
    ui->comboBox_3->addItem("Zarif Hotel");
    }
    else if(country1=="China"){

    ui->comboBox_3->addItem("Opp Hotel");
    ui->comboBox_3->addItem("Freddy Hotel");
    }
    else if(country1=="Australia"){

    ui->comboBox_3->addItem("Antica Hotel");
    ui->comboBox_3->addItem("Youssef Hotel");
}
    else if(country1=="Egypt"){

    ui->comboBox_3->addItem("Hayat Hotel");
    }
    else if(country1=="Indonesia"){

    ui->comboBox_3->addItem("Tipp Hotel");
    }
    else
    ui->comboBox_3->addItem("Error");
}
double Room::get_price(){
    return this->price;
}
int Room::get_size(){
    return this->size_in_sqm;
}
hotelres2::~hotelres2()
{
    delete ui;
}



void writeMAXh(int& MAXh)
{
    ofstream write;
    write.open("MAXh.dat");
    if (write.is_open())
    {
        write << MAXh;
    }
    write.close();
}
void readMAXh()
{
    ifstream read;
    read.open("MAXh.dat");
    if (read.is_open())
    {
        read >> MAXh;
    }
    read.close();
}
void readuserhotel()
{
    ifstream read;
    read.open("hotelres2.dat");
string temp1,temp2,temp4;
int temp3;
    if (read.is_open())
    {
        for (int i = 0; i < MAXh; i++)
        {
            read >>temp1 >> temp2>>temp3>>temp4;
            if(temp3>0){
            for(int j=0;j<6;j++){
            if(temp2==hotels[j].ShowName()){
                hotels[j].Rooms[temp3].set_reserved();
            }
            }
            }
        }
    }
}
void saveaccount(string username,string hotel, int hotelid, float price)
{
    ofstream write;
    write.open("hotelres2.dat", ios::app);
    if (write.is_open())
    {
        write << username << endl << hotel<<endl<< hotelid<<endl<<price << endl;
    }
    MAXh++;
    writeMAXh(MAXh);
    readuserhotel();
}




const char* Hotel::ShowName() {
    return this->HotelName;
}
int Hotel::ShowRanking() {
    return this->HotelRanking;
}
void Hotel::SetRanking(int ranking) {
    this->HotelRanking=ranking;
}
Hotel::Hotel() {

}
Hotel::Hotel(const char* Hotel_Name, bool swimming_included, bool breakfastincluded) {
    HotelName = Hotel_Name;
    SwimmingPool_Included = swimming_included;
    Breakfast_Included = breakfastincluded;
}

int Hotel::Reserve() {
    for (auto it = Rooms.begin(); it != Rooms.end(); ++it) {
        if (!it->Isreserved())
        {
            it->set_reserved();
            return it->get_roomid();
        }
    }
        return -1;

}
bool Hotel::RoomReserved(int roomid) {

    for (auto it = Rooms.begin(); it != Rooms.end() ; ++it) {
        if (it->get_roomid()==roomid)
        {
            if (it->Isreserved())
            {
                return true;
                break;
            }
            else
            {
                return false;
                break;
            }
        }
    }
    return false;
}

int Room::get_roomid() {
    return RoomId;
}
bool Room::Isreserved() {
    return this->reserved;
}
void Room::set_reserved() {
    this->reserved = true;
}

double Room::CalculatePrice()
{
    return size_in_sqm*price;
}

Room::Room()
{
    RoomId = 0;
    price = 0;
    size_in_sqm = 0;
    roomranking = 0;

}
Room::Room(int Roomid1, double price1, int size, int rating)
{
    RoomId = Roomid1;
    price = price1;
    size_in_sqm = size;
    roomranking = rating;
    reserved = false;
}

void Hotel::CreateRoom(int Roomid, float price, int size, int rating)
{
    Room new_room(Roomid, price, size, rating);
    Rooms.push_back(new_room);

}
float Hotel::Calculate_Price(int RoomId)
{
    auto it = Rooms.begin();
    for (int i=0; it != Rooms.end(); it++, i++)
    {
        if (Rooms[i].get_roomid() == RoomId)
        {
            return Rooms[i].CalculatePrice();
        }
    }
}
void Hotel::SetName(const char* name){
   this->HotelName=name;
}

void hotelres2::on_pushButton_3_clicked()
{
    QString hotelres2= ui->comboBox_3->currentText();
    int j;
    for(int i=0;i<6;i++){
    if(hotelres2.toStdString()==hotels[i].ShowName()){
        j=hotels[i].Reserve();
        saveaccount(hoteluser.toStdString(),hotelres2.toStdString(), j,hotels[i].Rooms[j].CalculatePrice());
    price=hotels[i].Rooms[j].CalculatePrice();
        break;
    }
    }

    this->hide();

    }

void hotelres2::on_pushButton_4_clicked()
{
        this->hide();

}

void hotelres2::on_comboBox_3_currentIndexChanged(int index)
{
    QString s,a,p;
    ui->comboBox_4->clear();
    if(index==0 && (ui->comboBox_3->currentText()==hotels[0].ShowName() ||ui->comboBox_3->currentText()==hotels[1].ShowName()||
                    ui->comboBox_3->currentText()==hotels[2].ShowName()||ui->comboBox_3->currentText()==hotels[3].ShowName()||
                    ui->comboBox_3->currentText()==hotels[4].ShowName()||ui->comboBox_3->currentText()==hotels[5].ShowName())){
        if(ui->comboBox_3->currentText()==hotels[0].ShowName()){
    for(int i=0;i<hotels[0].Rooms.size();i++)
    {

        if(!hotels[0].Rooms[i].Isreserved()){
    s=QString::number(hotels[0].Rooms[i].get_roomid());
    a=QString::number(hotels[0].Rooms[i].get_size());
    p=QString::number(hotels[0].Rooms[i].CalculatePrice());
    ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
        }
    }
    }
        if(ui->comboBox_3->currentText()==hotels[0].ShowName()){
    for(int i=0;i<hotels[0].Rooms.size();i++)
    {

        if(!hotels[0].Rooms[i].Isreserved()){
    s=QString::number(hotels[0].Rooms[i].get_roomid());
    a=QString::number(hotels[0].Rooms[i].get_size());
    p=QString::number(hotels[0].Rooms[i].CalculatePrice());
    ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
        }
    }
    }
        if(ui->comboBox_3->currentText()==hotels[1].ShowName()){
    for(int i=0;i<hotels[1].Rooms.size();i++)
    {

        if(!hotels[1].Rooms[i].Isreserved()){
    s=QString::number(hotels[1].Rooms[i].get_roomid());
    a=QString::number(hotels[1].Rooms[i].get_size());
    p=QString::number(hotels[1].Rooms[i].CalculatePrice());
    ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
        }
    }
    }
        if(ui->comboBox_3->currentText()==hotels[2].ShowName()){
    for(int i=0;i<hotels[2].Rooms.size();i++)
    {

        if(!hotels[2].Rooms[i].Isreserved()){
    s=QString::number(hotels[2].Rooms[i].get_roomid());
    a=QString::number(hotels[2].Rooms[i].get_size());
    p=QString::number(hotels[2].Rooms[i].CalculatePrice());
    ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
        }
    }
    }
        if(ui->comboBox_3->currentText()==hotels[3].ShowName()){
    for(int i=0;i<hotels[3].Rooms.size();i++)
    {

        if(!hotels[3].Rooms[i].Isreserved()){
    s=QString::number(hotels[3].Rooms[i].get_roomid());
    a=QString::number(hotels[3].Rooms[i].get_size());
    p=QString::number(hotels[3].Rooms[i].CalculatePrice());
    ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
        }
    }
    }
        if(ui->comboBox_3->currentText()==hotels[4].ShowName()){
    for(int i=0;i<hotels[4].Rooms.size();i++)
    {

        if(!hotels[4].Rooms[i].Isreserved()){
    s=QString::number(hotels[4].Rooms[i].get_roomid());
    a=QString::number(hotels[4].Rooms[i].get_size());
    p=QString::number(hotels[4].Rooms[i].CalculatePrice());
    ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
        }
    }
    }
        if(ui->comboBox_3->currentText()==hotels[5].ShowName()){
    for(int i=0;i<hotels[5].Rooms.size();i++)
    {

        if(!hotels[5].Rooms[i].Isreserved()){
    s=QString::number(hotels[5].Rooms[i].get_roomid());
    a=QString::number(hotels[5].Rooms[i].get_size());
    p=QString::number(hotels[5].Rooms[i].CalculatePrice());
    ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
        }
    }
    }
}
    if(index==1 && (ui->comboBox_3->currentText()==hotels[6].ShowName()||ui->comboBox_3->currentText()==hotels[7].ShowName()||
                    ui->comboBox_3->currentText()==hotels[8].ShowName()||ui->comboBox_3->currentText()==hotels[9].ShowName())){
    if(ui->comboBox_3->currentText()==hotels[6].ShowName()){
        for(int i=0;i<hotels[6].Rooms.size();i++)
        {

            if(!hotels[6].Rooms[i].Isreserved()){
        s=QString::number(hotels[6].Rooms[i].get_roomid());
        a=QString::number(hotels[6].Rooms[i].get_size());
        p=QString::number(hotels[6].Rooms[i].CalculatePrice());
        ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
            }
        }
        }
    if(ui->comboBox_3->currentText()==hotels[7].ShowName()){
for(int i=0;i<hotels[7].Rooms.size();i++)
{

    if(!hotels[7].Rooms[i].Isreserved()){
s=QString::number(hotels[7].Rooms[i].get_roomid());
a=QString::number(hotels[7].Rooms[i].get_size());
p=QString::number(hotels[7].Rooms[i].CalculatePrice());
ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
    }
}
}
    if(ui->comboBox_3->currentText()==hotels[8].ShowName()){
for(int i=0;i<hotels[8].Rooms.size();i++)
{

    if(!hotels[8].Rooms[i].Isreserved()){
s=QString::number(hotels[8].Rooms[i].get_roomid());
a=QString::number(hotels[8].Rooms[i].get_size());
p=QString::number(hotels[8].Rooms[i].CalculatePrice());
ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
    }
}
}
    if(ui->comboBox_3->currentText()==hotels[9].ShowName()){
for(int i=0;i<hotels[9].Rooms.size();i++)
{

    if(!hotels[9].Rooms[i].Isreserved()){
s=QString::number(hotels[9].Rooms[i].get_roomid());
a=QString::number(hotels[9].Rooms[i].get_size());
p=QString::number(hotels[9].Rooms[i].CalculatePrice());
ui->comboBox_4->addItem("Room ID: "+ s +" Area: "+a+ " Price: "+p+" $");
    }
}
}
}
}
