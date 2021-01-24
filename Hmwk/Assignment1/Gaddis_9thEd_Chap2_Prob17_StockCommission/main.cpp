/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose: Stock Commission
 */

 //System Libraries
#include <iostream>//I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void stckCmmssn(short,float,float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    short shares;
    float stckPrice, brkrFee;
    //Initialize Variables
    shares = 750; //Number of shares bought
    stckPrice = 35.0; //Current stock price during trade
    brkrFee = .02; //Brokers current fee percent
    //Map Inputs to Outputs -> Process
    //Call Function
    stckCmmssn(shares,stckPrice,brkrFee); //Calls function 
    //Display Inputs/Output
    //Exit the Program - Cleanup
    return 0;
}
//Functions
void stckCmmssn(short shares,float stckPrice,float brkrFee)
{
    int trdePrice = shares * stckPrice; //Evaluates trade price without commission
    float ttlCmmssn = (shares * stckPrice) * brkrFee; //Evaluates just the commission price
    int ttlPaid = trdePrice + ttlCmmssn; //Trade Price + Commission
    cout << "The amount paid for the stock alone was $" <<trdePrice << " \nThe "
         << "total commission was $" << ttlCmmssn << "\nLeaving the total trade"
         << " to cost a total of $" <<ttlPaid << endl;
}
