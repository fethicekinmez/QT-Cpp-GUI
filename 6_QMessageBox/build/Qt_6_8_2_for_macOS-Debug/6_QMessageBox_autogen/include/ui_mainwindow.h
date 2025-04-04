/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAbout;
    QPushButton *btnAboutQt;
    QPushButton *btnCritical;
    QPushButton *btnInformation;
    QPushButton *btnQuestion;
    QPushButton *pushButton_6;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnAsk;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 80, 160, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnAbout = new QPushButton(verticalLayoutWidget);
        btnAbout->setObjectName("btnAbout");

        verticalLayout->addWidget(btnAbout);

        btnAboutQt = new QPushButton(verticalLayoutWidget);
        btnAboutQt->setObjectName("btnAboutQt");

        verticalLayout->addWidget(btnAboutQt);

        btnCritical = new QPushButton(verticalLayoutWidget);
        btnCritical->setObjectName("btnCritical");

        verticalLayout->addWidget(btnCritical);

        btnInformation = new QPushButton(verticalLayoutWidget);
        btnInformation->setObjectName("btnInformation");

        verticalLayout->addWidget(btnInformation);

        btnQuestion = new QPushButton(verticalLayoutWidget);
        btnQuestion->setObjectName("btnQuestion");

        verticalLayout->addWidget(btnQuestion);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout->addWidget(pushButton_6);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(280, 110, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnAsk = new QPushButton(verticalLayoutWidget_2);
        btnAsk->setObjectName("btnAsk");

        verticalLayout_2->addWidget(btnAsk);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        btnAboutQt->setText(QCoreApplication::translate("MainWindow", "AboutQt", nullptr));
        btnCritical->setText(QCoreApplication::translate("MainWindow", "Critical", nullptr));
        btnInformation->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        btnQuestion->setText(QCoreApplication::translate("MainWindow", "Question", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Warning", nullptr));
        btnAsk->setText(QCoreApplication::translate("MainWindow", "Ask", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
