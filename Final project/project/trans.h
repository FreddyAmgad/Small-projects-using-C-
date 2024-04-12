#ifndef TRANS_H
#define TRANS_H
#include<iostream>
#include<string>
using namespace std;
class Country
{
    string NameOfCountry;
public :
    void setCountry(string name)
    {
        this->NameOfCountry=name;
    }
    string getCountry()
    {
        return NameOfCountry;
    }
};
class trans
{
public:
    void setType(string );
    string getType();
        void setStart(string);
        void setEnd(string);
        void setPrice(float);
        //void setDep(Date);
        //void setArrival(Date);
        void setIndv(int);
        void setDistance(float);
        //void setTimeDep(Time);
        //void setTimeArrival(Time);
        Country getStart();
        Country getEnd();
        float getPrice();
       // Date getDep();
       // Date getArrival();
        int getIndv();
        float getDistance();
      //  Time getTimeDep();
      //  Time getTimeArrival();
        virtual bool* FindEmpty();
        virtual void Reserve();
        virtual bool IsEmpty();
        virtual float CalculatePrice();
        virtual void Print();
    trans();
};

#endif // TRANS_H
