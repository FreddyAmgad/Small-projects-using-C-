#include "transportation1.h"
#include "ui_transportation1.h"
#include<QPixmap>

Transportation1::Transportation1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Transportation1)
{
    ui->setupUi(this);
    QPixmap pix2("C:/Users/Youssef Omar/Downloads/imyoussef/family.jpeg");
    ui->label_2->setPixmap(pix2.scaled(400,400,Qt::KeepAspectRatio));
    ui->comboBox->addItem("BUSSINES");
    ui->comboBox->addItem("ECONOMY");
    ui->comboBox->addItem("FIRST");

}

Transportation1::~Transportation1()
{
    delete ui;
}

void Transportation1::on_pushButton_clicked()
{
    setIndv(ui->lineEdit->text().toInt());
    setType(ui->comboBox->currentText());
}

void Transportation1::on_pushButton_2_clicked()
{
    hide();
}
