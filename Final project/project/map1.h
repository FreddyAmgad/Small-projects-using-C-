#ifndef MAP1_H
#define MAP1_H

#include <QDialog>
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<queue>
#include"adress.h"
using namespace std;
namespace Ui {
class Map1;
}

class Map1 : public QDialog
{
    Q_OBJECT

public:

    int getDistance();
    QString returnStart();
    QString returnEnd();
    void theProgram();
    void SetSourceAndDitination();
    void SetFrom(int,QString);
    void setTo(int,QString);
    int getFrom();
    int getTo();
    int dijkestra(vector<vector<pair<int, int>>>&adjecncyList, int source, int destination);
    void DisplayPath(vector<int>path);
    struct edge;
    void returnPair(vector<vector<pair<int, int>>>& adjecncyList);
    explicit Map1(QWidget *parent = nullptr);
    QString countries;
    ~Map1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    country*arrayOfCountries=new country;
    int from,to,distance;
QString start,end;
    vector<edge> myList;
    Ui::Map1 *ui;
};

#endif // MAP1_H
