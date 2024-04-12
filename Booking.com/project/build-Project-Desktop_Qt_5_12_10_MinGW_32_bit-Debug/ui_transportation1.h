/********************************************************************************
** Form generated from reading UI file 'transportation1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSPORTATION1_H
#define UI_TRANSPORTATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Transportation1
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;

    void setupUi(QDialog *Transportation1)
    {
        if (Transportation1->objectName().isEmpty())
            Transportation1->setObjectName(QString::fromUtf8("Transportation1"));
        Transportation1->resize(1055, 433);
        pushButton = new QPushButton(Transportation1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 200, 121, 28));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        lineEdit = new QLineEdit(Transportation1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(420, 90, 151, 22));
        pushButton_2 = new QPushButton(Transportation1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 360, 93, 28));
        label = new QLabel(Transportation1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 50, 601, 31));
        label->setFont(font);
        label_2 = new QLabel(Transportation1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(740, 15, 311, 391));
        label_3 = new QLabel(Transportation1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 120, 391, 20));
        QFont font1;
        font1.setPointSize(13);
        label_3->setFont(font1);
        comboBox = new QComboBox(Transportation1);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(390, 160, 211, 22));

        retranslateUi(Transportation1);

        QMetaObject::connectSlotsByName(Transportation1);
    } // setupUi

    void retranslateUi(QDialog *Transportation1)
    {
        Transportation1->setWindowTitle(QApplication::translate("Transportation1", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Transportation1", "Submit", nullptr));
        pushButton_2->setText(QApplication::translate("Transportation1", "NEXT", nullptr));
        label->setText(QApplication::translate("Transportation1", "PLEASE USER ENTER THE NUMEBR OF INDIVIDUALS MORE THAN 5 YEARS OLD ", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Transportation1", "PLEASE ENTER THE CLASS YOU NEED", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transportation1: public Ui_Transportation1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSPORTATION1_H
