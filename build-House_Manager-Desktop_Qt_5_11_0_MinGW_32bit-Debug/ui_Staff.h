/********************************************************************************
** Form generated from reading UI file 'Staff.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFF_H
#define UI_STAFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Staff
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *ID;
    QFrame *line_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *COM;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *obj1;
    QCheckBox *obj2;
    QCheckBox *obj3;
    QCheckBox *foto_r;
    QCheckBox *therm;
    QPushButton *pushButton;
    QFrame *line_4;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLCDNumber *lcd_temp_1;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QProgressBar *temp_bar1;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QLCDNumber *lcd_bright_1;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_6;
    QProgressBar *bright_bar1;
    QWidget *tab_3;
    QLCDNumber *lcd_humid2;
    QLCDNumber *lcd_humid1;
    QProgressBar *humid_bar1;
    QProgressBar *humid_bar2;

    void setupUi(QWidget *Staff)
    {
        if (Staff->objectName().isEmpty())
            Staff->setObjectName(QStringLiteral("Staff"));
        Staff->resize(1141, 648);
        Staff->setStyleSheet(QLatin1String("QCheckBox:unchecked {\n"
"  color: red;\n"
"}\n"
"QCheckBox:checked {\n"
"  color: green;\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(Staff);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        line = new QFrame(Staff);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        line_3 = new QFrame(Staff);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(Staff);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(13);
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        ID = new QLabel(Staff);
        ID->setObjectName(QStringLiteral("ID"));
        QFont font1;
        font1.setPointSize(12);
        ID->setFont(font1);

        horizontalLayout_3->addWidget(ID);


        verticalLayout->addLayout(horizontalLayout_3);

        line_7 = new QFrame(Staff);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(Staff);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        COM = new QLabel(Staff);
        COM->setObjectName(QStringLiteral("COM"));
        COM->setFont(font1);

        horizontalLayout_4->addWidget(COM);


        verticalLayout->addLayout(horizontalLayout_4);

        line_6 = new QFrame(Staff);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(Staff);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        obj1 = new QCheckBox(Staff);
        obj1->setObjectName(QStringLiteral("obj1"));
        QFont font2;
        font2.setPointSize(10);
        obj1->setFont(font2);

        verticalLayout_2->addWidget(obj1);

        obj2 = new QCheckBox(Staff);
        obj2->setObjectName(QStringLiteral("obj2"));
        obj2->setFont(font2);

        verticalLayout_2->addWidget(obj2);

        obj3 = new QCheckBox(Staff);
        obj3->setObjectName(QStringLiteral("obj3"));
        obj3->setFont(font2);

        verticalLayout_2->addWidget(obj3);

        foto_r = new QCheckBox(Staff);
        foto_r->setObjectName(QStringLiteral("foto_r"));
        foto_r->setFont(font2);

        verticalLayout_2->addWidget(foto_r);

        therm = new QCheckBox(Staff);
        therm->setObjectName(QStringLiteral("therm"));
        therm->setFont(font2);

        verticalLayout_2->addWidget(therm);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_5);

        pushButton = new QPushButton(Staff);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        line_4 = new QFrame(Staff);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);


        horizontalLayout->addLayout(verticalLayout);

        line_2 = new QFrame(Staff);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        line_5 = new QFrame(Staff);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);

        tabWidget = new QTabWidget(Staff);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setMinimumSize(QSize(531, 601));
        lcd_temp_1 = new QLCDNumber(tab);
        lcd_temp_1->setObjectName(QStringLiteral("lcd_temp_1"));
        lcd_temp_1->setGeometry(QRect(160, 20, 101, 31));
        lcd_temp_1->setFrameShape(QFrame::StyledPanel);
        lcd_temp_1->setFrameShadow(QFrame::Plain);
        lcd_temp_1->setSegmentStyle(QLCDNumber::Flat);
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 70, 221, 451));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setPointSize(16);
        label->setFont(font3);
        label->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(60, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setFont(font3);
        label_4->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(label_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setFont(font3);
        label_6->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(label_6);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        temp_bar1 = new QProgressBar(gridLayoutWidget);
        temp_bar1->setObjectName(QStringLiteral("temp_bar1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(60);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(temp_bar1->sizePolicy().hasHeightForWidth());
        temp_bar1->setSizePolicy(sizePolicy);
        temp_bar1->setMinimumSize(QSize(40, 60));
        temp_bar1->setMinimum(-20);
        temp_bar1->setMaximum(60);
        temp_bar1->setValue(0);
        temp_bar1->setOrientation(Qt::Vertical);

        gridLayout->addWidget(temp_bar1, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lcd_bright_1 = new QLCDNumber(tab_2);
        lcd_bright_1->setObjectName(QStringLiteral("lcd_bright_1"));
        lcd_bright_1->setGeometry(QRect(160, 20, 101, 31));
        lcd_bright_1->setFrameShape(QFrame::StyledPanel);
        lcd_bright_1->setFrameShadow(QFrame::Plain);
        lcd_bright_1->setSegmentStyle(QLCDNumber::Flat);
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 70, 221, 451));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 16777215));
        label_7->setFont(font3);
        label_7->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_4->addWidget(label_7);

        verticalSpacer_4 = new QSpacerItem(60, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 16777215));
        label_8->setFont(font3);
        label_8->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_4->addWidget(label_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(16777215, 16777215));
        label_9->setFont(font3);
        label_9->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_4->addWidget(label_9);


        gridLayout_2->addLayout(verticalLayout_4, 1, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_6, 0, 1, 1, 1);

        bright_bar1 = new QProgressBar(gridLayoutWidget_2);
        bright_bar1->setObjectName(QStringLiteral("bright_bar1"));
        bright_bar1->setMinimumSize(QSize(40, 10));
        bright_bar1->setValue(0);
        bright_bar1->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(bright_bar1, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lcd_humid2 = new QLCDNumber(tab_3);
        lcd_humid2->setObjectName(QStringLiteral("lcd_humid2"));
        lcd_humid2->setGeometry(QRect(350, 100, 101, 31));
        lcd_humid1 = new QLCDNumber(tab_3);
        lcd_humid1->setObjectName(QStringLiteral("lcd_humid1"));
        lcd_humid1->setGeometry(QRect(60, 100, 101, 31));
        humid_bar1 = new QProgressBar(tab_3);
        humid_bar1->setObjectName(QStringLiteral("humid_bar1"));
        humid_bar1->setGeometry(QRect(100, 160, 31, 331));
        humid_bar1->setValue(0);
        humid_bar1->setOrientation(Qt::Vertical);
        humid_bar2 = new QProgressBar(tab_3);
        humid_bar2->setObjectName(QStringLiteral("humid_bar2"));
        humid_bar2->setGeometry(QRect(390, 160, 31, 331));
        humid_bar2->setValue(0);
        humid_bar2->setOrientation(Qt::Vertical);
        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(Staff);
        QObject::connect(temp_bar1, SIGNAL(valueChanged(int)), lcd_temp_1, SLOT(display(int)));
        QObject::connect(bright_bar1, SIGNAL(valueChanged(int)), lcd_bright_1, SLOT(display(int)));
        QObject::connect(humid_bar1, SIGNAL(valueChanged(int)), lcd_humid1, SLOT(display(int)));
        QObject::connect(humid_bar2, SIGNAL(valueChanged(int)), lcd_humid2, SLOT(display(int)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Staff);
    } // setupUi

    void retranslateUi(QWidget *Staff)
    {
        Staff->setWindowTitle(QApplication::translate("Staff", "Form", nullptr));
        label_2->setText(QApplication::translate("Staff", "Arduino ID:", nullptr));
        ID->setText(QApplication::translate("Staff", "<tekst>", nullptr));
        label_3->setText(QApplication::translate("Staff", "COM:", nullptr));
        COM->setText(QApplication::translate("Staff", "<tekst>", nullptr));
        label_5->setText(QApplication::translate("Staff", "<html><head/><body><p>INPUTS/</p><p>OYTPUTS:</p></body></html>", nullptr));
        obj1->setText(QApplication::translate("Staff", "Object 1", nullptr));
        obj2->setText(QApplication::translate("Staff", "Object 2", nullptr));
        obj3->setText(QApplication::translate("Staff", "Object 3", nullptr));
        foto_r->setText(QApplication::translate("Staff", "Foto resistor", nullptr));
        therm->setText(QApplication::translate("Staff", "Thermometer", nullptr));
        pushButton->setText(QApplication::translate("Staff", "EXIT", nullptr));
        label->setText(QApplication::translate("Staff", "<html><head/><body><p align=\"right\">60<span style=\" vertical-align:super;\">0</span>C-</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Staff", "<html><head/><body><p align=\"right\">0<span style=\" vertical-align:super;\">0</span>C-</p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Staff", "<html><head/><body><p align=\"right\">-20<span style=\" vertical-align:super;\">0</span>C-</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Staff", "Temperatura", nullptr));
        label_7->setText(QApplication::translate("Staff", "<html><head/><body><p align=\"right\">100%-</p></body></html>", nullptr));
        label_8->setText(QApplication::translate("Staff", "<html><head/><body><p align=\"right\">50%-</p></body></html>", nullptr));
        label_9->setText(QApplication::translate("Staff", "<html><head/><body><p align=\"right\">0%-</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Staff", "Jasno\305\233\304\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Staff", "Wilgo\304\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Staff: public Ui_Staff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFF_H
