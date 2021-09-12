/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_Submit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
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

    void setupUi(QDialog *secDialog)
    {
        if (secDialog->objectName().isEmpty())
            secDialog->setObjectName(QString::fromUtf8("secDialog"));
        secDialog->resize(400, 300);
        groupBox = new QGroupBox(secDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 30, 281, 231));
        pushButton_Submit = new QPushButton(groupBox);
        pushButton_Submit->setObjectName(QString::fromUtf8("pushButton_Submit"));
        pushButton_Submit->setGeometry(QRect(90, 180, 81, 31));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 231, 127));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit_AccNo = new QLineEdit(widget);
        lineEdit_AccNo->setObjectName(QString::fromUtf8("lineEdit_AccNo"));

        horizontalLayout_4->addWidget(lineEdit_AccNo);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_Name = new QLineEdit(widget);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));

        horizontalLayout_3->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_AccType = new QLineEdit(widget);
        lineEdit_AccType->setObjectName(QString::fromUtf8("lineEdit_AccType"));

        horizontalLayout_2->addWidget(lineEdit_AccType);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        horizontalLayout->addWidget(label_4);

        lineEdit_Amt = new QLineEdit(widget);
        lineEdit_Amt->setObjectName(QString::fromUtf8("lineEdit_Amt"));

        horizontalLayout->addWidget(lineEdit_Amt);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(secDialog);

        QMetaObject::connectSlotsByName(secDialog);
    } // setupUi

    void retranslateUi(QDialog *secDialog)
    {
        secDialog->setWindowTitle(QCoreApplication::translate("secDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("secDialog", "User Data", nullptr));
        pushButton_Submit->setText(QCoreApplication::translate("secDialog", "Submit", nullptr));
        label->setText(QCoreApplication::translate("secDialog", "Account No:", nullptr));
        label_2->setText(QCoreApplication::translate("secDialog", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("secDialog", "Type:", nullptr));
        label_4->setText(QCoreApplication::translate("secDialog", "Initial Amount:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secDialog: public Ui_secDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
