/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QTextEdit *textEdit;
    QTableView *resultTableView;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        radioButton = new QRadioButton(tab);
        radioButton->setObjectName("radioButton");

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(tab);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout_2->addWidget(radioButton_3);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        textEdit = new QTextEdit(tab);
        textEdit->setObjectName("textEdit");

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 1);

        resultTableView = new QTableView(tab);
        resultTableView->setObjectName("resultTableView");

        gridLayout_2->addWidget(resultTableView, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\211\253\346\217\217", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\345\277\253\351\200\237\346\211\253\346\217\217", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\345\205\250\347\233\230\346\211\253\346\217\217", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\346\211\253\346\217\217", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\211\253\346\217\217\350\267\257\345\276\204\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\346\201\266\346\204\217\344\273\243\347\240\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Webshell", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
