#ifndef DATE_TIME_H
#define DATE_TIME_H

#include <sstream>
#include <iostream>
#include <QDialog>
using namespace std;
namespace Ui {
class Date_Time;
}

class Date_Time : public QDialog
{
    Q_OBJECT

public:    
    int totaldays = 0;
    int dept_day = 0, arr_day = 0, dept_month = 0, arr_month = 0, dept_year= 0;
    explicit Date_Time(QWidget *parent = nullptr);
    ~Date_Time();
    void convert_days(string days,string days1, string month, string month1);
    void calculate_days(int day, int day1, int month, int month1);
    int returntotal();

private slots:
    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::Date_Time *ui;
};

#endif // DATE_TIME_H
