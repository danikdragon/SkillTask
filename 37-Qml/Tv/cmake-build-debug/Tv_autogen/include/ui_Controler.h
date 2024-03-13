/********************************************************************************
** Form generated from reading UI file 'Controler.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLER_H
#define UI_CONTROLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TvControler
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_11;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_14;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_13;
    QPushButton *pushButton_8;
    QPushButton *pushButton_15;
    QPushButton *pushButton_2;
    QPushButton *pushButton_12;

    void setupUi(QMainWindow *TvControler)
    {
        if (TvControler->objectName().isEmpty())
            TvControler->setObjectName(QString::fromUtf8("TvControler"));
        TvControler->resize(295, 523);
        TvControler->setWindowTitle(QString::fromUtf8("Controler"));
        TvControler->setStyleSheet(QString::fromUtf8("background-color: rgb(168, 168, 168);"));
        centralwidget = new QWidget(TvControler);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setAcceptDrops(true);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 170, 0);\n"
"font:17pt;\n"
"align:\"center\";"));

        verticalLayout->addWidget(textEdit);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy2.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy2);
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_11, 4, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy2.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy2);
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_10, 4, 1, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy2.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy2);
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_14, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy2.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy2);
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_13, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy2.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy2);
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_15, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy2.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy2);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(226, 226, 226);\n"
"font: 14pt;"));

        gridLayout_3->addWidget(pushButton_12, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        TvControler->setCentralWidget(centralwidget);

        retranslateUi(TvControler);
        QObject::connect(pushButton_13, SIGNAL(clicked()), TvControler, SLOT(start_end()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), TvControler, SLOT(previous()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), TvControler, SLOT(next()));
        QObject::connect(pushButton_14, SIGNAL(clicked()), TvControler, SLOT(plus()));
        QObject::connect(pushButton_15, SIGNAL(clicked()), TvControler, SLOT(minus()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), TvControler, SLOT(set_0()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), TvControler, SLOT(set_1()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), TvControler, SLOT(set_2()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), TvControler, SLOT(set_3()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), TvControler, SLOT(set_6()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), TvControler, SLOT(set_5()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), TvControler, SLOT(set_4()));
        QObject::connect(pushButton, SIGNAL(clicked()), TvControler, SLOT(set_7()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), TvControler, SLOT(set_8()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), TvControler, SLOT(set_9()));

        QMetaObject::connectSlotsByName(TvControler);
    } // setupUi

    void retranslateUi(QMainWindow *TvControler)
    {
        textEdit->setHtml(QCoreApplication::translate("TvControler", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:17pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("TvControler", "7", nullptr));
        pushButton_11->setText(QCoreApplication::translate("TvControler", "<", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TvControler", "4", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TvControler", "9", nullptr));
        pushButton_10->setText(QCoreApplication::translate("TvControler", "0", nullptr));
        pushButton_14->setText(QCoreApplication::translate("TvControler", "+", nullptr));
        pushButton_5->setText(QCoreApplication::translate("TvControler", "5", nullptr));
        pushButton_9->setText(QCoreApplication::translate("TvControler", "3", nullptr));
        pushButton_7->setText(QCoreApplication::translate("TvControler", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("TvControler", "6", nullptr));
        pushButton_13->setText(QCoreApplication::translate("TvControler", "\320\222\320\272\320\273/\320\262\321\213\320\272\320\273", nullptr));
        pushButton_8->setText(QCoreApplication::translate("TvControler", "2", nullptr));
        pushButton_15->setText(QCoreApplication::translate("TvControler", "-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TvControler", "8", nullptr));
        pushButton_12->setText(QCoreApplication::translate("TvControler", ">", nullptr));
        (void)TvControler;
    } // retranslateUi

};

namespace Ui {
    class TvControler: public Ui_TvControler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLER_H
