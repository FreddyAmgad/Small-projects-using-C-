/********************************************************************************
** Form generated from reading UI file 'creditcard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCARD_H
#define UI_CREDITCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_creditcard
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *creditcard)
    {
        if (creditcard->objectName().isEmpty())
            creditcard->setObjectName(QString::fromUtf8("creditcard"));
        creditcard->resize(496, 300);
        label = new QLabel(creditcard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 421, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(creditcard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 250, 291, 16));
        label_3 = new QLabel(creditcard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 161, 16));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_4 = new QLabel(creditcard);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 170, 101, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(creditcard);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 140, 121, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(creditcard);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 80, 141, 16));
        label_6->setFont(font1);
        lineEdit = new QLineEdit(creditcard);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 80, 161, 20));
        lineEdit_2 = new QLineEdit(creditcard);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 110, 161, 20));
        lineEdit_3 = new QLineEdit(creditcard);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 140, 161, 20));
        lineEdit_4 = new QLineEdit(creditcard);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 170, 161, 20));
        pushButton = new QPushButton(creditcard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 10, 71, 31));
        QFont font2;
        font2.setPointSize(10);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(creditcard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 210, 75, 23));
        pushButton_2->setFont(font1);
        label_7 = new QLabel(creditcard);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 50, 251, 21));
        label_7->setFont(font1);
        label_8 = new QLabel(creditcard);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 231, 16));
        label_8->setFont(font);
        label_9 = new QLabel(creditcard);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(80, 250, 241, 31));
        label_9->setFont(font1);

        retranslateUi(creditcard);

        QMetaObject::connectSlotsByName(creditcard);
    } // setupUi

    void retranslateUi(QDialog *creditcard)
    {
        creditcard->setWindowTitle(QApplication::translate("creditcard", "Dialog", nullptr));
        label->setText(QApplication::translate("creditcard", "If you have already registered your credit card, click here: ", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("creditcard", "Credit Card Number:", nullptr));
        label_4->setText(QApplication::translate("creditcard", "Expiry Date", nullptr));
        label_5->setText(QApplication::translate("creditcard", "Card Pin", nullptr));
        label_6->setText(QApplication::translate("creditcard", "Card Holder Name:", nullptr));
        pushButton->setText(QApplication::translate("creditcard", "Pay", nullptr));
        pushButton_2->setText(QApplication::translate("creditcard", "Submit", nullptr));
        label_7->setText(QApplication::translate("creditcard", "Register:", nullptr));
        label_8->setText(QApplication::translate("creditcard", "*Please write your name first*", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class creditcard: public Ui_creditcard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCARD_H
