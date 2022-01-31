#include "time.h"

namespace time
{   
   string time_handler()
   {

       time_t now = time(0);
       tm *ltm = localtime(&now);

       string dateString = "", tmp = "";
       tmp = numToString(ltm->tm_mday);
       if (tmp.length() == 1)
           tmp.insert(0, "0");
       dateString += tmp;
       dateString += "-";
       tmp = numToString(1 + ltm->tm_mon);
       if (tmp.length() == 1)
           tmp.insert(0, "0");
       dateString += tmp;
       dateString += "-";
       tmp = numToString(1900 + ltm->tm_year);
       dateString += tmp;
       dateString += " ";
       tmp = numToString(ltm->tm_hour);
       if (tmp.length() == 1)
           tmp.insert(0, "0");
       dateString += tmp;
       dateString += ":";
       tmp = numToString(1 + ltm->tm_min);
       if (tmp.length() == 1)
           tmp.insert(0, "0");
       dateString += tmp;
       dateString += ":";
       tmp = numToString(1 + ltm->tm_sec);
       if (tmp.length() == 1)
           tmp.insert(0, "0");
       dateString += tmp;

       return dateString;
   }
} // end of name space
