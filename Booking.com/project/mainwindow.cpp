#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Youssef Omar/Downloads/imyoussef/welcome.jpeg");
    ui->label->setPixmap(pix.scaled(500,500,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mainFunction()
{
    qDebug()<<"ZIZI 3";
    userentered->flight=false;
    userentered->cruise=false;
   //  pay->cardregisteration1=false;
    // this->hide();
     qDebug()<<"ZIZI 4";
     userentry=new userpage(this);
     userentry->setModal(true);
     userentry->exec();
     cout<<userentry->m_show_child;
 if(!userentry->m_show_child)
 {
     qDebug()<<"ZIZI 5";
     QString curuser=userentry->cur_user;
     userentered=new userlogined2(this,curuser);
     userentered->setModal(true);
     userentered->exec();
     totalday= new Date_Time(this);
     totalday->setModal(true);
     totalday->exec();
     if(userentered->flight)
     {
     map=new Map1(this);
     map->setModal(true);
     map->exec();
     trans =new Transportation1(this);
     trans->setStart(map->returnStart());
     trans->setEnd(map->returnEnd());
     trans->setDistance(map->getDistance());
     trans->setModal(true);
     trans->exec();
     flights=new planes(this);
     flights->start=map->returnStart();
     flights->end=map->returnEnd();
     flights->showtext();
     flights->setModal(true);
     flights->exec();
      plane=flights->myflight();
      plane->TakeDetails(trans->getType());
      plane->setIndv(trans->getIndv());
      plane->setDistance(map->getDistance());
      plane->setPrice(plane->CalculatePrice());
      plane->Reserve();
      plane->setModal(true);
      plane->exec();
         if(plane->hotel)
         {
         hotel=new hotelres2(this,map->countries,curuser);
         hotel->setModal(true);
         hotel->exec();
         ticket=new ticket1(this);
         ticket->setPrice(plane->getPrice()+hotel->price*totalday->returntotal());
         ticket->setIndvidualsNo(trans->getIndv());
         ticket->setModal(true);
         ticket->exec();
         qDebug()<<"ZIZI";
      //   if(ticket->modify)
       //   {
        //     qDebug()<<"ZIZI2";
        //     mod=true;
         //    return;
         //}
         pay = new payment(this,(plane->getPrice()+hotel->price*totalday->returntotal()),curuser);
         pay->setModal(true);
         pay->exec();
         if (pay->cardregisteration1 == true) {
             card = new creditcard(this, curuser);
             card->setModal(true);
             card->exec();

         }


         }


     }
     else if (userentered->cruise)
     {
         map=new Map1(this);
         map->setModal(true);
         map->exec();
         trans =new Transportation1(this);
         trans->setStart(map->returnStart());
         trans->setEnd(map->returnEnd());
         trans->setDistance(map->getDistance());
         trans->setModal(true);
         trans->exec();
         boat=new cruise1(this);
         boat->TakeDetails(trans->getType());
             boat->setIndv(trans->getIndv());
             boat->setDistance(map->getDistance());
             float number=boat->CalculatePrice();
            boat->Reserve();
             boat->setPrice(number);
             boat->setModal(true);
             boat->exec();
             ticket=new ticket1(this);
             ticket->setPrice(boat->getPrice()*totalday->returntotal());
             ticket->setIndvidualsNo(trans->getIndv());
             ticket->setModal(true);
             ticket->exec();
    //         if(ticket->modify)
    //          {
    //             mod=true;
     //            return;
      //       }
             pay = new payment(this,(plane->getPrice()+hotel->price*totalday->returntotal()),curuser);
             pay->setModal(true);
             pay->exec();
             if (pay->cardregisteration1 == true) {
                 card = new creditcard(this, curuser);
                 card->setModal(true);
                 card->exec();
 }

 }
 }
}
Date_Time* MainWindow::gettime(){
    return totalday;
}

void MainWindow::on_pushButton_clicked()
{
    this->hide();
    userentry=new userpage(this);
    userentry->setModal(true);
    userentry->exec();
    cout<<userentry->m_show_child;
if(!userentry->m_show_child)
{
    QString curuser=userentry->cur_user;
    userentered=new userlogined2(this,curuser);
    userentered->setModal(true);
    userentered->exec();
    totalday= new Date_Time(this);
    totalday->setModal(true);
    totalday->exec();
    if(userentered->flight)
    {
    map=new Map1(this);
    map->setModal(true);
    map->exec();
    trans =new Transportation1(this);
    trans->setStart(map->returnStart());
    trans->setEnd(map->returnEnd());
    trans->setDistance(map->getDistance());
    trans->setModal(true);
    trans->exec();
    flights=new planes(this);
    flights->start=map->returnStart();
    flights->end=map->returnEnd();
    flights->showtext();
    flights->setModal(true);
    flights->exec();
     plane=flights->myflight();
     plane->TakeDetails(trans->getType());
     plane->setIndv(trans->getIndv());
     plane->setDistance(map->getDistance());
     plane->setPrice(plane->CalculatePrice());
     plane->Reserve();
     plane->setModal(true);
     plane->exec();
        if(plane->hotel)
        {
        hotel=new hotelres2(this,map->countries,curuser);
        hotel->setModal(true);
        hotel->exec();
        ticket=new ticket1(this);
        ticket->setPrice(plane->getPrice()+hotel->price*totalday->returntotal());
        ticket->setIndvidualsNo(trans->getIndv());
        ticket->setModal(true);
        ticket->exec();
        qDebug()<<"ZIZI";
        if(ticket->modify)
         {
            qDebug()<<"ZIZI2";
            mainFunction();
        }
        pay = new payment(this,(plane->getPrice()+hotel->price*totalday->returntotal()),curuser);
        pay->setModal(true);
        pay->exec();
        if (pay->cardregisteration1 == true) {
            card = new creditcard(this, curuser);
            card->setModal(true);
            card->exec();

        }


        }


    }
    else if (userentered->cruise)
    {
        map=new Map1(this);
        map->setModal(true);
        map->exec();
        trans =new Transportation1(this);
        trans->setStart(map->returnStart());
        trans->setEnd(map->returnEnd());
        trans->setDistance(map->getDistance());
        trans->setModal(true);
        trans->exec();
        boat=new cruise1(this);
        boat->TakeDetails(trans->getType());
            boat->setIndv(trans->getIndv());
            boat->setDistance(map->getDistance());
            float number=boat->CalculatePrice();
           boat->Reserve();
            boat->setPrice(number);
            boat->setModal(true);
            boat->exec();
            ticket=new ticket1(this);
            ticket->setPrice(boat->getPrice()*totalday->returntotal());
            ticket->setIndvidualsNo(trans->getIndv());
            ticket->setModal(true);
            ticket->exec();
            if(ticket->modify)
             {
                mainFunction();

            }

            pay = new payment(this,(plane->getPrice()+hotel->price*totalday->returntotal()),curuser);
            pay->setModal(true);
            pay->exec();
            if (pay->cardregisteration1 == true) {
                card = new creditcard(this, curuser);
                card->setModal(true);
                card->exec();
}

}
}

}
