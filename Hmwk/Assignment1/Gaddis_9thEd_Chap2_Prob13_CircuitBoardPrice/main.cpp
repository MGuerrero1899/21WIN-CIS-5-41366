/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose: Circuit Board price
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
    float crctBrdPrce,salePrft,salePrce;
    //Initialize Variables
    crctBrdPrce = 14.95; // Board Cost
    salePrft = .35; //Sale Profit
    salePrce = crctBrdPrce + (crctBrdPrce * salePrft); //Selling price
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout << setprecision(4) << "The price of a circuit board would be $" 
         << salePrce;
    //Exit the Program - Cleanup
    return 0;
}
//Functions

