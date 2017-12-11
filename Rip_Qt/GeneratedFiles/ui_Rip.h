/********************************************************************************
** Form generated from reading UI file 'Rip.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIP_H
#define UI_RIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_18;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget_2;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QTableWidget *tableWidget_7;
    QTableWidget *tableWidget_8;
    QTableWidget *tableWidget_9;
    QLabel *label_12;
    QTableWidget *tableWidget_6;
    QTableWidget *tableWidget_3;
    QTableWidget *tableWidget_4;
    QTableWidget *tableWidget_5;
    QTableWidget *tableWidget_10;
    QTextEdit *logs;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *currentText;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *neighborText;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_16;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1289, 923);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(40, 0, 451, 321));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Rip/images/top.png);"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(70, 210, 20, 20));
        label_17->setStyleSheet(QStringLiteral(""));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(180, 140, 21, 21));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(310, 136, 21, 20));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(250, 200, 21, 21));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(300, 290, 21, 21));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(240, 10, 21, 21));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(380, 80, 21, 21));
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(430, 180, 21, 21));
        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(160, 280, 21, 21));
        label_25->setStyleSheet(QStringLiteral("image: url(:/images/light.gif);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(550, 70, 141, 171));
        verticalLayout_18 = new QVBoxLayout(layoutWidget);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(5, 206, 79);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_18->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 0, 0);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_18->addWidget(pushButton_2);

        tableWidget_2 = new QTableWidget(centralWidget);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(40, 330, 221, 191));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 531, 54, 21));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 540, 54, 12));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(600, 540, 54, 12));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(860, 540, 54, 12));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(110, 770, 54, 12));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(360, 770, 54, 12));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(600, 770, 54, 12));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(850, 770, 54, 12));
        tableWidget_7 = new QTableWidget(centralWidget);
        tableWidget_7->setObjectName(QStringLiteral("tableWidget_7"));
        tableWidget_7->setGeometry(QRect(40, 560, 221, 191));
        tableWidget_8 = new QTableWidget(centralWidget);
        tableWidget_8->setObjectName(QStringLiteral("tableWidget_8"));
        tableWidget_8->setGeometry(QRect(280, 560, 221, 191));
        tableWidget_9 = new QTableWidget(centralWidget);
        tableWidget_9->setObjectName(QStringLiteral("tableWidget_9"));
        tableWidget_9->setGeometry(QRect(530, 560, 221, 191));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(1110, 540, 54, 12));
        tableWidget_6 = new QTableWidget(centralWidget);
        tableWidget_6->setObjectName(QStringLiteral("tableWidget_6"));
        tableWidget_6->setGeometry(QRect(1010, 330, 221, 191));
        tableWidget_3 = new QTableWidget(centralWidget);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(280, 330, 221, 191));
        tableWidget_4 = new QTableWidget(centralWidget);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(520, 330, 221, 191));
        tableWidget_5 = new QTableWidget(centralWidget);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(760, 330, 221, 191));
        tableWidget_10 = new QTableWidget(centralWidget);
        tableWidget_10->setObjectName(QStringLiteral("tableWidget_10"));
        tableWidget_10->setGeometry(QRect(770, 560, 221, 191));
        logs = new QTextEdit(centralWidget);
        logs->setObjectName(QStringLiteral("logs"));
        logs->setGeometry(QRect(40, 820, 1191, 71));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(940, 60, 271, 181));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 18pt \"Consolas\";"));

        horizontalLayout->addWidget(label_2);

        currentText = new QLabel(layoutWidget1);
        currentText->setObjectName(QStringLiteral("currentText"));
        currentText->setStyleSheet(QStringLiteral("font: 18pt \"Consolas\";"));

        horizontalLayout->addWidget(currentText);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 18pt \"Consolas\";"));

        horizontalLayout_2->addWidget(label_3);

        neighborText = new QLabel(layoutWidget1);
        neighborText->setObjectName(QStringLiteral("neighborText"));
        neighborText->setStyleSheet(QStringLiteral("font: 18pt \"Consolas\";"));

        horizontalLayout_2->addWidget(neighborText);


        verticalLayout->addLayout(horizontalLayout_2);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 780, 71, 51));
        label_4->setStyleSheet(QStringLiteral("font: 19pt \"Consolas\";"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 250, 54, 12));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 300, 54, 12));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 130, 54, 12));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(220, 210, 54, 12));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(270, 270, 54, 12));
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(280, 150, 54, 12));
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(250, 40, 54, 12));
        label_29 = new QLabel(centralWidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(390, 60, 54, 12));
        label_30 = new QLabel(centralWidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(450, 160, 54, 12));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QApplication::translate("MainWindow", "router1", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "router2", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "router3", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "router4", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "router6", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "router7", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "router8", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "router9", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "router5", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\350\267\257\347\224\261\345\231\250\357\274\232", nullptr));
        currentText->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\347\233\270\351\202\273\350\267\257\347\224\261\345\231\250\357\274\232", nullptr));
        neighborText->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Logs:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "2", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "3", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "4", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "6", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "7", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "8", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIP_H
