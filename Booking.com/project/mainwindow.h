#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"ticket1.h"
#include <QMainWindow>
#include"map1.h"
#include "userpage.h"
#include "userlogined2.h"
#include"transportation1.h"
#include "hotelres2.h"
#include"plane1.h"
#include"cruise1.h"
#include<QDebug>
#include "payment.h"
#include "creditcard.h"
#include "date_time.h"
#include"planes.h"
#include"testtt.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    bool mod=false;
    void mainFunction();
    Date_Time* gettime();
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Date_Time*totalday=nullptr;
    ticket1*ticket=nullptr;
    cruise1*boat=nullptr;
    Plane1*plane=nullptr;
    Plane1*plane2=nullptr;
    planes* flights=nullptr;
    testtt* test=nullptr;
    hotelres2* hotel=nullptr;
    Transportation1*trans=nullptr;
    payment*pay=nullptr;
    creditcard*card=nullptr;
Map1*map=nullptr;
userpage*userentry=nullptr;
userlogined2*userentered=nullptr;
Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
