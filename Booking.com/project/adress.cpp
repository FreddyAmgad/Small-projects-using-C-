#include "adress.h"

#include<QDebug>
void city::setName(string name)
{
    this->cityName = name;
}
string city::getName()
{
    return cityName;
}
void	city::KnowTheSizeOfArray()
{
    return;
}
void city::fillingTheArray()
{

}
void country::setName(string name)
    {
        this->countryName = name;
    }
    string country::getName()
    {
        return countryName;
    }
    void country::KnowTheSizeOfArray()
    {
        ifstream read; int counter = 0; string line;
        read.open("countries and cities.txt");
        if (read.fail())
        {
            cout << "FAILED TO OPEN COUNTRIES FILE" << endl;
            exit(1);
        }
        while (getline(read, line))
        {
            counter++;
        }
        read.close();
        sizeOfTheArray = counter;
        return;
    }
    void country::fillingTheArray()
    {
        qDebug()<<"HEre1";
        KnowTheSizeOfArray();
        qDebug()<<"HEre2";

        ifstream read;
        read.open("countries and cities.txt");
        qDebug()<<"HEre3";

        if (read.fail())
        {
            qDebug()<<"HEre4";

            cout << "FAILED TO OPEN COUNTRIES FILE" << endl;
            exit(1);
        }
        qDebug()<<"HEre5";

        arrayOfCountries = new country[sizeOfTheArray];
        string token; int index = 0; int cityIndex = 0;
        while (!read.eof())
        {            qDebug()<<"HEre6";


            for (int i = 0; i < 3; i++)
            {
                switch (i)
                {
                case 0:
                    getline(read, token, ':');
                    arrayOfCountries[index].setName(token);
                    break;
                case 1:
                    getline(read, token, ':');
                    cityIndex = (i - 1);
                    arrayOfCountries[index].arraOfCities[cityIndex].setName(token);
                    break;
                case 2:
                    getline(read, token, '\n');
                    cityIndex = (i - 1);
                    arrayOfCountries[index].arraOfCities[cityIndex].setName(token);
                    break;
                default:
                    cout << "WRONG IN ASSIGNING CITY AND COUNTRY !!" << endl;
                    exit(1);
                    break;
                }

            }
            index++;
        }
        read.close();
        return ;
    }
country*country::getArray()
{
    return arrayOfCountries;
}
