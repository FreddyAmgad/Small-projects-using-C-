#ifndef TICKET1_H
#define TICKET1_H

#include <QDialog>

namespace Ui {
class ticket1;
}

class ticket1 : public QDialog
{
    Q_OBJECT

public:
    bool cancel=false;
    bool modify=false;
       // void setDeparture(Date);
        //void setReturn(Date);
        void setIndvidualsNo(int);
        void setPrice(double);;
        QString getTicketNo();
     //   Date getDeparture();
       // Date getReturn();
        int getIndvidualsNo();
        double getPrice();
    explicit ticket1(QWidget *parent = nullptr);
    ~ticket1();

private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();


        void on_pushButton_4_clicked();

        void on_pushButton_3_clicked();

private:
        int IndvidualsNo;
            float Price;
            QString TicketNo;
           // Hotel hotel;
            //Date Departure, Return;
            //Transportation transportation;
    Ui::ticket1 *ui;
};

#endif // TICKET1_H
