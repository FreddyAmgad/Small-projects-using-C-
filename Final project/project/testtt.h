#ifndef TESTTT_H
#define TESTTT_H
#include"plane1.h"
#include <QDialog>

namespace Ui {
class testtt;
}

class testtt : public QDialog
{
    Q_OBJECT

public:
    explicit testtt(QWidget *parent = nullptr);
    QString start;
    QString end;
    Plane1 Planes[10];
    Plane1 onewayplanes[10];
    void heapify(Plane1*, int n, int i);
    void heapSort(Plane1*, int n);
    void compare();
    template<class T>
    void swap(T& v1, T& v2);
    ~testtt();
private slots:



    void on_yes_clicked();

    void on_no_clicked();
private:
    Ui::testtt *ui;
};

#endif // TESTTT_H
