#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    //user defined functions below:


    void write_account();

    void create_account();

    QStringList return_sorted_list(QStringList);

    void display_all();

    QStringList sortAccNo(QStringList);

    bool isValidCVVNumber(QString);

    bool isValidCCNum(QString);

    void display_sorted(QString accNumToSearch);

    //end of user defined functions above

    ~MainWindow();

private slots:
//    void on_pushButton_clicked();

    void on_pushButton_Submit_clicked();

    void on_pushButton_NewAcc_clicked();

    void on_actionHome_triggered();

    void on_actionBack_triggered();

    void on_actionNext_triggered();


    void on_pushButton_DispLastCreated_clicked();

    void on_pushButton_DispSortAcNo_clicked();

    void on_pushButton_SearchAcc_clicked();

    void on_pushButton_submitToSearch_clicked();

    void on_pushButton_submitToValidator_clicked();

    void on_pushButton_validateCC_clicked();

    void setCCDisplay(bool);

signals:
    void on_pushButton_SearchAcc_clicked(bool);

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
