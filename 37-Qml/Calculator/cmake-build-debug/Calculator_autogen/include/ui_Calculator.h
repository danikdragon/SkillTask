/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_24;
    QPushButton *pushButton_11;
    QPushButton *pushButton_19;
    QPushButton *pushButton_16;
    QPushButton *pushButton_23;
    QPushButton *pushButton_18;
    QPushButton *pushButton_10;
    QPushButton *pushButton_3;
    QPushButton *pushButton_13;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_17;
    QPushButton *pushButton_12;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_15;
    QPushButton *pushButton_14;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_9;
    QPushButton *pushButton_20;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(333, 529);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setFocusPolicy(Qt::NoFocus);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setAcceptDrops(false);
        MainWindow->setWindowTitle(QString::fromUtf8("Calculator"));
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setToolTipDuration(-1);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(32, 32, 32);\n"
"color:rgb(210, 210, 210);\n"
"border: 0px;"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        MainWindow->setDockOptions(QMainWindow::AnimatedDocks);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy1);
        pushButton_24->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_24->setAutoExclusive(false);
        pushButton_24->setAutoDefault(false);
        pushButton_24->setFlat(false);

        gridLayout->addWidget(pushButton_24, 1, 3, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton_11->setFont(font);
        pushButton_11->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_11->setAutoExclusive(false);
        pushButton_11->setAutoDefault(false);
        pushButton_11->setFlat(false);

        gridLayout->addWidget(pushButton_11, 3, 1, 1, 1);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setEnabled(true);
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setFont(font);
        pushButton_19->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_19->setAutoExclusive(false);
        pushButton_19->setAutoDefault(false);
        pushButton_19->setFlat(false);

        gridLayout->addWidget(pushButton_19, 1, 2, 1, 1);

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setFont(font);
        pushButton_16->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(9, 107, 176);\n"
"color:black;\n"
"border-radius: 5px;\n"
""));
        pushButton_16->setAutoExclusive(false);
        pushButton_16->setAutoDefault(false);
        pushButton_16->setFlat(false);

        gridLayout->addWidget(pushButton_16, 7, 3, 1, 1);

        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy1.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy1);
        pushButton_23->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_23->setAutoExclusive(false);
        pushButton_23->setAutoDefault(false);
        pushButton_23->setFlat(false);

        gridLayout->addWidget(pushButton_23, 2, 2, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setFont(font);
        pushButton_18->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_18->setAutoExclusive(false);
        pushButton_18->setAutoDefault(false);
        pushButton_18->setFlat(false);

        gridLayout->addWidget(pushButton_18, 1, 1, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setFont(font);
        pushButton_10->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_10->setAutoExclusive(false);
        pushButton_10->setAutoDefault(false);
        pushButton_10->setFlat(false);

        gridLayout->addWidget(pushButton_10, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_3->setAutoExclusive(false);
        pushButton_3->setAutoDefault(false);
        pushButton_3->setFlat(false);

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setFont(font);
        pushButton_13->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_13->setAutoExclusive(false);
        pushButton_13->setAutoDefault(false);
        pushButton_13->setFlat(false);

        gridLayout->addWidget(pushButton_13, 3, 3, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_4->setAutoExclusive(false);
        pushButton_4->setAutoDefault(false);
        pushButton_4->setFlat(false);

        gridLayout->addWidget(pushButton_4, 5, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_2->setAutoExclusive(false);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);

        gridLayout->addWidget(pushButton_2, 6, 0, 1, 1);

        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setFont(font);
        pushButton_17->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_17->setAutoExclusive(false);
        pushButton_17->setAutoDefault(false);
        pushButton_17->setFlat(false);

        gridLayout->addWidget(pushButton_17, 5, 0, 1, 1);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setFont(font);
        pushButton_12->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_12->setAutoExclusive(false);
        pushButton_12->setAutoDefault(false);
        pushButton_12->setFlat(false);

        gridLayout->addWidget(pushButton_12, 3, 2, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_5->setAutoExclusive(false);
        pushButton_5->setAutoDefault(false);
        pushButton_5->setFlat(false);

        gridLayout->addWidget(pushButton_5, 6, 1, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_8->setAutoExclusive(false);
        pushButton_8->setAutoDefault(false);
        pushButton_8->setFlat(false);

        gridLayout->addWidget(pushButton_8, 6, 2, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_6->setAutoExclusive(false);
        pushButton_6->setAutoDefault(false);
        pushButton_6->setFlat(false);

        gridLayout->addWidget(pushButton_6, 7, 1, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setFont(font);
        pushButton_15->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_15->setAutoExclusive(false);
        pushButton_15->setAutoDefault(false);
        pushButton_15->setFlat(false);

        gridLayout->addWidget(pushButton_15, 6, 3, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setFont(font);
        pushButton_14->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_14->setAutoExclusive(false);
        pushButton_14->setAutoDefault(false);
        pushButton_14->setFlat(false);

        gridLayout->addWidget(pushButton_14, 5, 3, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton->setAutoExclusive(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);

        gridLayout->addWidget(pushButton, 7, 0, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_7->setAutoExclusive(false);
        pushButton_7->setAutoDefault(false);
        pushButton_7->setFlat(false);

        gridLayout->addWidget(pushButton_7, 7, 2, 1, 1);

        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_21->setAutoExclusive(false);
        pushButton_21->setAutoDefault(false);
        pushButton_21->setFlat(false);

        gridLayout->addWidget(pushButton_21, 2, 0, 1, 1);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_22->setAutoExclusive(false);
        pushButton_22->setAutoDefault(false);
        pushButton_22->setFlat(false);

        gridLayout->addWidget(pushButton_22, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(100, 100, 100);\n"
"border-radius: 5px;"));
        pushButton_9->setAutoExclusive(false);
        pushButton_9->setAutoDefault(false);
        pushButton_9->setFlat(false);

        gridLayout->addWidget(pushButton_9, 5, 2, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setFont(font);
        pushButton_20->setStyleSheet(QString::fromUtf8("font: 14pt;\n"
"background-color:rgb(60, 60, 60);\n"
"border-radius: 5px;"));
        pushButton_20->setAutoExclusive(false);
        pushButton_20->setAutoDefault(false);
        pushButton_20->setFlat(false);

        gridLayout->addWidget(pushButton_20, 2, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(21);
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QString::fromUtf8("border-radius: 5px;"));

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(add_1()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(add_2()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(add_3()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(add_0()));
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(Negative()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(dot()));
        QObject::connect(pushButton_16, SIGNAL(clicked()), MainWindow, SLOT(equals()));
        QObject::connect(pushButton_15, SIGNAL(clicked()), MainWindow, SLOT(plus()));
        QObject::connect(pushButton_14, SIGNAL(clicked()), MainWindow, SLOT(minus()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), MainWindow, SLOT(multiply()));
        QObject::connect(pushButton_20, SIGNAL(clicked()), MainWindow, SLOT(dif()));
        QObject::connect(pushButton_19, SIGNAL(clicked()), MainWindow, SLOT(remove()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(percent()));
        QObject::connect(pushButton_18, SIGNAL(clicked()), MainWindow, SLOT(cleare()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(add_6()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(add_5()));
        QObject::connect(pushButton_17, SIGNAL(clicked()), MainWindow, SLOT(add_4()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), MainWindow, SLOT(add_9()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), MainWindow, SLOT(add_8()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(add_7()));
        QObject::connect(pushButton_24, SIGNAL(clicked()), MainWindow, SLOT(backSpace()));
        QObject::connect(pushButton_23, SIGNAL(clicked()), MainWindow, SLOT(root()));
        QObject::connect(pushButton_22, SIGNAL(clicked()), MainWindow, SLOT(squared()));
        QObject::connect(pushButton_21, SIGNAL(clicked()), MainWindow, SLOT(fractionX()));

        pushButton_24->setDefault(false);
        pushButton_11->setDefault(false);
        pushButton_19->setDefault(false);
        pushButton_16->setDefault(false);
        pushButton_23->setDefault(false);
        pushButton_18->setDefault(false);
        pushButton_10->setDefault(false);
        pushButton_3->setDefault(false);
        pushButton_13->setDefault(false);
        pushButton_4->setDefault(false);
        pushButton_2->setDefault(false);
        pushButton_17->setDefault(false);
        pushButton_12->setDefault(false);
        pushButton_5->setDefault(false);
        pushButton_8->setDefault(false);
        pushButton_6->setDefault(false);
        pushButton_15->setDefault(false);
        pushButton_14->setDefault(false);
        pushButton->setDefault(false);
        pushButton_7->setDefault(false);
        pushButton_21->setDefault(false);
        pushButton_22->setDefault(false);
        pushButton_9->setDefault(false);
        pushButton_20->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        pushButton_24->setText(QCoreApplication::translate("MainWindow", "<=", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "x\302\262 ", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:21pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
