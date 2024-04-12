/********************************************************************************
** Form generated from reading UI file 'plane1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANE1_H
#define UI_PLANE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Plane1
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QLabel *label_2;

    void setupUi(QDialog *Plane1)
    {
        if (Plane1->objectName().isEmpty())
            Plane1->setObjectName(QString::fromUtf8("Plane1"));
        Plane1->resize(848, 627);
        pushButton = new QPushButton(Plane1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 350, 141, 28));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        lineEdit = new QLineEdit(Plane1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 290, 281, 22));
        pushButton_2 = new QPushButton(Plane1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 480, 271, 31));
        pushButton_2->setFont(font);
        label = new QLabel(Plane1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 200, 441, 81));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        pushButton_3 = new QPushButton(Plane1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 480, 301, 31));
        pushButton_3->setFont(font);
        label_2 = new QLabel(Plane1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 0, 451, 211));

        retranslateUi(Plane1);

        QMetaObject::connectSlotsByName(Plane1);
    } // setupUi

    void retranslateUi(QDialog *Plane1)
    {
        Plane1->setWindowTitle(QApplication::translate("Plane1", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Plane1", "Submit", nullptr));
        pushButton_2->setText(QApplication::translate("Plane1", "Next", nullptr));
        label->setText(QApplication::translate("Plane1", "TOTAL PRICE BEFORE REGESTRING A HOTEL", nullptr));
        pushButton_3->setText(QApplication::translate("Plane1", "Reserve Hotel", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Plane1: public Ui_Plane1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANE1_H
