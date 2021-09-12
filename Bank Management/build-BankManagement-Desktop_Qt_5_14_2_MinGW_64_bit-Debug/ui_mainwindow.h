/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHome;
    QAction *actionBack;
    QAction *actionNext;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_NewAcc;
    QPushButton *pushButton_SearchAcc;
    QPushButton *pushButton_DispLastCreated;
    QPushButton *pushButton_DispSortAcNo;
    QPushButton *pushButton_validateCC;
    QLabel *label_14;
    QWidget *page_1;
    QGroupBox *groupBox;
    QPushButton *pushButton_Submit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_AccNo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_AccType;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_Amt;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit;
    QLabel *label_ccNum;
    QLabel *label_cvv;
    QLabel *label_name;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_11;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_congrats;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *plainTextEdit;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *page_5;
    QPlainTextEdit *plainTextEdit_AccSearchedDisplay;
    QGroupBox *groupBox_creditCardAtSearch;
    QTextEdit *textEdit_creditCardAtSearch;
    QLabel *label_ccNum_atSearch;
    QLabel *label_cvv_atSearch;
    QLabel *label_name_atSearch;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QWidget *widget1;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QPlainTextEdit *plainTextEdit_AccNoToSearch;
    QPushButton *pushButton_submitToSearch;
    QWidget *page_6;
    QPlainTextEdit *plainTextEdit_isValidDisplay;
    QPushButton *pushButton_submitToValidator;
    QWidget *widget2;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QPlainTextEdit *plainTextEdit_ccNumInVal;
    QLabel *label_13;
    QPlainTextEdit *plainTextEdit_cvvNumInVal;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1272, 717);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/icons/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon1);
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/icons/next-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(10, 10, 10, 10);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setPointSize(15);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 120, 639, 491));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_NewAcc = new QPushButton(layoutWidget);
        pushButton_NewAcc->setObjectName(QString::fromUtf8("pushButton_NewAcc"));
        pushButton_NewAcc->setMinimumSize(QSize(0, 45));
        pushButton_NewAcc->setFont(font);

        verticalLayout->addWidget(pushButton_NewAcc);

        pushButton_SearchAcc = new QPushButton(layoutWidget);
        pushButton_SearchAcc->setObjectName(QString::fromUtf8("pushButton_SearchAcc"));
        pushButton_SearchAcc->setMinimumSize(QSize(0, 45));
        pushButton_SearchAcc->setFont(font);

        verticalLayout->addWidget(pushButton_SearchAcc);

        pushButton_DispLastCreated = new QPushButton(layoutWidget);
        pushButton_DispLastCreated->setObjectName(QString::fromUtf8("pushButton_DispLastCreated"));
        pushButton_DispLastCreated->setMinimumSize(QSize(0, 45));
        pushButton_DispLastCreated->setFont(font);

        verticalLayout->addWidget(pushButton_DispLastCreated);

        pushButton_DispSortAcNo = new QPushButton(layoutWidget);
        pushButton_DispSortAcNo->setObjectName(QString::fromUtf8("pushButton_DispSortAcNo"));
        pushButton_DispSortAcNo->setMinimumSize(QSize(0, 45));
        pushButton_DispSortAcNo->setFont(font);

        verticalLayout->addWidget(pushButton_DispSortAcNo);

        pushButton_validateCC = new QPushButton(layoutWidget);
        pushButton_validateCC->setObjectName(QString::fromUtf8("pushButton_validateCC"));
        pushButton_validateCC->setMinimumSize(QSize(0, 45));
        pushButton_validateCC->setFont(font);

        verticalLayout->addWidget(pushButton_validateCC);

        label_14 = new QLabel(page);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(490, 50, 271, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        groupBox = new QGroupBox(page_1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(250, 30, 741, 541));
        pushButton_Submit = new QPushButton(groupBox);
        pushButton_Submit->setObjectName(QString::fromUtf8("pushButton_Submit"));
        pushButton_Submit->setGeometry(QRect(310, 460, 111, 41));
        pushButton_Submit->setMinimumSize(QSize(0, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Sans Serif"));
        font2.setPointSize(14);
        pushButton_Submit->setFont(font2);
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 691, 421));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        horizontalLayout_4->addWidget(label);

        lineEdit_AccNo = new QLineEdit(layoutWidget1);
        lineEdit_AccNo->setObjectName(QString::fromUtf8("lineEdit_AccNo"));
        lineEdit_AccNo->setMinimumSize(QSize(0, 40));
        lineEdit_AccNo->setFont(font2);

        horizontalLayout_4->addWidget(lineEdit_AccNo);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        horizontalLayout_3->addWidget(label_2);

        lineEdit_Name = new QLineEdit(layoutWidget1);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setMinimumSize(QSize(0, 40));
        lineEdit_Name->setFont(font2);

        horizontalLayout_3->addWidget(lineEdit_Name);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_AccType = new QLineEdit(layoutWidget1);
        lineEdit_AccType->setObjectName(QString::fromUtf8("lineEdit_AccType"));
        lineEdit_AccType->setMinimumSize(QSize(0, 40));
        lineEdit_AccType->setFont(font2);

        horizontalLayout_2->addWidget(lineEdit_AccType);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setWordWrap(true);

        horizontalLayout->addWidget(label_4);

        lineEdit_Amt = new QLineEdit(layoutWidget1);
        lineEdit_Amt->setObjectName(QString::fromUtf8("lineEdit_Amt"));
        lineEdit_Amt->setMinimumSize(QSize(0, 40));
        lineEdit_Amt->setFont(font2);

        horizontalLayout->addWidget(lineEdit_Amt);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(340, 210, 561, 381));
        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 50, 501, 261));
        label_ccNum = new QLabel(groupBox_2);
        label_ccNum->setObjectName(QString::fromUtf8("label_ccNum"));
        label_ccNum->setGeometry(QRect(50, 70, 471, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("OCR A Extended"));
        font3.setPointSize(18);
        label_ccNum->setFont(font3);
        label_cvv = new QLabel(groupBox_2);
        label_cvv->setObjectName(QString::fromUtf8("label_cvv"));
        label_cvv->setGeometry(QRect(50, 110, 251, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("OCR A Extended"));
        font4.setPointSize(13);
        label_cvv->setFont(font4);
        label_name = new QLabel(groupBox_2);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(50, 150, 451, 31));
        label_name->setFont(font4);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(290, 200, 61, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("OCR A Extended"));
        font5.setPointSize(11);
        label_10->setFont(font5);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(240, 200, 51, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("OCR A Extended"));
        font6.setPointSize(8);
        label_8->setFont(font6);
        label_8->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_8->setWordWrap(true);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(390, 270, 131, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Times New Roman"));
        font7.setPointSize(11);
        font7.setBold(true);
        font7.setWeight(75);
        label_11->setFont(font7);
        widget = new QWidget(page_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(430, 40, 381, 131));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_congrats = new QLabel(widget);
        label_congrats->setObjectName(QString::fromUtf8("label_congrats"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Times New Roman"));
        font8.setPointSize(18);
        font8.setBold(true);
        font8.setWeight(75);
        label_congrats->setFont(font8);
        label_congrats->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_congrats);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font9;
        font9.setFamily(QString::fromUtf8("MS Sans Serif"));
        font9.setPointSize(12);
        label_6->setFont(font9);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font9);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        plainTextEdit = new QPlainTextEdit(page_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QFont font10;
        font10.setFamily(QString::fromUtf8("MS Sans Serif"));
        font10.setPointSize(16);
        plainTextEdit->setFont(font10);

        verticalLayout_4->addWidget(plainTextEdit);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_5 = new QVBoxLayout(page_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        plainTextEdit_2 = new QPlainTextEdit(page_4);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setFont(font10);

        verticalLayout_5->addWidget(plainTextEdit_2);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        plainTextEdit_AccSearchedDisplay = new QPlainTextEdit(page_5);
        plainTextEdit_AccSearchedDisplay->setObjectName(QString::fromUtf8("plainTextEdit_AccSearchedDisplay"));
        plainTextEdit_AccSearchedDisplay->setGeometry(QRect(30, 180, 1181, 441));
        plainTextEdit_AccSearchedDisplay->setFont(font10);
        groupBox_creditCardAtSearch = new QGroupBox(page_5);
        groupBox_creditCardAtSearch->setObjectName(QString::fromUtf8("groupBox_creditCardAtSearch"));
        groupBox_creditCardAtSearch->setGeometry(QRect(610, 200, 561, 381));
        textEdit_creditCardAtSearch = new QTextEdit(groupBox_creditCardAtSearch);
        textEdit_creditCardAtSearch->setObjectName(QString::fromUtf8("textEdit_creditCardAtSearch"));
        textEdit_creditCardAtSearch->setGeometry(QRect(30, 50, 501, 261));
        label_ccNum_atSearch = new QLabel(groupBox_creditCardAtSearch);
        label_ccNum_atSearch->setObjectName(QString::fromUtf8("label_ccNum_atSearch"));
        label_ccNum_atSearch->setGeometry(QRect(50, 70, 471, 31));
        label_ccNum_atSearch->setFont(font3);
        label_cvv_atSearch = new QLabel(groupBox_creditCardAtSearch);
        label_cvv_atSearch->setObjectName(QString::fromUtf8("label_cvv_atSearch"));
        label_cvv_atSearch->setGeometry(QRect(50, 110, 251, 31));
        label_cvv_atSearch->setFont(font4);
        label_name_atSearch = new QLabel(groupBox_creditCardAtSearch);
        label_name_atSearch->setObjectName(QString::fromUtf8("label_name_atSearch"));
        label_name_atSearch->setGeometry(QRect(50, 150, 451, 31));
        label_name_atSearch->setFont(font4);
        label_15 = new QLabel(groupBox_creditCardAtSearch);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(290, 200, 61, 21));
        label_15->setFont(font5);
        label_16 = new QLabel(groupBox_creditCardAtSearch);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(240, 200, 51, 31));
        label_16->setFont(font6);
        label_16->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_16->setWordWrap(true);
        label_17 = new QLabel(groupBox_creditCardAtSearch);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(390, 270, 131, 31));
        label_17->setFont(font7);
        widget1 = new QWidget(page_5);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(260, 100, 681, 71));
        formLayout = new QFormLayout(widget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 47));
        label_9->setFont(font2);

        horizontalLayout_5->addWidget(label_9);

        plainTextEdit_AccNoToSearch = new QPlainTextEdit(widget1);
        plainTextEdit_AccNoToSearch->setObjectName(QString::fromUtf8("plainTextEdit_AccNoToSearch"));
        plainTextEdit_AccNoToSearch->setMaximumSize(QSize(16777215, 47));
        plainTextEdit_AccNoToSearch->setFont(font2);

        horizontalLayout_5->addWidget(plainTextEdit_AccNoToSearch);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_5);

        pushButton_submitToSearch = new QPushButton(widget1);
        pushButton_submitToSearch->setObjectName(QString::fromUtf8("pushButton_submitToSearch"));
        pushButton_submitToSearch->setMinimumSize(QSize(0, 50));
        pushButton_submitToSearch->setMaximumSize(QSize(111, 47));
        pushButton_submitToSearch->setFont(font9);
        pushButton_submitToSearch->setCheckable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton_submitToSearch);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        page_6->setFont(font2);
        plainTextEdit_isValidDisplay = new QPlainTextEdit(page_6);
        plainTextEdit_isValidDisplay->setObjectName(QString::fromUtf8("plainTextEdit_isValidDisplay"));
        plainTextEdit_isValidDisplay->setGeometry(QRect(140, 260, 1031, 351));
        pushButton_submitToValidator = new QPushButton(page_6);
        pushButton_submitToValidator->setObjectName(QString::fromUtf8("pushButton_submitToValidator"));
        pushButton_submitToValidator->setGeometry(QRect(610, 190, 111, 47));
        pushButton_submitToValidator->setMinimumSize(QSize(111, 47));
        pushButton_submitToValidator->setMaximumSize(QSize(111, 16777215));
        pushButton_submitToValidator->setFont(font9);
        widget2 = new QWidget(page_6);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(140, 0, 871, 182));
        formLayout_2 = new QFormLayout(widget2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(widget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        plainTextEdit_ccNumInVal = new QPlainTextEdit(widget2);
        plainTextEdit_ccNumInVal->setObjectName(QString::fromUtf8("plainTextEdit_ccNumInVal"));
        plainTextEdit_ccNumInVal->setMaximumSize(QSize(16777215, 47));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, plainTextEdit_ccNumInVal);

        label_13 = new QLabel(widget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_13);

        plainTextEdit_cvvNumInVal = new QPlainTextEdit(widget2);
        plainTextEdit_cvvNumInVal->setObjectName(QString::fromUtf8("plainTextEdit_cvvNumInVal"));
        plainTextEdit_cvvNumInVal->setMaximumSize(QSize(16777215, 47));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, plainTextEdit_cvvNumInVal);

        stackedWidget->addWidget(page_6);

        verticalLayout_6->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionHome);
        toolBar->addAction(actionBack);
        toolBar->addAction(actionNext);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        actionBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        actionNext->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        pushButton_NewAcc->setText(QCoreApplication::translate("MainWindow", "New Account", nullptr));
        pushButton_SearchAcc->setText(QCoreApplication::translate("MainWindow", "Search Account", nullptr));
        pushButton_DispLastCreated->setText(QCoreApplication::translate("MainWindow", "Display All Accounts(Sorted By Last Created)", nullptr));
        pushButton_DispSortAcNo->setText(QCoreApplication::translate("MainWindow", "Display All Accounts(Sorted By Account Number)", nullptr));
        pushButton_validateCC->setText(QCoreApplication::translate("MainWindow", "Validate a Credit Card Number", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "User Data", nullptr));
        pushButton_Submit->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Account No:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Type:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Initial Amount:", nullptr));
        groupBox_2->setTitle(QString());
        label_ccNum->setText(QCoreApplication::translate("MainWindow", "CC Num: ", nullptr));
        label_cvv->setText(QCoreApplication::translate("MainWindow", "CVV: ", nullptr));
        label_name->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "05/38", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Valid: Till", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "MASTERCARD", nullptr));
        label_congrats->setText(QCoreApplication::translate("MainWindow", "Congratulations!", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Your account is created. ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Here's your credit card", nullptr));
        groupBox_creditCardAtSearch->setTitle(QString());
        label_ccNum_atSearch->setText(QCoreApplication::translate("MainWindow", "CC Num: ", nullptr));
        label_cvv_atSearch->setText(QCoreApplication::translate("MainWindow", "CVV: ", nullptr));
        label_name_atSearch->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "05/38", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Valid: Till", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "MASTERCARD", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Account Number:", nullptr));
        pushButton_submitToSearch->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        pushButton_submitToValidator->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Credit Card Number: ", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "CVV Number: ", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
