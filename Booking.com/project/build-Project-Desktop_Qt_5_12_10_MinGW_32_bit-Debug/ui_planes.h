/********************************************************************************
** Form generated from reading UI file 'planes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANES_H
#define UI_PLANES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_planes
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *From;
    QLineEdit *To;
    QRadioButton *yes;
    QRadioButton *no;
    QListWidget *listWidget;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox;
    QPushButton *Submit;

    void setupUi(QDialog *planes)
    {
        if (planes->objectName().isEmpty())
            planes->setObjectName(QString::fromUtf8("planes"));
        planes->resize(605, 300);
        label = new QLabel(planes);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 51, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(planes);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 31, 31));
        label_2->setFont(font);
        label_5 = new QLabel(planes);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 80, 81, 31));
        label_5->setFont(font);
        From = new QLineEdit(planes);
        From->setObjectName(QString::fromUtf8("From"));
        From->setGeometry(QRect(160, 20, 113, 21));
        From->setReadOnly(true);
        To = new QLineEdit(planes);
        To->setObjectName(QString::fromUtf8("To"));
        To->setGeometry(QRect(160, 50, 113, 21));
        To->setReadOnly(true);
        yes = new QRadioButton(planes);
        yes->setObjectName(QString::fromUtf8("yes"));
        yes->setGeometry(QRect(160, 90, 85, 20));
        no = new QRadioButton(planes);
        no->setObjectName(QString::fromUtf8("no"));
        no->setGeometry(QRect(240, 90, 85, 20));
        listWidget = new QListWidget(planes);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(330, 40, 256, 131));
        listWidget->setSortingEnabled(false);
        label_6 = new QLabel(planes);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 10, 141, 31));
        label_6->setFont(font);
        label_7 = new QLabel(planes);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 180, 191, 31));
        label_7->setFont(font);
        comboBox = new QComboBox(planes);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(330, 220, 211, 22));
        Submit = new QPushButton(planes);
        Submit->setObjectName(QString::fromUtf8("Submit"));
        Submit->setGeometry(QRect(480, 260, 80, 22));

        retranslateUi(planes);

        QMetaObject::connectSlotsByName(planes);
    } // setupUi

    void retranslateUi(QDialog *planes)
    {
        planes->setWindowTitle(QApplication::translate("planes", "Dialog", nullptr));
        label->setText(QApplication::translate("planes", "From:", nullptr));
        label_2->setText(QApplication::translate("planes", "To:", nullptr));
        label_5->setText(QApplication::translate("planes", "One way:", nullptr));
        yes->setText(QApplication::translate("planes", "Yes", nullptr));
        no->setText(QApplication::translate("planes", "No", nullptr));
        label_6->setText(QApplication::translate("planes", "Flights available:", nullptr));
        label_7->setText(QApplication::translate("planes", "Choose your flight:", nullptr));
        Submit->setText(QApplication::translate("planes", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planes: public Ui_planes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANES_H
