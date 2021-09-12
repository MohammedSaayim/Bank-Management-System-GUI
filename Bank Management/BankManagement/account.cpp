#include "account.h"
#include<QString>
#include<QChar>
#include<QList>
#include<QTextStream>
#include<QVector>
#include<QFile>
#include<QMessageBox>

/*
account::account()
{

}
*/

void account::setname(QString acc_name) {
    name=acc_name;
}

QString account::retname() const{
    return name;
}

void account::setacno(int acc_no)
{
     acno=acc_no;
}

int account::retacno() const
{
    return acno;
}

void account::setCCNum(QString cc_number)
{
 acc_cc_num=cc_number;
}

QString account::retCCNum() const
{
    return acc_cc_num;
}

void account::setcvv(int cvv_num){
    cc_cvv=cvv_num;
}
int account::retcvv() const
{
    return cc_cvv;
}

void account::setdeposit(int dep){
    deposit=dep;
}
int account::retdeposit() const
{
    return deposit;
}

void account::settype(QChar cc_type){
    type=cc_type;
}
QChar account::rettype() const
{
    return type;
}






int getIntFromString(QString str)
{
    QTextStream strStream(&str);
    int x = 0;
    strStream >> x;

    return x;
}




//generating checksum for credit card number generator
QChar checksum_gen(QString cc_num_str_temp){

    QList<QString> matrix;
    matrix.push_back(cc_num_str_temp);
    QChar temp, temp2, temp3;
    int num2=0, sum=0, mod=0, checksum_int=0;

    for(int i=15;i>=0;i--)
    {
        temp=cc_num_str_temp.at(i);
//        num2=((int)temp)-((int)'0');
        num2=temp.digitValue();
        if(i%2==0)
                {
                    num2*=2;
                    if(num2>9){
                        num2-=9;
                    }
                    temp2='0'+num2;
                    cc_num_str_temp[i]=temp2;
                }
                sum+=num2;

    }
   // sum+=10;//for cc_num_str[0 and 1] which are not included in above
    mod=sum%10;
    //if the sum is divisible by 10 checksum=0
    //otherwise checksum=10-remainder to make the sum divisible by 10
    if(mod==0){
        checksum_int=0;
    }
    else{
        checksum_int=10-mod;
    }
    temp3='0'+checksum_int; //convert checksum from int to char
    return(temp3);
}
//end of function to generate checksum for cc num gen


//cvv generator
int cvv_gen(){
    int cvv=(rand()%900)+100;
    return cvv;
}
//cvv generator end


//start of function to generate output for cc num
QString cc_num_gen(){
    QChar checksum;
    long long int iin=0,threeToFifteen=0, cc_num=0;
    QString cc_num_str, cc_num_str_temp;
    iin=5500000000000000;//15 zeroes
    threeToFifteen= rand()%999999999999+143791678912; //12 nine's and 12 random digits

    threeToFifteen*=10;

    cc_num=threeToFifteen+iin;
    cc_num_str_temp=QString::number(cc_num);
    cc_num_str=QString::number(cc_num);

    checksum=checksum_gen(cc_num_str_temp);
    cc_num_str[15]=checksum;

    return(cc_num_str);
}
//end of cc num generator fn




