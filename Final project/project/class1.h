#ifndef CLASS1_H
#define CLASS1_H

#include<iostream>
#include<string>
using namespace std;
class class1
{
protected:
    bool FreeWifi, MassageChair;
        float ExtraFee;
        string Type;
public:
    class1();
        void setFreeWifi(bool);
        void setMassageChair(bool);
        void setType(string);
        bool getFreeWifi();
        bool getMassageChair();
        float getExtraFee();
        string getType();
};
class First :public class1 {
public:
    First();
};

class Business :public class1 {
public:

    Business();
};

class Economy :public class1 {
public:
    Economy();
};
#endif // CLASS1_H
