#include "searchsubmitbutton.h"

//searchSubmitButton::searchSubmitButton()
//{

//}


void searchSubmitButton::on_pushButton_submitToSearch_clicked(bool clicked)
{
    if(clicked)
    {
        flag_value=true;
    }
    else
    {
        flag_value=false;
    }
    emit groupBox_creditCardAtSearch_setVisible_flag_changed(flag_value);

}

searchSubmitButton a;
