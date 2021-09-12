#include "creditcarddialog.h"
#include "ui_creditcarddialog.h"

CreditCardDialog::CreditCardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreditCardDialog)
{
    ui->setupUi(this);
}

CreditCardDialog::~CreditCardDialog()
{
    delete ui;
}
