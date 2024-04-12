#ifndef ADRESS_H
#define ADRESS_H
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class adress
{
public:
    adress();
};class address
{
protected:
    int sizeOfTheArray;
public:
    void virtual KnowTheSizeOfArray() = 0;
    void virtual fillingTheArray() = 0;
};
class city : public address
{
    string cityName;
public:

    void setName(string name);
        string getName();
        void	KnowTheSizeOfArray();
        void fillingTheArray();
};
class country :public address
{
    country* arrayOfCountries;
    string countryName;
    city arraOfCities[2];


public:
    void setName(string name);

    string getName();

    void KnowTheSizeOfArray();

    void fillingTheArray();
country*getArray();

};


#endif // ADRESS_H
