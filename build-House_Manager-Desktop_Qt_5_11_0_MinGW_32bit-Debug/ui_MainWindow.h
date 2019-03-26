/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSettings;
    QAction *actionOnly_staff;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *menu_view;
    QGridLayout *window;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout_10;
    QCheckBox *Box_light_shed;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_13;
    QCheckBox *Box_chandelier;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_14;
    QCheckBox *Box_light_door;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *set_arduino;
    QCheckBox *box_arduino;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QPushButton *Button_light_shed;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_7;
    QPushButton *Button_chandelier;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_8;
    QPushButton *Button_light_door;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuStaff;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1135, 639);
        MainWindow->setStyleSheet(QString::fromUtf8("QCheckBox:unchecked {\n"
"  color: red;\n"
"}\n"
"QCheckBox:checked {\n"
"  color: green;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionOnly_staff = new QAction(MainWindow);
        actionOnly_staff->setObjectName(QString::fromUtf8("actionOnly_staff"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
"background-color: qconicalgradient(cx:0.466346, cy:0, angle:98.8604, stop:0.240385 rgba(1, 122, 0, 255), stop:0.552885 rgba(3, 64, 0, 255), stop:0.995192 rgba(10, 20, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"}\n"
"QPushButton:disabled\n"
"{\n"
"background-color: qconicalgradient(cx:0.504808, cy:0.0795455, angle:332.19, stop:0.0913462 rgba(0, 255, 5, 227), stop:0.533654 rgba(0, 255, 101, 236), stop:0.846154 rgba(0, 255, 98, 238));\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"}\n"
"QPushButton\n"
"{\n"
"background-color: qconicalgradient(cx:0.466346, cy:0, angle:98.8604, stop:0.240385 rgba(2, 255, 0, 255), stop:0.552885 rgba(7, 153, 0, 255), stop:0.995192 rgba(41, 81, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"}\n"
"	"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        menu_view = new QWidget(centralWidget);
        menu_view->setObjectName(QString::fromUtf8("menu_view"));
        sizePolicy.setHeightForWidth(menu_view->sizePolicy().hasHeightForWidth());
        menu_view->setSizePolicy(sizePolicy);
        window = new QGridLayout(menu_view);
        window->setSpacing(6);
        window->setContentsMargins(11, 11, 11, 11);
        window->setObjectName(QString::fromUtf8("window"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(menu_view);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 100));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"color:white;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(100, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        Box_light_shed = new QCheckBox(menu_view);
        Box_light_shed->setObjectName(QString::fromUtf8("Box_light_shed"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Box_light_shed->sizePolicy().hasHeightForWidth());
        Box_light_shed->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(16);
        Box_light_shed->setFont(font);
        Box_light_shed->setLayoutDirection(Qt::LeftToRight);
        Box_light_shed->setIconSize(QSize(50, 50));
        Box_light_shed->setCheckable(true);
        Box_light_shed->setTristate(false);

        gridLayout_10->addWidget(Box_light_shed, 0, 0, 1, 1, Qt::AlignHCenter);


        horizontalLayout_3->addLayout(gridLayout_10);

        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        Box_chandelier = new QCheckBox(menu_view);
        Box_chandelier->setObjectName(QString::fromUtf8("Box_chandelier"));
        sizePolicy2.setHeightForWidth(Box_chandelier->sizePolicy().hasHeightForWidth());
        Box_chandelier->setSizePolicy(sizePolicy2);
        Box_chandelier->setFont(font);
        Box_chandelier->setLayoutDirection(Qt::LeftToRight);
        Box_chandelier->setStyleSheet(QString::fromUtf8(""));
        Box_chandelier->setCheckable(true);
        Box_chandelier->setTristate(false);

        gridLayout_13->addWidget(Box_chandelier, 0, 0, 1, 1, Qt::AlignHCenter);


        horizontalLayout_3->addLayout(gridLayout_13);

        horizontalSpacer_7 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        Box_light_door = new QCheckBox(menu_view);
        Box_light_door->setObjectName(QString::fromUtf8("Box_light_door"));
        sizePolicy2.setHeightForWidth(Box_light_door->sizePolicy().hasHeightForWidth());
        Box_light_door->setSizePolicy(sizePolicy2);
        Box_light_door->setFont(font);
        Box_light_door->setLayoutDirection(Qt::LeftToRight);
        Box_light_door->setCheckable(true);
        Box_light_door->setTristate(false);

        gridLayout_14->addWidget(Box_light_door, 0, 0, 1, 1, Qt::AlignHCenter);

        horizontalSpacer_9 = new QSpacerItem(100, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_9, 0, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_14);


        gridLayout_2->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        set_arduino = new QPushButton(menu_view);
        set_arduino->setObjectName(QString::fromUtf8("set_arduino"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(set_arduino->sizePolicy().hasHeightForWidth());
        set_arduino->setSizePolicy(sizePolicy3);
        set_arduino->setMinimumSize(QSize(0, 30));
        set_arduino->setMaximumSize(QSize(1000, 80));
        set_arduino->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(set_arduino);

        box_arduino = new QCheckBox(menu_view);
        box_arduino->setObjectName(QString::fromUtf8("box_arduino"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(box_arduino->sizePolicy().hasHeightForWidth());
        box_arduino->setSizePolicy(sizePolicy4);
        box_arduino->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_5->addWidget(box_arduino);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_5, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        Button_light_shed = new QPushButton(menu_view);
        Button_light_shed->setObjectName(QString::fromUtf8("Button_light_shed"));
        sizePolicy.setHeightForWidth(Button_light_shed->sizePolicy().hasHeightForWidth());
        Button_light_shed->setSizePolicy(sizePolicy);
        Button_light_shed->setMinimumSize(QSize(0, 40));
        Button_light_shed->setMaximumSize(QSize(250, 300));
        Button_light_shed->setCheckable(true);
        Button_light_shed->setChecked(false);

        gridLayout_3->addWidget(Button_light_shed, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        Button_chandelier = new QPushButton(menu_view);
        Button_chandelier->setObjectName(QString::fromUtf8("Button_chandelier"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Button_chandelier->sizePolicy().hasHeightForWidth());
        Button_chandelier->setSizePolicy(sizePolicy5);
        Button_chandelier->setMinimumSize(QSize(0, 40));
        Button_chandelier->setMaximumSize(QSize(250, 300));

        gridLayout_7->addWidget(Button_chandelier, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        Button_light_door = new QPushButton(menu_view);
        Button_light_door->setObjectName(QString::fromUtf8("Button_light_door"));
        sizePolicy5.setHeightForWidth(Button_light_door->sizePolicy().hasHeightForWidth());
        Button_light_door->setSizePolicy(sizePolicy5);
        Button_light_door->setMinimumSize(QSize(20, 40));
        Button_light_door->setMaximumSize(QSize(250, 300));

        gridLayout_8->addWidget(Button_light_door, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_8);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);


        window->addLayout(gridLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(menu_view);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1135, 20));
        menuStaff = new QMenu(menuBar);
        menuStaff->setObjectName(QString::fromUtf8("menuStaff"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuStaff->menuAction());
        menuStaff->addAction(actionSettings);
        menuStaff->addSeparator();
        menuStaff->addAction(actionOnly_staff);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        actionOnly_staff->setText(QApplication::translate("MainWindow", "Only staff", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Inteligentny Dom</span></p></body></html>", nullptr));
        Box_light_shed->setText(QApplication::translate("MainWindow", "Za\305\202\304\205czony", nullptr));
        Box_chandelier->setText(QApplication::translate("MainWindow", "Za\305\202\304\205czony", nullptr));
        Box_light_door->setText(QApplication::translate("MainWindow", "Za\305\202\304\205czony", nullptr));
        set_arduino->setText(QApplication::translate("MainWindow", "Za\305\202\304\205cz ARDUINO", nullptr));
        box_arduino->setText(QApplication::translate("MainWindow", "ARDUINO", nullptr));
        Button_light_shed->setText(QApplication::translate("MainWindow", "Lampa wiata", nullptr));
        Button_chandelier->setText(QApplication::translate("MainWindow", "\305\273yrandol wiata", nullptr));
        Button_light_door->setText(QApplication::translate("MainWindow", "Drzwi", nullptr));
        menuStaff->setTitle(QApplication::translate("MainWindow", "Staff", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
