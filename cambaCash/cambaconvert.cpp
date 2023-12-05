#include "cambaconvert.h"

cambaconvert::cambaconvertmonth(QString &month)
{
    if(month == "Janeiro")
        month = "Jan";

    if(month == "Fevereiro")
        month = "Feb";

    if(month == "Março")
        month = "Mar";

    if(month == "Abril")
        month = "Apr";

    if(month == "Maio")
        month = "May";

    if(month == "Junho")
        month = "Jun";

    if(month == "Julho")
        month = "Jul";

    if(month == "Agosto")
        month = "Aug";

    if(month == "Setembro")
        month = "Sep";

    if(month == "Outubro")
        month = "Oct";

    if(month == "Novembro")
        month = "Nov";

    if(month == "Dezembro")
        month = "Dec";

    return 0;
}

