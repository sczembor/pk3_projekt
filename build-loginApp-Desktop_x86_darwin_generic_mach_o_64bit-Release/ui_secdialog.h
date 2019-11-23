/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *InputValue;
    QComboBox *comboBox;
    QLabel *label;
    QDoubleSpinBox *OutputValue;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLCDNumber *lcdNumber_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLCDNumber *lcdNumber_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLCDNumber *lcdNumber_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLCDNumber *lcdNumber_5;
    QHBoxLayout *horizontalLayout_8;
    QLCDNumber *lcdNumber_6;
    QWidget *tab_3;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(667, 284);
        verticalLayout_4 = new QVBoxLayout(SecDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(SecDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        InputValue = new QDoubleSpinBox(tab);
        InputValue->setObjectName(QString::fromUtf8("InputValue"));
        InputValue->setMinimumSize(QSize(140, 25));
        InputValue->setWrapping(false);
        InputValue->setFrame(true);
        InputValue->setReadOnly(false);
        InputValue->setAccelerated(true);
        InputValue->setMaximum(99999.990000000005239);
        InputValue->setSingleStep(0.100000000000000);

        horizontalLayout->addWidget(InputValue);

        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(70, 25));
        comboBox->setCursor(QCursor(Qt::ArrowCursor));
        comboBox->setAutoFillBackground(false);

        horizontalLayout->addWidget(comboBox);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        OutputValue = new QDoubleSpinBox(tab);
        OutputValue->setObjectName(QString::fromUtf8("OutputValue"));
        OutputValue->setMinimumSize(QSize(120, 25));
        OutputValue->setReadOnly(true);
        OutputValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        OutputValue->setProperty("showGroupSeparator", QVariant(false));
        OutputValue->setMaximum(9999999.990000000223517);

        horizontalLayout->addWidget(OutputValue);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBox_2 = new QComboBox(tab);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(70, 25));
        comboBox_2->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout->addWidget(comboBox_2);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setPointSize(18);
        label_7->setFont(font);

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font1;
        font1.setPointSize(50);
        label_8->setFont(font1);

        gridLayout_3->addWidget(label_8, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lcdNumber = new QLCDNumber(tab_2);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout_3->addWidget(lcdNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lcdNumber_2 = new QLCDNumber(tab_2);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        horizontalLayout_4->addWidget(lcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lcdNumber_3 = new QLCDNumber(tab_2);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        horizontalLayout_5->addWidget(lcdNumber_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lcdNumber_4 = new QLCDNumber(tab_2);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        horizontalLayout_6->addWidget(lcdNumber_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        lcdNumber_5 = new QLCDNumber(tab_2);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        horizontalLayout_7->addWidget(lcdNumber_5);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lcdNumber_6 = new QLCDNumber(tab_2);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        horizontalLayout_8->addWidget(lcdNumber_6);


        gridLayout_3->addLayout(horizontalLayout_8, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout_4->addWidget(tabWidget);


        retranslateUi(SecDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Dialog", nullptr));
        comboBox->setItemText(0, QApplication::translate("SecDialog", "PLN", nullptr));
        comboBox->setItemText(1, QApplication::translate("SecDialog", "USD", nullptr));
        comboBox->setItemText(2, QApplication::translate("SecDialog", "EUR", nullptr));
        comboBox->setItemText(3, QApplication::translate("SecDialog", "CHF", nullptr));
        comboBox->setItemText(4, QApplication::translate("SecDialog", "GBP", nullptr));

        label->setText(QApplication::translate("SecDialog", "EXCHANGE FOR:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("SecDialog", "PLN", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("SecDialog", "USD", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("SecDialog", "EUR", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("SecDialog", "CHF", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("SecDialog", "GBP", nullptr));

        pushButton->setText(QApplication::translate("SecDialog", "EXCHANGE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SecDialog", "Exchange", nullptr));
        label_7->setText(QApplication::translate("SecDialog", "Total wallet worth: ", nullptr));
        label_8->setText(QApplication::translate("SecDialog", "$", nullptr));
        label_2->setText(QApplication::translate("SecDialog", "BTC :", nullptr));
        label_3->setText(QApplication::translate("SecDialog", "ETH :", nullptr));
        label_4->setText(QApplication::translate("SecDialog", "NEO :", nullptr));
        label_5->setText(QApplication::translate("SecDialog", "BAT :", nullptr));
        label_6->setText(QApplication::translate("SecDialog", "BCC :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SecDialog", "Wallet", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SecDialog", "Charts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
