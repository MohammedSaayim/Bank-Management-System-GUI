#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "account.h"
#include<QMessageBox>
#include<QPixmap>
#include<QScrollArea>
#include<QFile>
#include<QTextStream>
#include<QString>
#include<QMessageBox>
#include<QRegularExpression>
#include<QRegularExpressionMatch>
#include<bits/stdc++.h>
#include<QtGui>
#include<QObject>
#include<QScrollBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //User code:
    ui->stackedWidget->setCurrentIndex(0);
    ui->plainTextEdit->setReadOnly(true);
    ui->textEdit->setReadOnly(true);
    ui->plainTextEdit_2->setReadOnly(true);
    ui->plainTextEdit_AccSearchedDisplay->setReadOnly(true);
    ui->plainTextEdit_isValidDisplay->setReadOnly(true);
    ui->groupBox_creditCardAtSearch->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::on_pushButton_Submit_clicked()
{
    secondDialog = new secDialog(this);
    secondDialog->show();


//safe to delete below code
    QString cc_num= cc_num_gen();
    QString cvv= QString::number(cvv_gen());
    QMessageBox msgBox;             //
    msgBox.setText("cc number is "+cc_num+"\n CVV is: "+cvv);     //
    msgBox.exec();                  //
//safe to delete above code
}
*/






void MainWindow::on_pushButton_NewAcc_clicked()
{
       ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_actionHome_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionBack_triggered()
{
    int i=ui->stackedWidget->currentIndex();
    ui->stackedWidget->setCurrentIndex(i-1);
}

void MainWindow::on_actionNext_triggered()
{
    int i=ui->stackedWidget->currentIndex();
    ui->stackedWidget->setCurrentIndex(i+1);
}




//globally declaring account ac
account ac;

void MainWindow::write_account()
{

    QFile File("C:/Users/mdsaa/Documents/QtApps/Bank Management/BankManagement/output file/accounts.txt");

    QTextStream outFile(&File);
    //open file in binary mode to add data (ios::app means append)
    if(!File.open(QFile::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
            QMessageBox::warning(this,"Warning","File not open");
    }
    create_account();

    outFile<<"\n"<<ac.retacno()<<","<<ac.retname()<<","<<ac.rettype()<<","<<ac.retdeposit()<<","<<ac.retCCNum()<<","<<ac.retcvv();

    File.flush();
    File.close();
}

void MainWindow::create_account()
{

    int accNum = ui->lineEdit_AccNo->text().toInt();
    ac.setacno(accNum);

    QString userName=ui->lineEdit_Name->text();
    ac.setname(userName);

    int amt=ui->lineEdit_Amt->text().toInt();
    ac.setdeposit(amt);

    QChar accType= ui->lineEdit_AccType->text().at(0);
    ac.settype(accType);

    QString cc_number= cc_num_gen();
    ac.setCCNum(cc_number);

    int cvv_num= cvv_gen();
    ac.setcvv(cvv_num);
}


void MainWindow::on_pushButton_Submit_clicked()
{
    write_account();
    ui->stackedWidget->setCurrentIndex(2);

    ui->label_ccNum->setText(ac.retCCNum());
    ui->label_cvv->setText("CVV: "+QString::number(ac.retcvv()));
    ui->label_name->setText("Name: "+ac.retname());


}




void MainWindow::on_pushButton_DispLastCreated_clicked()
{
    int count=0;
    ui->stackedWidget->setCurrentIndex(3);
    ui->plainTextEdit->clear();

    QFile File("C:/Users/mdsaa/Documents/QtApps/Bank Management/BankManagement/output file/accounts.txt");

    if(!File.open(QIODevice::ReadOnly | QFile::Text))
       {
               QMessageBox::warning(this,"Warning","File not open");
       }
    QTextStream in(&File);

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList words = line.split(",");
        count++;
        ui->plainTextEdit->appendPlainText(QString::number( count)+".");
        for( const auto& i : words )
        {
            if((&i-&words[0])==0)
            {
            ui->plainTextEdit->appendPlainText("Account Number: "+i);
            }
            else if((&i-&words[0])==1)
            {
            ui->plainTextEdit->appendPlainText("Name: "+i);
            }
            else if((&i-&words[0])==2)
            {
            ui->plainTextEdit->appendPlainText("Account type: "+i);
            }
            else if((&i-&words[0])==3)
            {
            ui->plainTextEdit->appendPlainText("Balance Amount: "+i);
            }
            else if((&i-&words[0])==4)
            {
            ui->plainTextEdit->appendPlainText("Credit Card Number: "+i);
            }
            else
            {
            ui->plainTextEdit->appendPlainText("CVV Number: "+i);
            }
        }
        ui->plainTextEdit->appendPlainText("\n");
    }

    File.close();
}



void MainWindow::on_pushButton_DispSortAcNo_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

    ui->plainTextEdit_2->clear();
//    int count=0;
    QFile File("C:/Users/mdsaa/Documents/QtApps/Bank Management/BankManagement/output file/accounts.txt");
    if(!File.open(QIODevice::ReadOnly | QFile::Text))
       {
               QMessageBox::warning(this,"Warning","File not open");
       }
    QTextStream in(&File);


    QStringList column_unsorted;
    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList words = line.split(",");
        column_unsorted.append(words.at(0));
    }

    QStringList column_sorted=return_sorted_list(column_unsorted);


    for(int i=0;i<column_sorted.size();i++)
    {
        QString accNum= column_sorted.at(i);
        display_sorted(accNum);
    }
