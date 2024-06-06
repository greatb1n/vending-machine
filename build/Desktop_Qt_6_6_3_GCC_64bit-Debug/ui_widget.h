/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *hundred;
    QPushButton *fifty;
    QPushButton *ten;
    QPushButton *coffee;
    QLCDNumber *total;
    QPushButton *reset;
    QPushButton *milk;
    QPushButton *five_hundred;
    QPushButton *tea;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        hundred = new QPushButton(Widget);
        hundred->setObjectName("hundred");
        hundred->setGeometry(QRect(240, 170, 87, 26));
        fifty = new QPushButton(Widget);
        fifty->setObjectName("fifty");
        fifty->setGeometry(QRect(130, 170, 87, 26));
        ten = new QPushButton(Widget);
        ten->setObjectName("ten");
        ten->setGeometry(QRect(20, 170, 87, 26));
        coffee = new QPushButton(Widget);
        coffee->setObjectName("coffee");
        coffee->setGeometry(QRect(80, 220, 87, 26));
        total = new QLCDNumber(Widget);
        total->setObjectName("total");
        total->setGeometry(QRect(100, 60, 211, 91));
        reset = new QPushButton(Widget);
        reset->setObjectName("reset");
        reset->setGeometry(QRect(190, 280, 87, 26));
        milk = new QPushButton(Widget);
        milk->setObjectName("milk");
        milk->setGeometry(QRect(310, 220, 87, 26));
        five_hundred = new QPushButton(Widget);
        five_hundred->setObjectName("five_hundred");
        five_hundred->setGeometry(QRect(350, 170, 87, 26));
        tea = new QPushButton(Widget);
        tea->setObjectName("tea");
        tea->setGeometry(QRect(190, 220, 87, 26));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        hundred->setText(QCoreApplication::translate("Widget", "+100", nullptr));
        fifty->setText(QCoreApplication::translate("Widget", "+50", nullptr));
        ten->setText(QCoreApplication::translate("Widget", "+10", nullptr));
        coffee->setText(QCoreApplication::translate("Widget", "coffee", nullptr));
        reset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
        milk->setText(QCoreApplication::translate("Widget", "milk", nullptr));
        five_hundred->setText(QCoreApplication::translate("Widget", "+500", nullptr));
        tea->setText(QCoreApplication::translate("Widget", "tea", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
