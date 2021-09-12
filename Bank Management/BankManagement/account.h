#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<QString>
#include<QVector>


void write_account();
//void display_sp(int);
void modify_account(int);
void delete_account(int);
void display_all();
void deposit_withdraw(int, int);
bool isValidCVVNumber(QString);
bool isValid();
QChar checksum_gen(QString);
QString cc_num_gen();
int cvv_gen();
void print_cc_num(QString, int);
void print_cc_num_with_name(QString, int, QString);
QVector<int> sortAccNo(QVector<int>);
void display_all_sorted();
void printl(QVector<int>);
void credit_card_validator();
void search_csv(QVector<int>,int);

int getIntFromString(QString str);


class account
{
private:
    int acno;
    QString name;
    int deposit;
    QChar type;
    QString acc_cc_num;
    int cc_cvv;

public:
    //account();
    void show_account() const;
    /*const after the function is used to tell the compiler that
     this function won't attempt to change the object it is called on*/
    void modify();
    void dep(int);
    void draw(int);
    void report() const;
    QString retname() const;
    void setname(QString acc_name);
    int retacno() const;
    void setacno(int acc_no);

    int retdeposit() const;
    void setdeposit(int dep);

    QChar rettype() const;
    void settype(QChar cc_type);
    QString retCCNum() const;
    void setCCNum(QString cc_number);
    int retcvv() const;
    void setcvv(int cvv_num);

};

#endif // ACCOUNT_H