/*
    for(int z=0;z<column1.size();z++)
    {
        ui->plainTextEdit_2->appendPlainText(column1.at(z));



        QString accNumToSearch= column1.at(z);


        while(!in.atEnd())
        {
            QString line = in.readLine();
            QStringList words = line.split(",");

            for( const auto& i : words )
            {
                  if(accNumToSearch==i)
                  {
                    QString lineSearched = in.readLine();
                    QStringList wordsSearched = line.split(",");
                    for(const auto& j : wordsSearched)
                    {
                        if((&j-&wordsSearched[0])==0)
                        {
                        ui->plainTextEdit_2->appendPlainText("Account Number: "+j);
                        }
                        else if((&j-&wordsSearched[0])==1)
                        {
                        ui->plainTextEdit_2->appendPlainText("Name: "+j);
                        }
                        else if((&j-&wordsSearched[0])==2)
                        {
                        ui->plainTextEdit_2->appendPlainText("Account type: "+j);
                        }
                        else if((&j-&wordsSearched[0])==3)
                        {
                        ui->plainTextEdit_2->appendPlainText("Balance Amount: "+j);
                        }
                        else if((&j-&wordsSearched[0])==4)
                        {
                        ui->plainTextEdit_2->appendPlainText("Credit Card Number: "+j);
                        }
                        else
                        {
                        ui->plainTextEdit_2->appendPlainText("CVV Number: "+j);
                        }
                      }
                     }
           //       }
            }
            ui->plainTextEdit_2->appendPlainText("\n");
        }


    }
*/
File.close();
}


