/********************************************************************************
** Form generated from reading UI file 'ticket1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET1_H
#define UI_TICKET1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ticket1
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;

    void setupUi(QDialog *ticket1)
    {
        if (ticket1->objectName().isEmpty())
            ticket1->setObjectName(QString::fromUtf8("ticket1"));
        ticket1->resize(862, 469);
        pushButton = new QPushButton(ticket1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 360, 93, 28));
        label = new QLabel(ticket1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 230, 211, 20));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        lineEdit_3 = new QLineEdit(ticket1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(480, 310, 113, 22));
        pushButton_3 = new QPushButton(ticket1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 120, 151, 31));
        pushButton_3->setFont(font);
        label_2 = new QLabel(ticket1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 270, 55, 16));
        label_2->setFont(font);
        pushButton_2 = new QPushButton(ticket1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 120, 131, 31));
        pushButton_2->setFont(font);
        label_3 = new QLabel(ticket1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 310, 151, 16));
        label_3->setFont(font);
        lineEdit_2 = new QLineEdit(ticket1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(480, 270, 113, 22));
        lineEdit = new QLineEdit(ticket1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(480, 230, 113, 22));
        pushButton_4 = new QPushButton(ticket1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(540, 120, 131, 31));
        pushButton_4->setFont(font);

        retranslateUi(ticket1);

        QMetaObject::connectSlotsByName(ticket1);
    } // setupUi

    void retranslateUi(QDialog *ticket1)
    {
        ticket1->setWindowTitle(QApplication::translate("ticket1", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("ticket1", "SHOW", nullptr));
        label->setText(QApplication::translate("ticket1", "NUMBER OF INDIVIDUALS ", nullptr));
        pushButton_3->setText(QApplication::translate("ticket1", "MOIFY TICKET ", nullptr));
        label_2->setText(QApplication::translate("ticket1", "PRICE", nullptr));
        pushButton_2->setText(QApplication::translate("ticket1", "CANCEL TICKET", nullptr));
        label_3->setText(QApplication::translate("ticket1", "TICKET  NUMBER", nullptr));
        pushButton_4->setText(QApplication::translate("ticket1", "CHECK OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ticket1: public Ui_ticket1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET1_H
