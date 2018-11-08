/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSettings;
    QAction *actionOnly_staff;
    QWidget *centralWidget;
    QWidget *menu_view;
    QGridLayout *window;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *set_arduino;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QPushButton *Button_light_shed;
    QGridLayout *gridLayout_7;
    QPushButton *Button_chandelier;
    QGridLayout *gridLayout_8;
    QPushButton *Button_light_door;
    QGridLayout *gridLayout_9;
    QPushButton *pushButton_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_10;
    QCheckBox *Box_light_shed;
    QGridLayout *gridLayout_13;
    QCheckBox *Box_chandelier;
    QGridLayout *gridLayout_14;
    QCheckBox *Box_light_door;
    QGridLayout *gridLayout_12;
    QCheckBox *checkBox_3;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_2;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menuBar;
    QMenu *menuStaff;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(623, 385);
        MainWindow->setStyleSheet(QLatin1String("QCheckBox:unchecked {\n"
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
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionOnly_staff = new QAction(MainWindow);
        actionOnly_staff->setObjectName(QStringLiteral("actionOnly_staff"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: grey;\n"
"}"));
        menu_view = new QWidget(centralWidget);
        menu_view->setObjectName(QStringLiteral("menu_view"));
        menu_view->setGeometry(QRect(0, 0, 621, 351));
        window = new QGridLayout(menu_view);
        window->setSpacing(6);
        window->setContentsMargins(11, 11, 11, 11);
        window->setObjectName(QStringLiteral("window"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        set_arduino = new QPushButton(menu_view);
        set_arduino->setObjectName(QStringLiteral("set_arduino"));
        set_arduino->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(set_arduino);

        checkBox = new QCheckBox(menu_view);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_5->addWidget(checkBox);


        gridLayout_2->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Button_light_shed = new QPushButton(menu_view);
        Button_light_shed->setObjectName(QStringLiteral("Button_light_shed"));
        Button_light_shed->setMinimumSize(QSize(0, 40));
        Button_light_shed->setCheckable(true);
        Button_light_shed->setChecked(false);

        gridLayout_3->addWidget(Button_light_shed, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        Button_chandelier = new QPushButton(menu_view);
        Button_chandelier->setObjectName(QStringLiteral("Button_chandelier"));
        Button_chandelier->setMinimumSize(QSize(0, 40));

        gridLayout_7->addWidget(Button_chandelier, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_7);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        Button_light_door = new QPushButton(menu_view);
        Button_light_door->setObjectName(QStringLiteral("Button_light_door"));
        Button_light_door->setMinimumSize(QSize(0, 40));

        gridLayout_8->addWidget(Button_light_door, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_8);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        pushButton_4 = new QPushButton(menu_view);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 40));

        gridLayout_9->addWidget(pushButton_4, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_9);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_5 = new QPushButton(menu_view);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(pushButton_5, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(menu_view);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 50));
        label->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: grey;\n"
"}"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        Box_light_shed = new QCheckBox(menu_view);
        Box_light_shed->setObjectName(QStringLiteral("Box_light_shed"));
        Box_light_shed->setLayoutDirection(Qt::LeftToRight);
        Box_light_shed->setCheckable(true);
        Box_light_shed->setTristate(false);

        gridLayout_10->addWidget(Box_light_shed, 0, 0, 1, 1, Qt::AlignHCenter);


        horizontalLayout_3->addLayout(gridLayout_10);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        Box_chandelier = new QCheckBox(menu_view);
        Box_chandelier->setObjectName(QStringLiteral("Box_chandelier"));
        Box_chandelier->setLayoutDirection(Qt::LeftToRight);
        Box_chandelier->setStyleSheet(QStringLiteral(""));
        Box_chandelier->setCheckable(true);
        Box_chandelier->setTristate(false);

        gridLayout_13->addWidget(Box_chandelier, 0, 0, 1, 1, Qt::AlignHCenter);


        horizontalLayout_3->addLayout(gridLayout_13);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        Box_light_door = new QCheckBox(menu_view);
        Box_light_door->setObjectName(QStringLiteral("Box_light_door"));
        Box_light_door->setLayoutDirection(Qt::LeftToRight);
        Box_light_door->setCheckable(true);
        Box_light_door->setTristate(false);

        gridLayout_14->addWidget(Box_light_door, 0, 0, 1, 1, Qt::AlignHCenter);


        horizontalLayout_3->addLayout(gridLayout_14);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        checkBox_3 = new QCheckBox(menu_view);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setLayoutDirection(Qt::LeftToRight);
        checkBox_3->setCheckable(true);
        checkBox_3->setTristate(false);

        gridLayout_12->addWidget(checkBox_3, 0, 0, 1, 1, Qt::AlignHCenter);


        horizontalLayout_3->addLayout(gridLayout_12);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        checkBox_2 = new QCheckBox(menu_view);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setLayoutDirection(Qt::LeftToRight);
        checkBox_2->setCheckable(true);
        checkBox_2->setTristate(false);

        gridLayout_5->addWidget(checkBox_2, 0, 0, 1, 1, Qt::AlignHCenter);


        horizontalLayout_3->addLayout(gridLayout_5);


        gridLayout_2->addLayout(horizontalLayout_3, 4, 0, 1, 1);


        window->addLayout(gridLayout_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        window->addItem(verticalSpacer_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 623, 20));
        menuStaff = new QMenu(menuBar);
        menuStaff->setObjectName(QStringLiteral("menuStaff"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
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
        set_arduino->setText(QApplication::translate("MainWindow", "Za\305\202\304\205cz ARDUINO", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "ARDUINO", nullptr));
        Button_light_shed->setText(QApplication::translate("MainWindow", "Lampa wiata", nullptr));
        Button_chandelier->setText(QApplication::translate("MainWindow", "\305\273yrandol wiata", nullptr));
        Button_light_door->setText(QApplication::translate("MainWindow", "Drzwi", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Przeka\305\272nik 4", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Przeka\305\272nik 5", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Inteligentny Dom</span></p></body></html>", nullptr));
        Box_light_shed->setText(QApplication::translate("MainWindow", "Za\305\202\304\205czony", nullptr));
        Box_chandelier->setText(QApplication::translate("MainWindow", "Za\305\202\304\205czony", nullptr));
        Box_light_door->setText(QApplication::translate("MainWindow", "Za\305\202\304\205czony", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "Za\305\202\304\205czony", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "Za\305\202\304\205czony", nullptr));
        menuStaff->setTitle(QApplication::translate("MainWindow", "Staff", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