void MainWindow::display_sorted(QString accNumToSearch)
{
//        int count=0;
        QFile File("C:/Users/mdsaa/Documents/QtApps/Bank Management/BankManagement/output file/accounts.txt");
        if(!File.open(QIODevice::ReadOnly | QFile::Text))
           {
                   QMessageBox::warning(this,"Warning","File not open");
           }
        QTextStream in(&File);


        while(!in.atEnd())
        {
            QString line = in.readLine();
            QStringList words = line.split(",");

            for( const auto& i : words )
            {
                  if(accNumToSearch==i)
                  {
                        QString lineSearched = in.readLine();
                        QStringList wordsSearched = line.split(",");
                        for(const auto& j : wordsSearched)
                        {
                            if((&j-&wordsSearched[0])==0)
                            {
                            ui->plainTextEdit_2->appendPlainText("Account Number: "+j);
                            }
                            else if((&j-&wordsSearched[0])==1)
                            {
                            ui->plainTextEdit_2->appendPlainText("Name: "+j);
                            }
                            else if((&j-&wordsSearched[0])==2)
                            {
                            ui->plainTextEdit_2->appendPlainText("Account type: "+j);
                            }
                            else if((&j-&wordsSearched[0])==3)
                            {
                            ui->plainTextEdit_2->appendPlainText("Balance Amount: "+j);
                            }
                            else if((&j-&wordsSearched[0])==4)
                            {
                            ui->plainTextEdit_2->appendPlainText("Credit Card Number: "+j);
                            }
                            else
                            {
                            ui->plainTextEdit_2->appendPlainText("CVV Number: "+j);
                            }
                          }
                        ui->plainTextEdit_2->appendPlainText("\n");
                   }
        }


    }

File.close();
}


QStringList MainWindow::return_sorted_list(QStringList unsorted_list)
{
    std::sort(unsorted_list.begin(),unsorted_list.end());
    QStringList sorted_list= unsorted_list;
    return sorted_list;
}


//Tags:display specific account,search account
void MainWindow::on_pushButton_SearchAcc_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}



void MainWindow::on_pushButton_submitToSearch_clicked()
{
    ui->plainTextEdit_AccSearchedDisplay->clear();

    bool accSearchedFlag=false;

    QFile File("C:/Users/mdsaa/Documents/QtApps/Bank Management/BankManagement/output file/accounts.txt");

    if(!File.open(QIODevice::ReadOnly | QFile::Text))
       {
               QMessageBox::warning(this,"Warning","File not open");
       }

    QTextStream in(&File);


    QString accNumToSearch= ui->plainTextEdit_AccNoToSearch->toPlainText();

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList words = line.split(",");
        if(std::binary_search(words.begin(),words.end(),accNumToSearch))
        {
            for( const auto& i : words )
            {
              if(accNumToSearch==i)
                {
                    ui->groupBox_creditCardAtSearch->setVisible(true);
                    accSearchedFlag=true;

                    QString lineSearched = in.readLine();
                    QStringList wordsSearched = line.split(",");
                    for(const auto& j : wordsSearched)
                    {
                        if((&j-&wordsSearched[0])==0)
                        {
                        ui->plainTextEdit_AccSearchedDisplay->appendPlainText("Account Number: "+j);
                        }
                        else if((&j-&wordsSearched[0])==1)
                        {
                        ui->plainTextEdit_AccSearchedDisplay->appendPlainText("Name: "+j);
                        ui->label_name_atSearch->setText(j);
                        }
                        else if((&j-&wordsSearched[0])==2)
                        {
                        ui->plainTextEdit_AccSearchedDisplay->appendPlainText("Account type: "+j);
                        }
                        else if((&j-&wordsSearched[0])==3)
                        {
                        ui->plainTextEdit_AccSearchedDisplay->appendPlainText("Balance Amount: "+j);
                        }
                        else if((&j-&wordsSearched[0])==4)
                        {
                        ui->plainTextEdit_AccSearchedDisplay->appendPlainText("Credit Card Number: "+j);
                        ui->label_ccNum_atSearch->setText(j);
                        }
                        else
                        {
                        ui->plainTextEdit_AccSearchedDisplay->appendPlainText("CVV Number: "+j);
                        ui->label_cvv_atSearch->setText(j);
                        }
                    }

              }
             }
        }

//        ui->plainTextEdit_AccSearchedDisplay->appendPlainText("\n");
    }

    ui->plainTextEdit_AccSearchedDisplay->QAbstractScrollArea::verticalScrollBar()->setValue(0);

    if(accSearchedFlag==false)
    {

        ui->groupBox_creditCardAtSearch->setVisible(false);
        ui->plainTextEdit_AccSearchedDisplay->clear();
        ui->plainTextEdit_AccSearchedDisplay->appendPlainText("Account not found!");

    }

    File.close();
}


