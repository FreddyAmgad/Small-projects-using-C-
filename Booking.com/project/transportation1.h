#ifndef TRANSPORTATION1_H
#define TRANSPORTATION1_H

#include <QDialog>
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<queue>
#include"trans1.h"
using namespace std;

namespace Ui {
class Transportation1;
}

class Transportation1 : public QDialog, public trans1
{
    Q_OBJECT

public:

    explicit Transportation1(QWidget *parent = nullptr);
    ~Transportation1();

private slots:
    void on_pushButton_clicked();



    void on_pushButton_2_clicked();

private:
    Ui::Transportation1 *ui;
};


#endif // TRANSPORTATION1_H
