/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnAdd;
    QPushButton *btnSubstract;
    QPushButton *btnMultiply;
    QPushButton *btnDivide;
    QLineEdit *txtFirstNum;
    QLineEdit *txtSecondNum;
    QLineEdit *txtResult;
    QPushButton *Desk;
    QLabel *label_4;
    QLineEdit *txtThirdNum;
    QLabel *label_5;
    QLineEdit *txtEnd;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 50, 151, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 120, 161, 21));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 380, 81, 41));
        label_3->setFont(font);
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(60, 240, 131, 51));
        QFont font1;
        font1.setPointSize(27);
        btnAdd->setFont(font1);
        btnSubstract = new QPushButton(centralwidget);
        btnSubstract->setObjectName("btnSubstract");
        btnSubstract->setGeometry(QRect(240, 240, 131, 51));
        btnSubstract->setFont(font1);
        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        btnMultiply->setGeometry(QRect(410, 240, 131, 51));
        btnMultiply->setFont(font1);
        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        btnDivide->setGeometry(QRect(580, 240, 131, 51));
        QFont font2;
        font2.setPointSize(24);
        btnDivide->setFont(font2);
        txtFirstNum = new QLineEdit(centralwidget);
        txtFirstNum->setObjectName("txtFirstNum");
        txtFirstNum->setGeometry(QRect(230, 50, 381, 41));
        QFont font3;
        font3.setPointSize(15);
        txtFirstNum->setFont(font3);
        txtSecondNum = new QLineEdit(centralwidget);
        txtSecondNum->setObjectName("txtSecondNum");
        txtSecondNum->setGeometry(QRect(230, 110, 381, 41));
        txtSecondNum->setFont(font3);
        txtResult = new QLineEdit(centralwidget);
        txtResult->setObjectName("txtResult");
        txtResult->setGeometry(QRect(160, 380, 381, 41));
        txtResult->setFont(font3);
        txtResult->setReadOnly(true);
        Desk = new QPushButton(centralwidget);
        Desk->setObjectName("Desk");
        Desk->setGeometry(QRect(60, 310, 651, 51));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 170, 151, 41));
        label_4->setFont(font);
        txtThirdNum = new QLineEdit(centralwidget);
        txtThirdNum->setObjectName("txtThirdNum");
        txtThirdNum->setGeometry(QRect(230, 170, 381, 41));
        txtThirdNum->setFont(font3);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 450, 81, 41));
        label_5->setFont(font);
        txtEnd = new QLineEdit(centralwidget);
        txtEnd->setObjectName("txtEnd");
        txtEnd->setGeometry(QRect(160, 450, 381, 41));
        txtEnd->setFont(font3);
        txtEnd->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Number:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second Number: ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSubstract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Desk->setText(QCoreApplication::translate("MainWindow", "Descriminant", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Third Number:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "End:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
