/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float pyIncrs,newPay, rtroPay, oSalary,nMonth;
    //Declare Variables
    cin >> oSalary;
    pyIncrs = .076f;
    newPay = (oSalary * pyIncrs) + oSalary;
    rtroPay = oSalary * pyIncrs /2;
    nMonth = newPay / 12; 
    
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout << fixed 
     << "Input previous annual salary.\n"
     << "Retroactive pay    = $" << setw(7) << setprecision(2) << rtroPay
     << "\nNew annual salary  = $" << setw(7) << setprecision(2) << newPay
     << "\nNew monthly salary = $" << setw(7) << setprecision(2) << nMonth;
    //Exit stage right or left!
    return 0;
}