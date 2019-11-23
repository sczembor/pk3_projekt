/********************************************************************************
** Form generated from reading UI file 'loginapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINAPP_H
#define UI_LOGINAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginApp
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginApp)
    {
        if (loginApp->objectName().isEmpty())
            loginApp->setObjectName(QString::fromUtf8("loginApp"));
        loginApp->resize(343, 227);
        centralwidget = new QWidget(loginApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 291, 171));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));

        verticalLayout_2->addWidget(pushButton_login);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        loginApp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginApp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 343, 22));
        loginApp->setMenuBar(menubar);
        statusbar = new QStatusBar(loginApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        loginApp->setStatusBar(statusbar);

        retranslateUi(loginApp);

        QMetaObject::connectSlotsByName(loginApp);
    } // setupUi

    void retranslateUi(QMainWindow *loginApp)
    {
        loginApp->setWindowTitle(QApplication::translate("loginApp", "loginApp", nullptr));
        groupBox->setTitle(QApplication::translate("loginApp", "LogIn", nullptr));
        label->setText(QApplication::translate("loginApp", "username:", nullptr));
        label_2->setText(QApplication::translate("loginApp", "password:", nullptr));
        pushButton_login->setText(QApplication::translate("loginApp", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginApp: public Ui_loginApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINAPP_H
