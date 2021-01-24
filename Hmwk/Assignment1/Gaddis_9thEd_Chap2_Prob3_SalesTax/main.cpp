/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose:  Sales Tax
 */

 //System Libraries
#include <iostream>//I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    short prchse;
    float steTax, cntyTax, ttlTax;
    //Initialize Variables
    prchse = 95; //Purchase Price
    steTax = .04; //State Tax
    cntyTax = .02; //County Tax
    //Map Inputs to Outputs -> Process
    ttlTax = prchse + (prchse * (steTax + cntyTax)); //Calculates Total
    //Display Inputs/Outputs
    cout << fixed << setprecision(2) << "The total after tax on a $" << prchse 
         << " purchase, comes out to be $" << ttlTax;
    //Exit the Program - Cleanup
    return 0;
}
