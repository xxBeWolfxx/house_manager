/********************************************************************************
** Form generated from reading UI file 'Staff.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_H
#define UI_STAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Staff
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCalendarWidget *calendarWidget;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QDial *temp_1;
    QDial *temp_2;
    QLCDNumber *lcd_temp_1;
    QLCDNumber *lcd_temp_2;
    QWidget *tab_2;
    QLCDNumber *lcd_bright_1;
    QDial *bright_2;
    QDial *bright_1;
    QLCDNumber *lcd_bright_2;
    QWidget *tab_3;
    QLCDNumber *lcdNumber_5;
    QDial *dial_5;
    QLCDNumber *lcdNumber_6;
    QDial *dial_6;

    void setupUi(QWidget *Staff)
    {
        if (Staff->objectName().isEmpty())
            Staff->setObjectName(QString::fromUtf8("Staff"));
        Staff->resize(1141, 646);
        horizontalLayout = new QHBoxLayout(Staff);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        calendarWidget = new QCalendarWidget(Staff);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout->addWidget(calendarWidget);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        tabWidget = new QTabWidget(Staff);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        temp_1 = new QDial(tab);
        temp_1->setObjectName(QString::fromUtf8("temp_1"));
        temp_1->setEnabled(true);
        temp_1->setGeometry(QRect(50, 170, 121, 131));
        temp_1->setStyleSheet(QString::fromUtf8(""));
        temp_1->setOrientation(Qt::Horizontal);
        temp_1->setInvertedAppearance(false);
        temp_1->setInvertedControls(false);
        temp_1->setWrapping(false);
        temp_1->setNotchesVisible(true);
        temp_2 = new QDial(tab);
        temp_2->setObjectName(QString::fromUtf8("temp_2"));
        temp_2->setEnabled(true);
        temp_2->setGeometry(QRect(340, 170, 121, 131));
        temp_2->setOrientation(Qt::Horizontal);
        temp_2->setInvertedAppearance(false);
        temp_2->setInvertedControls(false);
        temp_2->setWrapping(false);
        temp_2->setNotchesVisible(true);
        lcd_temp_1 = new QLCDNumber(tab);
        lcd_temp_1->setObjectName(QString::fromUtf8("lcd_temp_1"));
        lcd_temp_1->setGeometry(QRect(60, 130, 101, 31));
        lcd_temp_2 = new QLCDNumber(tab);
        lcd_temp_2->setObjectName(QString::fromUtf8("lcd_temp_2"));
        lcd_temp_2->setGeometry(QRect(350, 130, 101, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lcd_bright_1 = new QLCDNumber(tab_2);
        lcd_bright_1->setObjectName(QString::fromUtf8("lcd_bright_1"));
        lcd_bright_1->setGeometry(QRect(60, 130, 101, 31));
        bright_2 = new QDial(tab_2);
        bright_2->setObjectName(QString::fromUtf8("bright_2"));
        bright_2->setEnabled(true);
        bright_2->setGeometry(QRect(340, 170, 121, 131));
        bright_2->setOrientation(Qt::Horizontal);
        bright_2->setInvertedAppearance(false);
        bright_2->setInvertedControls(false);
        bright_2->setWrapping(false);
        bright_2->setNotchesVisible(true);
        bright_1 = new QDial(tab_2);
        bright_1->setObjectName(QString::fromUtf8("bright_1"));
        bright_1->setEnabled(true);
        bright_1->setGeometry(QRect(50, 170, 121, 131));
        bright_1->setOrientation(Qt::Horizontal);
        bright_1->setInvertedAppearance(false);
        bright_1->setInvertedControls(false);
        bright_1->setWrapping(false);
        bright_1->setNotchesVisible(true);
        lcd_bright_2 = new QLCDNumber(tab_2);
        lcd_bright_2->setObjectName(QString::fromUtf8("lcd_bright_2"));
        lcd_bright_2->setGeometry(QRect(350, 130, 101, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        lcdNumber_5 = new QLCDNumber(tab_3);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(350, 130, 101, 31));
        dial_5 = new QDial(tab_3);
        dial_5->setObjectName(QString::fromUtf8("dial_5"));
        dial_5->setEnabled(true);
        dial_5->setGeometry(QRect(50, 170, 121, 131));
        dial_5->setOrientation(Qt::Horizontal);
        dial_5->setInvertedAppearance(false);
        dial_5->setInvertedControls(false);
        dial_5->setWrapping(false);
        dial_5->setNotchesVisible(true);
        lcdNumber_6 = new QLCDNumber(tab_3);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));
        lcdNumber_6->setGeometry(QRect(60, 130, 101, 31));
        dial_6 = new QDial(tab_3);
        dial_6->setObjectName(QString::fromUtf8("dial_6"));
        dial_6->setEnabled(true);
        dial_6->setGeometry(QRect(340, 170, 121, 131));
        dial_6->setOrientation(Qt::Horizontal);
        dial_6->setInvertedAppearance(false);
        dial_6->setInvertedControls(false);
        dial_6->setWrapping(false);
        dial_6->setNotchesVisible(true);
        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(Staff);
        QObject::connect(temp_2, SIGNAL(valueChanged(int)), lcd_temp_2, SLOT(display(int)));
        QObject::connect(temp_1, SIGNAL(valueChanged(int)), lcd_temp_1, SLOT(display(int)));
        QObject::connect(bright_1, SIGNAL(valueChanged(int)), lcd_bright_1, SLOT(display(int)));
        QObject::connect(bright_2, SIGNAL(valueChanged(int)), lcd_bright_2, SLOT(display(int)));
        QObject::connect(dial_5, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(dial_6, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Staff);
    } // setupUi

    void retranslateUi(QWidget *Staff)
    {
        Staff->setWindowTitle(QApplication::translate("Staff", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Staff", "Temperatura", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Staff", "Jasno\305\233\304\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Staff", "Wilgo\304\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Staff: public Ui_Staff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_H
