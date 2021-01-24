/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose: Miles Per Gallon
 */

 //System Libraries
#include <iostream>//I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
short MPG(short,short); //Calculates MPG
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    short mileDriven,maxGallons;
    //Declare Variables
    mileDriven = 375; //Miles Driven
    maxGallons = 15; //Max Gallons car holds
    //Initialize Variables

    //Map Inputs to Outputs -> Process

    //Display Inputs/Outputs
    cout << "Based on the given info the car gets a total of " << MPG(mileDriven,maxGallons)
         << " miles per gallon";
    //Exit the Program - Cleanup
    return 0;
}
//Functions
short MPG(short miDrvn,short mxGllns)
{
    return miDrvn / mxGllns; //Divide miles driven by gallons used
}

