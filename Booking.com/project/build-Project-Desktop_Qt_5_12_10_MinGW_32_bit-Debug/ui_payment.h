/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_payment
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;

    void setupUi(QDialog *payment)
    {
        if (payment->objectName().isEmpty())
            payment->setObjectName(QString::fromUtf8("payment"));
        payment->resize(400, 186);
        label = new QLabel(payment);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 50, 341, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        pushButton = new QPushButton(payment);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 130, 101, 23));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(payment);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 130, 75, 23));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(payment);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 130, 75, 23));
        pushButton_3->setFont(font1);
        label_2 = new QLabel(payment);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 70, 211, 16));

        retranslateUi(payment);

        QMetaObject::connectSlotsByName(payment);
    } // setupUi

    void retranslateUi(QDialog *payment)
    {
        payment->setWindowTitle(QApplication::translate("payment", "Dialog", nullptr));
        label->setText(QApplication::translate("payment", "Please pick your payment method.", nullptr));
        pushButton->setText(QApplication::translate("payment", "Credit Card", nullptr));
        pushButton_2->setText(QApplication::translate("payment", "Cash", nullptr));
        pushButton_3->setText(QApplication::translate("payment", "Points", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class payment: public Ui_payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
