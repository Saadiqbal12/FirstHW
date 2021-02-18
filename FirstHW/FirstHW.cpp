
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "functions.h"

using namespace std;

    int main()
    {
    ifstream inFile;
    ofstream outFile;
    
    outFile.open("Output.txt");
    inFile.open("Input.txt");
    
    string lastName;
    string firstName;
    double rate;
    double hours;
    double gross;
    double tax;
    double final;

    
    outFile << " First   " << " Last " << "  Pay Rate" << "   Hours" << "     Gross" << "    Tax Pct " << "    Final" << endl;
    
        
        while(inFile >> firstName >> lastName >> rate >> hours)
        {
        
            gross = grossPay(hours, rate);
            tax = taxPct(gross);
            final = finalPay(gross, tax);
            
           outFile << setw(6) << firstName << setw(8) << lastName << setw(10);
           outFile << setprecision(2) << fixed << rate << setw(9)
            << setprecision(2) << fixed << hours << setw(10)<< setprecision(2) << fixed << gross << setw(11) << setprecision(2) << fixed << tax <<  setw(11) << setprecision(2) << fixed << final << endl;

        }

    
    return 0;

}

