/********************************************************************************
** Form generated from reading UI file 'map1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP1_H
#define UI_MAP1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Map1
{
public:
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Map1)
    {
        if (Map1->objectName().isEmpty())
            Map1->setObjectName(QString::fromUtf8("Map1"));
        Map1->resize(913, 554);
        comboBox = new QComboBox(Map1);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(540, 360, 181, 22));
        comboBox_2 = new QComboBox(Map1);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(140, 360, 181, 22));
        lineEdit = new QLineEdit(Map1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 230, 481, 22));
        lineEdit_2 = new QLineEdit(Map1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 280, 481, 22));
        label = new QLabel(Map1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 320, 55, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(Map1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(610, 320, 31, 16));
        label_2->setFont(font);
        pushButton = new QPushButton(Map1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 410, 111, 28));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(Map1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(370, 480, 171, 28));
        pushButton_2->setFont(font);
        label_4 = new QLabel(Map1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 190, 231, 31));
        label_4->setFont(font);
        label_3 = new QLabel(Map1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 250, 51, 31));
        label_3->setFont(font);
        pushButton_3 = new QPushButton(Map1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 410, 93, 28));

        retranslateUi(Map1);

        QMetaObject::connectSlotsByName(Map1);
    } // setupUi

    void retranslateUi(QDialog *Map1)
    {
        Map1->setWindowTitle(QApplication::translate("Map1", "Dialog", nullptr));
        label->setText(QApplication::translate("Map1", "FROM", nullptr));
        label_2->setText(QApplication::translate("Map1", "TO", nullptr));
        pushButton->setText(QApplication::translate("Map1", "Submit", nullptr));
        pushButton_2->setText(QApplication::translate("Map1", "Next", nullptr));
        label_4->setText(QApplication::translate("Map1", "The shortest distance: ", nullptr));
        label_3->setText(QApplication::translate("Map1", "Path:", nullptr));
        pushButton_3->setText(QApplication::translate("Map1", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map1: public Ui_Map1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP1_H
