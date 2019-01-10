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
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Staff
{
public:
    QFrame *frame;
    QTabWidget *tabWidget;
    QWidget *tab;
    QDial *dial;
    QDial *dial_2;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QWidget *tab_2;
    QLCDNumber *lcdNumber_3;
    QDial *dial_4;
    QDial *dial_3;
    QLCDNumber *lcdNumber_4;
    QWidget *tab_3;
    QLCDNumber *lcdNumber_5;
    QDial *dial_5;
    QLCDNumber *lcdNumber_6;
    QDial *dial_6;

    void setupUi(QWidget *Staff)
    {
        if (Staff->objectName().isEmpty())
            Staff->setObjectName(QString::fromUtf8("Staff"));
        Staff->resize(803, 533);
        frame = new QFrame(Staff);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-1, -1, 291, 531));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(Staff);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(290, 0, 511, 531));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        dial = new QDial(tab);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setEnabled(true);
        dial->setGeometry(QRect(50, 170, 121, 131));
        dial->setOrientation(Qt::Horizontal);
        dial->setInvertedAppearance(false);
        dial->setInvertedControls(false);
        dial->setWrapping(false);
        dial->setNotchesVisible(true);
        dial_2 = new QDial(tab);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));
        dial_2->setEnabled(true);
        dial_2->setGeometry(QRect(340, 170, 121, 131));
        dial_2->setOrientation(Qt::Horizontal);
        dial_2->setInvertedAppearance(false);
        dial_2->setInvertedControls(false);
        dial_2->setWrapping(false);
        dial_2->setNotchesVisible(true);
        lcdNumber = new QLCDNumber(tab);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(60, 120, 101, 31));
        lcdNumber_2 = new QLCDNumber(tab);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(350, 120, 101, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lcdNumber_3 = new QLCDNumber(tab_2);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(60, 130, 101, 31));
        dial_4 = new QDial(tab_2);
        dial_4->setObjectName(QString::fromUtf8("dial_4"));
        dial_4->setEnabled(true);
        dial_4->setGeometry(QRect(340, 170, 121, 131));
        dial_4->setOrientation(Qt::Horizontal);
        dial_4->setInvertedAppearance(false);
        dial_4->setInvertedControls(false);
        dial_4->setWrapping(false);
        dial_4->setNotchesVisible(true);
        dial_3 = new QDial(tab_2);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));
        dial_3->setEnabled(true);
        dial_3->setGeometry(QRect(50, 170, 121, 131));
        dial_3->setOrientation(Qt::Horizontal);
        dial_3->setInvertedAppearance(false);
        dial_3->setInvertedControls(false);
        dial_3->setWrapping(false);
        dial_3->setNotchesVisible(true);
        lcdNumber_4 = new QLCDNumber(tab_2);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(350, 130, 101, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        lcdNumber_5 = new QLCDNumber(tab_3);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(350, 140, 101, 31));
        dial_5 = new QDial(tab_3);
        dial_5->setObjectName(QString::fromUtf8("dial_5"));
        dial_5->setEnabled(true);
        dial_5->setGeometry(QRect(50, 180, 121, 131));
        dial_5->setOrientation(Qt::Horizontal);
        dial_5->setInvertedAppearance(false);
        dial_5->setInvertedControls(false);
        dial_5->setWrapping(false);
        dial_5->setNotchesVisible(true);
        lcdNumber_6 = new QLCDNumber(tab_3);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));
        lcdNumber_6->setGeometry(QRect(60, 140, 101, 31));
        dial_6 = new QDial(tab_3);
        dial_6->setObjectName(QString::fromUtf8("dial_6"));
        dial_6->setEnabled(true);
        dial_6->setGeometry(QRect(340, 180, 121, 131));
        dial_6->setOrientation(Qt::Horizontal);
        dial_6->setInvertedAppearance(false);
        dial_6->setInvertedControls(false);
        dial_6->setWrapping(false);
        dial_6->setNotchesVisible(true);
        tabWidget->addTab(tab_3, QString());

        retranslateUi(Staff);
        QObject::connect(dial_2, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(dial_3, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(dial_4, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
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
