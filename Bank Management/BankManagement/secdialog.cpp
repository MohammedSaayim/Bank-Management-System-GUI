#include "secdialog.h"
#include "ui_secdialog.h"
#include "account.h"
#include<QString>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>

secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);
}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::on_pushButton_Submit_clicked()
{
    account ac;

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


void secDialog::write_account()
{
    account ac;

    QFile File("C:/Users/mdsaa/Documents/QtApps/Bank Management/BankManagement/output file/accounts.txt");
//	ofstream outFile; //ofstream is a stream class to write data to files

    QTextStream outFile(&File);
    //open file in binary mode to add data (ios::app means append)
    if(!File.open(QFile::WriteOnly | QIODevice::Append | QFile::Text))
    {
            QMessageBox::warning(this,"Warning","File not open");
    }
    //ac.create_account();

    outFile<<"\n"<<ac.retacno()<<","<<ac.retname()<<","<<ac.rettype()<<","<<ac.retdeposit()<<","<<ac.retCCNum()<<","<<ac.retcvv();

    File.flush();
    File.close();
}



void account::create_account()
{

}
