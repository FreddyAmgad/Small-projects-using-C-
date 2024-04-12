/********************************************************************************
** Form generated from reading UI file 'date_time.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATE_TIME_H
#define UI_DATE_TIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Date_Time
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QPushButton *pushButton;

    void setupUi(QDialog *Date_Time)
    {
        if (Date_Time->objectName().isEmpty())
            Date_Time->setObjectName(QString::fromUtf8("Date_Time"));
        Date_Time->resize(481, 235);
        label = new QLabel(Date_Time);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 281, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(Date_Time);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 91, 16));
        label_2->setFont(font);
        label_3 = new QLabel(Date_Time);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 150, 81, 16));
        label_3->setFont(font);
        comboBox = new QComboBox(Date_Time);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 100, 69, 22));
        comboBox_2 = new QComboBox(Date_Time);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 180, 69, 22));
        comboBox_3 = new QComboBox(Date_Time);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(120, 100, 69, 22));
        comboBox_4 = new QComboBox(Date_Time);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(220, 100, 69, 22));
        comboBox_5 = new QComboBox(Date_Time);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(120, 180, 69, 22));
        comboBox_6 = new QComboBox(Date_Time);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(220, 180, 69, 22));
        pushButton = new QPushButton(Date_Time);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 140, 75, 23));
        pushButton->setFont(font);

        retranslateUi(Date_Time);

        QMetaObject::connectSlotsByName(Date_Time);
    } // setupUi

    void retranslateUi(QDialog *Date_Time)
    {
        Date_Time->setWindowTitle(QApplication::translate("Date_Time", "Dialog", nullptr));
        label->setText(QApplication::translate("Date_Time", "Please choose your date here:", nullptr));
        label_2->setText(QApplication::translate("Date_Time", "Departure:", nullptr));
        label_3->setText(QApplication::translate("Date_Time", "Arrival:", nullptr));
        pushButton->setText(QApplication::translate("Date_Time", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Date_Time: public Ui_Date_Time {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATE_TIME_H
