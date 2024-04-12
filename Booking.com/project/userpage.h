#ifndef USERPAGE_H
#define USERPAGE_H

#include <QDialog>

#include "rgtr.h"
#include <QDialog>
namespace Ui {
class userpage;
}

class userpage : public QDialog
{
    Q_OBJECT

public:
    explicit userpage(QWidget *parent = nullptr);
    ~userpage();
    bool m_show_child;
    QString cur_user;
private slots:
    void close_child();


    void on_button_back_to_first_clicked();

protected:
    void closeEvent(QCloseEvent *);

signals:
    void close_me();


private slots:
    void on_pushButton_clicked();

    void on_login_clicked();

private:
    Ui::userpage *ui;

};
void readMAXii();
void readaccounts1();

#endif // USERPAGE_H
