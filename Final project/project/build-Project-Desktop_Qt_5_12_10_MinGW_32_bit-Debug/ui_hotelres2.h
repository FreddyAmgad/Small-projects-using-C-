/********************************************************************************
** Form generated from reading UI file 'hotelres2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELRES2_H
#define UI_HOTELRES2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hotelres2
{
public:
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QDialog *hotelres2)
    {
        if (hotelres2->objectName().isEmpty())
            hotelres2->setObjectName(QString::fromUtf8("hotelres2"));
        hotelres2->resize(1018, 649);
        horizontalLayoutWidget_3 = new QWidget(hotelres2);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(47, 540, 521, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        comboBox_3 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_4->addWidget(comboBox_3);

        comboBox_4 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_4->addWidget(comboBox_4);

        label_4 = new QLabel(hotelres2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(727, 520, 281, 16));
        horizontalLayoutWidget_2 = new QWidget(hotelres2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(720, 540, 281, 80));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font;
        font.setPointSize(12);
        pushButton_3->setFont(font);

        horizontalLayout_6->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);

        horizontalLayout_6->addWidget(pushButton_4);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        label_2 = new QLabel(hotelres2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(47, 110, 921, 391));
        label_3 = new QLabel(hotelres2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(67, 510, 481, 20));
        label = new QLabel(hotelres2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(27, 20, 251, 81));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);

        retranslateUi(hotelres2);

        QMetaObject::connectSlotsByName(hotelres2);
    } // setupUi

    void retranslateUi(QDialog *hotelres2)
    {
        hotelres2->setWindowTitle(QApplication::translate("hotelres2", "Dialog", nullptr));
        label_4->setText(QString());
        pushButton_3->setText(QApplication::translate("hotelres2", "Reserve", nullptr));
        pushButton_4->setText(QApplication::translate("hotelres2", "No Hotel", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label->setText(QApplication::translate("hotelres2", "Hotel Reservation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hotelres2: public Ui_hotelres2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELRES2_H
