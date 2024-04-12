/********************************************************************************
** Form generated from reading UI file 'rgtr.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RGTR_H
#define UI_RGTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rgtr
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *rgtr)
    {
        if (rgtr->objectName().isEmpty())
            rgtr->setObjectName(QString::fromUtf8("rgtr"));
        rgtr->resize(555, 357);
        verticalLayoutWidget = new QWidget(rgtr);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 551, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Myanmar Text"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(9);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_8);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_8->addWidget(lineEdit_4);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font3;
        font3.setPointSize(12);
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_11);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout_11->addWidget(lineEdit_7);


        verticalLayout_8->addLayout(verticalLayout_11);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_7->addWidget(lineEdit_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_9);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_9->addWidget(lineEdit_5);


        verticalLayout_7->addLayout(verticalLayout_9);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font3);

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font3);

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(rgtr);

        QMetaObject::connectSlotsByName(rgtr);
    } // setupUi

    void retranslateUi(QDialog *rgtr)
    {
        rgtr->setWindowTitle(QApplication::translate("rgtr", "Dialog", nullptr));
        label->setText(QApplication::translate("rgtr", "Register Page", nullptr));
        label_2->setText(QString());
        label_8->setText(QApplication::translate("rgtr", "Username", nullptr));
        label_11->setText(QApplication::translate("rgtr", "First Name", nullptr));
        label_7->setText(QApplication::translate("rgtr", "Password", nullptr));
        label_9->setText(QApplication::translate("rgtr", "Email", nullptr));
        pushButton_3->setText(QApplication::translate("rgtr", "Register", nullptr));
        pushButton_2->setText(QApplication::translate("rgtr", "Login Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rgtr: public Ui_rgtr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RGTR_H
