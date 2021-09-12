#ifndef SEARCHSUBMITBUTTON_H
#define SEARCHSUBMITBUTTON_H

#include <QObject>

class searchSubmitButton : public QObject
{
    Q_OBJECT
    friend class mainWindow;
public:
//    searchSubmitButton();


public slots:

    void on_pushButton_submitToSearch_clicked(bool);

signals:

    void groupBox_creditCardAtSearch_setVisible_flag_changed(bool);

private:
    bool flag_value;
};


#endif // SEARCHSUBMITBUTTON_H