void MainWindow::on_pushButton_submitToValidator_clicked()
{
   QString ccNum=ui->plainTextEdit_ccNumInVal->toPlainText();
   QString cvv= ui->plainTextEdit_cvvNumInVal->toPlainText();
   ui->plainTextEdit_isValidDisplay->clear();
   if(isValidCCNum(ccNum))
   {
       ui->plainTextEdit_isValidDisplay->appendPlainText("The credit card number "+ ccNum+" is valid! \n");
   }
   else
   {
       ui->plainTextEdit_isValidDisplay->appendPlainText("The credit card number "+ ccNum+" is not valid! \n");

   }

   if(isValidCVVNumber(cvv))
   {
       ui->plainTextEdit_isValidDisplay->appendPlainText("The CVV number "+ cvv+" is valid! \n");
   }
   else
   {
       ui->plainTextEdit_isValidDisplay->appendPlainText("The CVV number "+ cvv+" is not valid! \n");

   }

}


// Start of Function to validate CVV
bool MainWindow::isValidCVVNumber(QString str)
{

    // Regex to check valid CVV
    // (Card Verification Value) number
    QRegularExpression re("^[0-9]{3,4}$");
    QRegularExpressionMatch match = re.match(str);

    // If the CVV (Card Verification Value)
    //  number is empty return false
    if (str.isEmpty())
    {
        return false;
    }

    // Return true if the CVV
    // (Card Verification Value) number
    // matched the ReGex
    if (match.hasMatch())
    {
        return true;
    }
    else
    {
        return false;
    }
}
// End of Function to validate CVV

bool MainWindow::isValidCCNum(QString card_no)
{
    int len = card_no.length();
            int TotalSum = 0;
            int SumOdd=0,SumEven=0;

            //double the even placed digits from the end and adding all.If it results in two digit number ,add the digits
            for (int i = len - 2; i >= 0; i = i - 2) {

//                int twice = (((card_no.at(i).toLatin1())-48)* 2);   //converting string array to integer array
                int twice = (card_no[i].digitValue())*2;
                if (twice > 9) {
                    twice = (twice / 10) + (twice % 10);
                }
                SumEven = SumEven+twice;
            }


            //adding all the odd digits number from the end
            for (int i = len - 1; i >= 0; i = i - 2) {
//                SumOdd = SumOdd+(((card_no[i].toLatin1())-48));
                SumOdd = SumOdd+(card_no[i].digitValue());
            }

            TotalSum= SumEven +SumOdd;

           //checking if total sum of odd and even placed digits is a multiple of 10.
           //if yes,the number is valid.
            if(TotalSum%10==0)
            {
//                cout<<"Entered Card Number "<<card_no <<" is valid"<<endl;
                return true;
            }
            else{
//                cout<<"Entered Card Number "<<card_no <<" is invalid"<<endl;
                return false;
            }

}

void MainWindow::on_pushButton_validateCC_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    ui->plainTextEdit_isValidDisplay->clear();
}

//search button isClicked signal definition
void MainWindow::on_pushButton_SearchAcc_clicked(bool isClicked)
{/*
    bool CCDisplayFlag;
    if(isClicked)
    {
        CCDisplayFlag= true;
    }
    else
    {
        CCDisplayFlag= false;
    }
    emit(CCDisplayFlag);*/
    emit(isClicked);
}

//setting display of cc card in search acc window to true or false
void MainWindow::setCCDisplay(bool isClicked)
{
    if(isClicked)
    {
        ui->groupBox_creditCardAtSearch->setVisible(true);
    }
    else
    {
        ui->groupBox_creditCardAtSearch->setVisible(true);
    }
}
