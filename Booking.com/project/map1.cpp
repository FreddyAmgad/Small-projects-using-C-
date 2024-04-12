#include "map1.h"
#include "ui_map1.h"
#include<QPixmap>
#include<QDebug>
using namespace std;
struct Map1::edge
{
    int from, to, weight;
};
#define v 6
void Map1::SetFrom(int number,QString name)
{
    this->from=number;
    this->start=name;
}
void Map1::setTo(int number,QString name)
{
    this->to=number;
    this->end=name;
}
int Map1::getFrom()
{
    return from;
}
int Map1::getTo(){
    return to;
}
 void Map1::returnPair(vector<vector<pair<int, int>>>& adjecncyList)
{
    for (auto u : myList)
    {
        adjecncyList[u.from].push_back({ u.to,u.weight });
        adjecncyList[u.to].push_back({ u.from,u.weight });
    }
}
int  Map1::dijkestra(vector<vector<pair<int, int>>>&adjecncyList, int source, int destination)
{
    vector<int>parent(v, -1);
    vector<int>path;
    priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector <bool> visited(v, 0);
    vector<int> dist(v, INT_MAX);
    dist[source] = 0;
    pq.push({0,source });
    while (!pq.empty())
    {
        pair<int, int> current = pq.top();
        int distnation = current.second;
        if (distnation == destination)
            break;
        pq.pop();
        if (visited[distnation] == true)
            continue;
        visited[distnation] = true;
        for (int i = 0; i<adjecncyList[distnation].size(); i++)
        {
            int  edgeweightToNewVertex = adjecncyList[distnation][i].second;
            int Newvertex = adjecncyList[distnation][i].first;
            if (dist[distnation] + edgeweightToNewVertex < dist[Newvertex])
            {
                dist[Newvertex] = dist[distnation] + edgeweightToNewVertex;
                pq.push({ dist[Newvertex],Newvertex });
                parent[Newvertex] = distnation;
            }
        }
    }
    distance =dist[destination] ;

    path.push_back(destination);
    while (parent[destination] != -1)
    {
        path.push_back(parent[destination]);
        destination = parent[destination ];
   }
    DisplayPath(path);
    return distance;
}
void Map1::DisplayPath(vector<int>path)
{

    QString country;
   reverse( path.begin(), path.end());
    for (int element : path) {
        switch (element)
        {
        case 0:
            country = "LEBANON";
            ui->lineEdit_2->setText(ui->lineEdit_2->text()+"  " +country);
            break;
        case 1:
            country = "CANADA";
            ui->lineEdit_2->setText(ui->lineEdit_2->text()+"  "+country);
            break;
        case 2:
            country = "CHINA";
            ui->lineEdit_2->setText(ui->lineEdit_2->text()+"  "+country);
            break;
        case 3:
            country = "INDONESIA";
            ui->lineEdit_2->setText(ui->lineEdit_2->text()+"  "+country);
            break;
        case 4:
            country = "AUSTRALIA";
            ui->lineEdit_2->setText(ui->lineEdit_2->text()+"  "+country);
            break;
        case 5:
                country = "EGYPT";
                ui->lineEdit_2->setText(ui->lineEdit_2->text()+"  "+country);
                break;
        default:
            cout << "ERROR IN THE SWITCH STATMENT !!!!" << endl;
            break;
        }
    }

    return;
}
void Map1::SetSourceAndDitination()
{
if(ui->comboBox->currentText()=="Lebanon")
{
    setTo(0,"Lebanon");
}
else if(ui->comboBox->currentText()=="Canada")
{
    setTo(1,"Canada");

}
else if(ui->comboBox->currentText()=="China")
{
    setTo(2,"China");

}
else if(ui->comboBox->currentText()=="Australia")
{
    setTo(4,"Australia");

}else if(ui->comboBox->currentText()=="Egypt")
{
    setTo(5,"Egypt");

}else if(ui->comboBox->currentText()=="Indonesia")
{
    setTo(3,"Indonesia");

}
if(ui->comboBox_2->currentText()=="Lebanon")
{
    SetFrom(0,"Lebanon");
}
else if(ui->comboBox_2->currentText()=="Canada")
{
    SetFrom(1,"Canada");
}
else if(ui->comboBox_2->currentText()=="China")
{
    SetFrom(2,"China");
}
else if(ui->comboBox_2->currentText()=="Australia")
{
    SetFrom(4,"Australia");
}
else if(ui->comboBox_2->currentText()=="Egypt")
{
    SetFrom(5,"Egypt");
}
else if(ui->comboBox_2->currentText()=="Indonesia")
{
    SetFrom(3,"Indonesia");
}
}
Map1::Map1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Map1)
{
    ui->setupUi(this);
    QPixmap pix2("C:/Users/Youssef Omar/Downloads/imyoussef/world.jpeg");
    ui->label_3->setPixmap(pix2.scaled(400,400,Qt::KeepAspectRatio));
    country* obj = new country;
        obj->fillingTheArray();
        arrayOfCountries = obj->getArray();
    for(int i=0; i< 5;i++)
    {
      ui->comboBox_2->addItem(QString::fromStdString(arrayOfCountries[i].getName())) ;

    }
   // ui->comboBox->addItem("LEBNAN");
   // ui->comboBox->addItem("CANADA");
   // ui->comboBox->addItem("CHINA");
   // ui->comboBox->addItem("AUSTRELIA");
   // ui->comboBox->addItem("EGYPT");
    //ui->comboBox->addItem("INDONSIA");
    //ui->comboBox_2->addItem("LEBNAN");
    //ui->comboBox_2->addItem("CANADA");
    //ui->comboBox_2->addItem("CHINA");
    //ui->comboBox_2->addItem("AUSTRELIA");
   // ui->comboBox_2->addItem("EGYPT");
   // ui->comboBox_2->addItem("INDONSIA");
      myList =
        {
            {0,1,200},
            {1,2,500},
            {2,3,600},
            {3,4,350},
            {4,5,450},
            {5,0,400},
            {0,3,800},
            {1,5,500},
            {2,4,800}
        };
}

Map1::~Map1()
{
    delete ui;
}
void Map1::theProgram()
{
    on_pushButton_clicked();
}

void Map1::on_pushButton_clicked()
{
    vector<vector<pair<int, int>>>adjecncyList(9);
        returnPair(adjecncyList);
        SetSourceAndDitination();
        distance=dijkestra(adjecncyList,from,to);
        countries=returnEnd();
        ui->lineEdit->setText(QVariant(distance).toString());
}
void Map1::on_pushButton_2_clicked()
{
    hide();
}
QString Map1::returnStart()
{
    return start;
}
QString Map1::returnEnd()
{
    return end;
}
int Map1::getDistance()
{
    return distance;
}

void Map1::on_pushButton_3_clicked()
{
    for(int i=0; i< 5;i++)
    {
        if(QString::fromStdString(arrayOfCountries[i].getName()) == ui->comboBox_2->currentText())
        {

        }
        else
        {
            ui->comboBox->addItem(QString::fromStdString(arrayOfCountries[i].getName())) ;

        }
    }

    }

