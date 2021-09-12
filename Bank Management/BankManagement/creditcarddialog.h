#ifndef CREDITCARDDIALOG_H
#define CREDITCARDDIALOG_H

#include <QDialog>

namespace Ui {
class CreditCardDialog;
}

class CreditCardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreditCardDialog(QWidget *parent = nullptr);
    ~CreditCardDialog();

private:
    Ui::CreditCardDialog *ui;
};

#endif // CREDITCARDDIALOG_H
