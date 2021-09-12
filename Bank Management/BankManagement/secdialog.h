#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = nullptr);

    void write_account();

    ~secDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Submit_clicked();

private:
    Ui::secDialog *ui;
};

#endif // SECDIALOG_H
