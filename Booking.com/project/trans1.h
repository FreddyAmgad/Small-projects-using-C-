#ifndef TRANS1_H
#define TRANS1_H
#include<QDialog>
#include"class1.h"
#include<date_time.h>

class Country
{
    QString NameOfCountry;
public :
    void setCountry(QString name)
    {
        this->NameOfCountry=name;
    }
    QString getCountry()
    {
        return NameOfCountry;
    }
};
class trans1{
public:
    void setType(QString );
    QString getType();
        void setStart(QString);
        void setEnd(QString);
        void setPrice(float);
        void setIndv(int);
        void setDistance(float);
        Country getStart();
        Country getEnd();
        float getPrice();
        int getIndv();
        float getDistance();
        virtual bool* FindEmpty();
        virtual void Reserve();
        virtual bool IsEmpty();
        virtual double CalculatePrice();
        virtual void Print();
protected:
    Country Start;
    Country End;
    Date_Time time;
    double Price;
    int IndvidualsNo;
    float Distance;
    QString Type;
    float ExtraFee;
    First first;
    Business business;
    Economy economy;
};


#endif // TRANS1_H
