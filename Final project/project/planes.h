#ifndef PLANES_H
#define PLANES_H
#include"plane1.h"
#include <QDialog>

namespace Ui {
class planes;
}

class planes : public QDialog
{
    Q_OBJECT

public:
    int Index;
    QString start;
    QString end;
    Plane1 Planes[10];
    Plane1 onewayplanes[10];
    explicit planes(QWidget *parent = nullptr);
    void heapify(Plane1*, int n, int i);
    void heapSort(Plane1*, int n);
    void compare();
    void showtext();
    Plane1* myflight();
    template<class T>
    void swap(T& v1, T& v2);
    ~planes();

private slots:



    void on_yes_clicked();

    void on_no_clicked();

    void on_Submit_clicked();

private:

    Ui::planes *ui;
};

#endif // PLANES_H
