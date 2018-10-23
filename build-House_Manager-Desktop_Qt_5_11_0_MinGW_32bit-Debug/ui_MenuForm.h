/********************************************************************************
** Form generated from reading UI file 'MenuForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUFORM_H
#define UI_MENUFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuForm
{
public:
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QListWidget *timerlist;
    QPushButton *Button_save_quit;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLabel *name_object;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLabel *pinout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Button_on;
    QPushButton *Button_off;
    QWidget *Timer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *Name_timer;
    QSpacerItem *horizontalSpacer;
    QLabel *Name;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label;
    QLabel *set_time;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_5;
    QLabel *duration;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *Timer_on;
    QPushButton *Timer_off;
    QWidget *Settings;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_3;
    QTimeEdit *timer_3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_2;
    QSpinBox *minutes_dur;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_set;

    void setupUi(QWidget *MenuForm)
    {
        if (MenuForm->objectName().isEmpty())
            MenuForm->setObjectName(QStringLiteral("MenuForm"));
        MenuForm->resize(626, 411);
        MenuForm->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: grey;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"\n"
"}"));
        verticalLayoutWidget_4 = new QWidget(MenuForm);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(0, 0, 261, 351));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        timerlist = new QListWidget(verticalLayoutWidget_4);
        timerlist->setObjectName(QStringLiteral("timerlist"));

        verticalLayout_5->addWidget(timerlist);

        Button_save_quit = new QPushButton(verticalLayoutWidget_4);
        Button_save_quit->setObjectName(QStringLiteral("Button_save_quit"));
        Button_save_quit->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(Button_save_quit);

        progressBar = new QProgressBar(verticalLayoutWidget_4);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_5->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_5->addItem(verticalSpacer);

        tabWidget = new QTabWidget(MenuForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(260, 0, 361, 351));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::tab-bar {\n"
"    left: 120%; \n"
"}\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8px;\n"
"    padding: 2px;\n"
"	color: black;\n"
"}\n"
"QTabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"/* make use of negative margins for overlapping tabs */\n"
"QTabBar::tab:selected {\n"
"    /* expand/overlap to the left and right by 4px */\n"
"    margin-left: -4px;\n"
"    margin-right: -4px;\n"
"}\n"
"\n"
"QTabBar::tab:first:selected {\n"
"    marg"
                        "in-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"}\n"
"\n"
"QTabBar::tab:only-one {\n"
"    margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}\n"
""));
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 10, 331, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(11);
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: grey;\n"
"}"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        name_object = new QLabel(verticalLayoutWidget_3);
        name_object->setObjectName(QStringLiteral("name_object"));
        name_object->setMaximumSize(QSize(16777215, 50));
        name_object->setFont(font);
        name_object->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"color:black;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: white;\n"
"}"));
        name_object->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(name_object);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(verticalLayoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(16777215, 50));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: grey;\n"
"}"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_9);

        pinout = new QLabel(verticalLayoutWidget_3);
        pinout->setObjectName(QStringLiteral("pinout"));
        pinout->setMaximumSize(QSize(16777215, 50));
        pinout->setFont(font);
        pinout->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"color:black;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: white;\n"
"}"));
        pinout->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(pinout);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Button_on = new QPushButton(verticalLayoutWidget_3);
        Button_on->setObjectName(QStringLiteral("Button_on"));
        Button_on->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(Button_on);

        Button_off = new QPushButton(verticalLayoutWidget_3);
        Button_off->setObjectName(QStringLiteral("Button_off"));
        Button_off->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(Button_off);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab, QString());
        Timer = new QWidget();
        Timer->setObjectName(QStringLiteral("Timer"));
        verticalLayoutWidget_2 = new QWidget(Timer);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 10, 331, 301));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        Name_timer = new QHBoxLayout();
        Name_timer->setObjectName(QStringLiteral("Name_timer"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        Name_timer->addItem(horizontalSpacer);

        Name = new QLabel(verticalLayoutWidget_2);
        Name->setObjectName(QStringLiteral("Name"));
        QFont font1;
        font1.setPointSize(13);
        Name->setFont(font1);
        Name->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"color:black;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: white;\n"
"}"));
        Name->setAlignment(Qt::AlignCenter);

        Name_timer->addWidget(Name);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        Name_timer->addItem(horizontalSpacer_2);


        verticalLayout_11->addLayout(Name_timer);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: grey;\n"
