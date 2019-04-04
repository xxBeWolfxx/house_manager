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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
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
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *ID;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *COM;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLCDNumber *lcd_temp_2;
    QProgressBar *temp_bar2;
    QLCDNumber *lcd_temp_1;
    QProgressBar *temp_bar1;
    QWidget *tab_2;
    QLCDNumber *lcd_bright_1;
    QLCDNumber *lcd_bright_2;
    QProgressBar *bright_bar1;
    QProgressBar *bright_bar2;
    QWidget *tab_3;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QProgressBar *progressBar_5;
    QProgressBar *progressBar_6;

    void setupUi(QWidget *Staff)
    {
        if (Staff->objectName().isEmpty())
            Staff->setObjectName(QString::fromUtf8("Staff"));
        Staff->resize(1141, 648);
        horizontalLayout = new QHBoxLayout(Staff);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(Staff);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        ID = new QLabel(Staff);
        ID->setObjectName(QString::fromUtf8("ID"));

        horizontalLayout_3->addWidget(ID);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(Staff);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        COM = new QLabel(Staff);
        COM->setObjectName(QString::fromUtf8("COM"));

        horizontalLayout_4->addWidget(COM);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(Staff);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton = new QRadioButton(Staff);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(Staff);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(Staff);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(Staff);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(Staff);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout_2->addWidget(radioButton_5);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        tabWidget = new QTabWidget(Staff);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(531, 601));
        lcd_temp_2 = new QLCDNumber(tab);
        lcd_temp_2->setObjectName(QString::fromUtf8("lcd_temp_2"));
        lcd_temp_2->setGeometry(QRect(350, 100, 101, 31));
        temp_bar2 = new QProgressBar(tab);
        temp_bar2->setObjectName(QString::fromUtf8("temp_bar2"));
        temp_bar2->setGeometry(QRect(390, 160, 31, 331));
        temp_bar2->setValue(24);
        temp_bar2->setOrientation(Qt::Vertical);
        lcd_temp_1 = new QLCDNumber(tab);
        lcd_temp_1->setObjectName(QString::fromUtf8("lcd_temp_1"));
        lcd_temp_1->setGeometry(QRect(60, 100, 101, 31));
        temp_bar1 = new QProgressBar(tab);
        temp_bar1->setObjectName(QString::fromUtf8("temp_bar1"));
        temp_bar1->setGeometry(QRect(100, 160, 31, 331));
        temp_bar1->setValue(24);
        temp_bar1->setOrientation(Qt::Vertical);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lcd_bright_1 = new QLCDNumber(tab_2);
        lcd_bright_1->setObjectName(QString::fromUtf8("lcd_bright_1"));
        lcd_bright_1->setGeometry(QRect(60, 100, 101, 31));
        lcd_bright_2 = new QLCDNumber(tab_2);
        lcd_bright_2->setObjectName(QString::fromUtf8("lcd_bright_2"));
        lcd_bright_2->setGeometry(QRect(350, 100, 101, 31));
        bright_bar1 = new QProgressBar(tab_2);
        bright_bar1->setObjectName(QString::fromUtf8("bright_bar1"));
        bright_bar1->setGeometry(QRect(100, 160, 31, 331));
        bright_bar1->setValue(24);
        bright_bar1->setOrientation(Qt::Vertical);
        bright_bar2 = new QProgressBar(tab_2);
        bright_bar2->setObjectName(QString::fromUtf8("bright_bar2"));
        bright_bar2->setGeometry(QRect(390, 160, 31, 331));
        bright_bar2->setValue(24);
        bright_bar2->setOrientation(Qt::Vertical);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        lcdNumber_5 = new QLCDNumber(tab_3);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(350, 100, 101, 31));
        lcdNumber_6 = new QLCDNumber(tab_3);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));
        lcdNumber_6->setGeometry(QRect(60, 100, 101, 31));
        progressBar_5 = new QProgressBar(tab_3);
        progressBar_5->setObjectName(QString::fromUtf8("progressBar_5"));
        progressBar_5->setGeometry(QRect(100, 160, 31, 331));
        progressBar_5->setValue(24);
        progressBar_5->setOrientation(Qt::Vertical);
        progressBar_6 = new QProgressBar(tab_3);
        progressBar_6->setObjectName(QString::fromUtf8("progressBar_6"));
        progressBar_6->setGeometry(QRect(390, 160, 31, 331));
        progressBar_6->setValue(24);
        progressBar_6->setOrientation(Qt::Vertical);
        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(Staff);
        QObject::connect(temp_bar1, SIGNAL(valueChanged(int)), lcd_temp_1, SLOT(display(int)));
        QObject::connect(temp_bar2, SIGNAL(valueChanged(int)), lcd_temp_2, SLOT(display(int)));
        QObject::connect(bright_bar1, SIGNAL(valueChanged(int)), lcd_bright_1, SLOT(display(int)));
        QObject::connect(bright_bar2, SIGNAL(valueChanged(int)), lcd_bright_2, SLOT(display(int)));
        QObject::connect(progressBar_5, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(progressBar_6, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Staff);
    } // setupUi

    void retranslateUi(QWidget *Staff)
    {
        Staff->setWindowTitle(QApplication::translate("Staff", "Form", nullptr));
        label_2->setText(QApplication::translate("Staff", "Arduino ID:", nullptr));
        ID->setText(QApplication::translate("Staff", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("Staff", "COM:", nullptr));
        COM->setText(QApplication::translate("Staff", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("Staff", "INPUTS/OYTPUTS:", nullptr));
        radioButton->setText(QApplication::translate("Staff", "Object 1", nullptr));
        radioButton_2->setText(QApplication::translate("Staff", "Object 2", nullptr));
        radioButton_3->setText(QApplication::translate("Staff", "Object 3", nullptr));
        radioButton_4->setText(QApplication::translate("Staff", "Foto resistor", nullptr));
        radioButton_5->setText(QApplication::translate("Staff", "RadioButton", nullptr));
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
