#include "planes.h"
#include "ui_planes.h"
#include"mainwindow.h"
#include<vector>
template<class T>
void planes::swap(T& v1, T& v2){
    T temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}


planes::planes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planes)
{
    ui->setupUi(this);
    ui->From->setText(start);
    ui->To->setText(end);


    for(int i=0;i<10;i++){
        if(i==0){
            Planes[i].setStart("Egypt");
            Planes[i].setEnd("Canada");
            Planes[i].setPrice(10);
            Planes[i].setOneWay(true);
        }

    else     if(i==1){
            Planes[i].setStart("Lebanon");
            Planes[i].setEnd("Egypt");
            Planes[i].setPrice(15);
            Planes[i].setOneWay(true);
    }

      else  if(i==2){
            Planes[i].setStart("Egypt");
            Planes[i].setEnd("China");
            Planes[i].setPrice(9);
            Planes[i].setOneWay(false);
        }


      else  if(i==3){
            Planes[i].setStart("Egypt");
            Planes[i].setEnd("Australia");
            Planes[i].setPrice(10.5);
            Planes[i].setOneWay(true);
        }

    else    if(i==4){
            Planes[i].setStart("Indonesia");
            Planes[i].setEnd("Canada");
            Planes[i].setPrice(8.8);
            Planes[i].setOneWay(false);
        }

    else    if(i==5){
            Planes[i].setStart("Canada");
            Planes[i].setEnd("Egypt");
            Planes[i].setPrice(17.5);
            Planes[i].setOneWay(true);
        }


  else      if(i==6){
            Planes[i].setStart("China");
            Planes[i].setEnd("Lebanon");
            Planes[i].setPrice(10.98);
            Planes[i].setOneWay(true);
        }

   else     if(i==7){
            Planes[i].setStart("Indonesia");
            Planes[i].setEnd("China");
            Planes[i].setPrice(8.3);
            Planes[i].setOneWay(false);
        }


  else      if(i==8){
            Planes[i].setStart("Egypt");
            Planes[i].setEnd("Australia");
            Planes[i].setPrice(10);
            Planes[i].setOneWay(true);
        }

    else    if(i==9){
            Planes[i].setStart("Canada");
            Planes[i].setEnd("Egypt");
            Planes[i].setPrice(15.5);
            Planes[i].setOneWay(true);
        }
}
}

void planes::compare(){
    vector <int>index(10);
    Plane1 unsortedplanes[10];
    int k=0;
    for(int i=0;i<10;i++){
        if(onewayplanes[i].getStart().getCountry()==start&&onewayplanes[i].getEnd().getCountry()==end){
            unsortedplanes[k]= onewayplanes[i];
            k++;
        }
    }
    heapSort(unsortedplanes,10);
    int o=0;
    for(int i=0;i<10;i++){
        if(unsortedplanes[i].getStart().getCountry()!=""){
    ui->listWidget->addItem("Flight "+QString::number(o+1)+" price "+QString::number(unsortedplanes[i].getPrice()));
    index.push_back(i);
        o++;
        }}
    for(int l=0;l<o;l++){
    ui->comboBox->addItem(QString::number(l+1));
}

}
    void planes::heapify(Plane1 arr[], int n, int i)
    {
        int largest = i; // Initialize largest as root
        int l = 2 * i + 1; // left = 2*i + 1
        int r = 2 * i + 2; // right = 2*i + 2

        // If left child is larger than root
        if (l < n && arr[l].getPrice() > arr[largest].getPrice())
            largest = l;

        // If right child is larger than largest so far
        if (r < n && arr[r].getPrice() > arr[largest].getPrice())
            largest = r;

        // If largest is not root
        if (largest != i) {
            swap(arr[i], arr[largest]);

            // Recursively heapify the affected sub-tree
            heapify(arr,n, largest);
        }
    }

    // main function to do heap sort
    void planes::heapSort(Plane1 arr[],int n)
    {
        // Build heap (rearrange array)
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        // One by one extract an element from heap
        for (int i = n - 1; i > 0; i--) {
            // Move current root to end
            swap(arr[0], arr[i]);

            // call max heapify on the reduced heap
            heapify(arr, i, 0);
        }
    }

    void planes::showtext(){
        ui->From->setText(start);
        ui->To->setText(end);
    }

planes::~planes()
{
    delete ui;
}



void planes::on_yes_clicked()
{
    int k=0;
    for(int i=0;i<10;i++){
        if(Planes[i].getoneway()==true){
            onewayplanes[k]= Planes[i];
            k++;
        }
    }
    compare();

}

void planes::on_no_clicked()
{
    int k=0;
    for(int i=0;i<10;i++){
        if(Planes[i].getoneway()==false){
            onewayplanes[k]= Planes[i];
            k++;
        }
    }
        compare();
}


Plane1* planes::myflight(){
    Plane1* it=&Planes[Index];
    return it;
}


void planes::on_Submit_clicked()
{
    Index=ui->comboBox->currentText().toInt();
    this->hide();
}