"}"));

        horizontalLayout_20->addWidget(label);

        set_time = new QLabel(verticalLayoutWidget_2);
        set_time->setObjectName(QStringLiteral("set_time"));
        QFont font2;
        font2.setPointSize(11);
        font2.setKerning(true);
        set_time->setFont(font2);
        set_time->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(set_time);


        verticalLayout_11->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: grey;\n"
"}"));

        horizontalLayout_21->addWidget(label_5);

        duration = new QLabel(verticalLayoutWidget_2);
        duration->setObjectName(QStringLiteral("duration"));
        duration->setFont(font2);
        duration->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(duration);


        verticalLayout_11->addLayout(horizontalLayout_21);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        Timer_on = new QPushButton(verticalLayoutWidget_2);
        Timer_on->setObjectName(QStringLiteral("Timer_on"));
        Timer_on->setMinimumSize(QSize(0, 40));

        horizontalLayout_19->addWidget(Timer_on);

        Timer_off = new QPushButton(verticalLayoutWidget_2);
        Timer_off->setObjectName(QStringLiteral("Timer_off"));
        Timer_off->setMinimumSize(QSize(0, 40));

        horizontalLayout_19->addWidget(Timer_off);


        verticalLayout_11->addLayout(horizontalLayout_19);

        tabWidget->addTab(Timer, QString());
        Settings = new QWidget();
        Settings->setObjectName(QStringLiteral("Settings"));
        verticalLayoutWidget = new QWidget(Settings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 0, 311, 221));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: grey;\n"
"}"));

        horizontalLayout_18->addWidget(label_3);

        timer_3 = new QTimeEdit(verticalLayoutWidget);
        timer_3->setObjectName(QStringLiteral("timer_3"));
        timer_3->setMinimumSize(QSize(0, 50));
        timer_3->setFont(font);

        horizontalLayout_18->addWidget(timer_3);


        verticalLayout_10->addLayout(horizontalLayout_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: black;\n"
"background-color: grey;\n"
"}"));

        horizontalLayout_17->addWidget(label_2);

        minutes_dur = new QSpinBox(verticalLayoutWidget);
        minutes_dur->setObjectName(QStringLiteral("minutes_dur"));
        minutes_dur->setMinimumSize(QSize(0, 50));
        minutes_dur->setFont(font);

        horizontalLayout_17->addWidget(minutes_dur);


        verticalLayout_10->addLayout(horizontalLayout_17);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Button_set = new QPushButton(verticalLayoutWidget);
        Button_set->setObjectName(QStringLiteral("Button_set"));
        Button_set->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(Button_set);


        verticalLayout_10->addLayout(horizontalLayout);

        tabWidget->addTab(Settings, QString());

        retranslateUi(MenuForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MenuForm);
    } // setupUi

    void retranslateUi(QWidget *MenuForm)
    {
        MenuForm->setWindowTitle(QApplication::translate("MenuForm", "Form", nullptr));
        Button_save_quit->setText(QApplication::translate("MenuForm", "Save/Quit", nullptr));
        label_7->setText(QApplication::translate("MenuForm", "Name:", nullptr));
        name_object->setText(QString());
        label_9->setText(QApplication::translate("MenuForm", "Pinout:", nullptr));
        pinout->setText(QString());
        Button_on->setText(QApplication::translate("MenuForm", "ON", nullptr));
        Button_off->setText(QApplication::translate("MenuForm", "OFF", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MenuForm", "Device", nullptr));
        Name->setText(QApplication::translate("MenuForm", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label->setText(QApplication::translate("MenuForm", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; text-decoration: underline;\">Set on:</span></p></body></html>", nullptr));
        set_time->setText(QString());
        label_5->setText(QApplication::translate("MenuForm", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; text-decoration: underline;\">Duration (min):</span></p></body></html>", nullptr));
        duration->setText(QString());
        Timer_on->setText(QApplication::translate("MenuForm", "Timer ON", nullptr));
        Timer_off->setText(QApplication::translate("MenuForm", "Timer OFF", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Timer), QApplication::translate("MenuForm", "Timer", nullptr));
        label_3->setText(QApplication::translate("MenuForm", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; text-decoration: underline;\">Set time:</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MenuForm", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; text-decoration: underline;\">The length of time:</span></p></body></html>", nullptr));
        Button_set->setText(QApplication::translate("MenuForm", "Set", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Settings), QApplication::translate("MenuForm", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuForm: public Ui_MenuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUFORM_H
