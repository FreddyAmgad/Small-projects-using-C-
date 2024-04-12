#include "date_time.h"
#include "ui_date_time.h"

Date_Time::Date_Time(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Date_Time)
{
    ui->setupUi(this);
    for (int i = 1; i < 31; i ++) {
    ui->comboBox->addItem(QString::number(i));
    ui->comboBox_2->addItem(QString::number(i));
    }
    ui->comboBox_3->addItem("January");
    ui->comboBox_5->addItem("January");
    ui->comboBox_3->addItem("February");
    ui->comboBox_5->addItem("February");
    ui->comboBox_3->addItem("March");
    ui->comboBox_5->addItem("March");
    ui->comboBox_3->addItem("April");
    ui->comboBox_5->addItem("April");
    ui->comboBox_3->addItem("May");
    ui->comboBox_5->addItem("May");
    ui->comboBox_3->addItem("June");
    ui->comboBox_5->addItem("June");
    ui->comboBox_3->addItem("July");
    ui->comboBox_5->addItem("July");
    ui->comboBox_3->addItem("August");
    ui->comboBox_5->addItem("August");
    ui->comboBox_3->addItem("Septemper");
    ui->comboBox_5->addItem("Septemper");
    ui->comboBox_3->addItem("October");
    ui->comboBox_5->addItem("October");
    ui->comboBox_3->addItem("November");
    ui->comboBox_5->addItem("November");
    ui->comboBox_3->addItem("December");
    ui->comboBox_5->addItem("December");

    ui->comboBox_4->addItem("2021");
    ui->comboBox_6->addItem("2021");


}

Date_Time::~Date_Time()
{
    delete ui;
}

void Date_Time::convert_days(string day, string day1, string month, string month1) {
    stringstream s1;
    s1 << day;
    s1 >> dept_day;
    stringstream s2;
    s2 << day1;
    s2 >> arr_day;
    if (month == "January" || month1 == "January") {
        dept_month = 1;
        arr_month = 1;
    }
    else if (month == "February"|| month1 =="February") {
        dept_month = 2;
        arr_month = 2;
    }
    else if (month == "March"|| month1 =="March") {
        dept_month = 3;
        arr_month = 3;
    }
    else if (month == "April"|| month1 =="April") {
        dept_month = 4;
        arr_month = 4;
    }
    else if (month == "May"|| month1 =="May") {
        dept_month = 5;
        arr_month = 5;
    }
    else if (month == "June"|| month1 =="June") {
        dept_month = 6;
        arr_month = 6;
    }
    else if (month == "July"|| month1 =="July") {
        dept_month = 7;
        arr_month = 7;
    }
    else if (month == "August"|| month1 =="August") {
        dept_month = 8;
        arr_month = 8;
    }
    else if (month == "September"|| month1 =="September") {
        dept_month = 9;
        arr_month = 9;
    }
    else if (month == "October"|| month1 =="October") {
        dept_month = 10;
        arr_month = 10;
    }
    else if (month == "November"|| month1 =="November") {
        dept_month = 11;
        arr_month = 11;
    }
    else if (month == "December"|| month1 =="December") {
        dept_month = 12;
        arr_month = 12;
    }
}

void Date_Time::calculate_days(int day, int day1, int month, int month1) {
    int newmonth = 0;
    newmonth = (month1-month)*30;
    totaldays = day1-day;
    totaldays += newmonth;
}
int Date_Time::returntotal()
{
    return totaldays;
}

void Date_Time::on_comboBox_activated(const QString &arg1)
{

}
void Date_Time::on_pushButton_clicked()
{
    QString Departure_day = ui->comboBox->currentText();
    QString Arrival_day = ui->comboBox_2->currentText();
    QString Departure_month = ui->comboBox_3->currentText();
    QString Departure_year = ui->comboBox_4->currentText();
    QString Arrival_month = ui->comboBox_5->currentText();
    QString Arrival_year = ui->comboBox_6->currentText();
    convert_days(Departure_day.toStdString(),Arrival_day.toStdString(), Departure_month.toStdString(), Arrival_month.toStdString());
    calculate_days(dept_day,arr_day,dept_month,arr_month);
    this->hide();
}
