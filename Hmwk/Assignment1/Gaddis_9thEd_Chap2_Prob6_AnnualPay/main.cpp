/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose:  Annual pay
 */

 //System Libraries
#include <iostream>//I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float AnnualPay(float,short);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    float payAmount, yrlyPay;
    short  payPrd;
    
    //Initialize Variables
    payAmount = 2200.0; //Pay Amount per period
    payPrd = 26; //Number of pay periods in year
    yrlyPay = AnnualPay(payAmount,payPrd); //Calculates Annual Pay
    //Map Inputs to Outputs -> Process

    //Display Inputs/Outputs
    cout << "Your annual pay is $" << yrlyPay;
    //Exit the Program - Cleanup
    return 0;
}
//Functions
float AnnualPay(float payAmount,short payPeriod)
{
    return payAmount * payPeriod;
}