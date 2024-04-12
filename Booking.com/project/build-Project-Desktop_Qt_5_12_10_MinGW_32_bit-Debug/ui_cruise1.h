/********************************************************************************
** Form generated from reading UI file 'cruise1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUISE1_H
#define UI_CRUISE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cruise1
{
public:
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *cruise1)
    {
        if (cruise1->objectName().isEmpty())
            cruise1->setObjectName(QString::fromUtf8("cruise1"));
        cruise1->resize(796, 633);
        lineEdit = new QLineEdit(cruise1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(210, 400, 331, 31));
        label_2 = new QLabel(cruise1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 330, 441, 71));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_3 = new QLabel(cruise1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 731, 231));
        pushButton = new QPushButton(cruise1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 450, 141, 28));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(cruise1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 570, 191, 31));
        pushButton_2->setFont(font);

        retranslateUi(cruise1);

        QMetaObject::connectSlotsByName(cruise1);
    } // setupUi

    void retranslateUi(QDialog *cruise1)
    {
        cruise1->setWindowTitle(QApplication::translate("cruise1", "Dialog", nullptr));
        label_2->setText(QApplication::translate("cruise1", "PLEASE ENTER THE NUMBER OF ROOMS THAT YOU WANT ", nullptr));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("cruise1", "SUBMIT", nullptr));
        pushButton_2->setText(QApplication::translate("cruise1", "NEXT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cruise1: public Ui_cruise1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUISE1_H
