#include "functions.h"

    double grossPay(double hours, double rate)
    {
        double grossPay = hours * rate;
        return grossPay;
        
    }

    double taxPct(double grossPay)
    {
        double taxPct;
        if(grossPay < 200){
         taxPct = .1;
        }
        else if(grossPay >= 200 & grossPay < 500)
        {
            taxPct = .15;
        }
        else
        {
            taxPct = .20;
        }
        return taxPct;
    }
    
double finalPay(double grossPay, double taxPct)
    {
        double finalPay = grossPay - (grossPay * taxPct);
       
        return finalPay;
    }

