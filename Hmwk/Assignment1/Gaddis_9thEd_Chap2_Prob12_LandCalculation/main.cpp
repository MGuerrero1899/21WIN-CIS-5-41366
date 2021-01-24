/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose: Land Calculation
 */

 //System Libraries
#include <iostream>//I/O Library
using namespace std;

//User Libraries

//Global Constants
const int acre = 43560;
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
int landConversion(int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    int sqft = 391876; //Square feet of area being converted
    //Initialize Variables

    //Map Inputs to Outputs -> Process

    //Display Inputs/Outputs
    cout << "The number of acres in a piece of land with " << sqft << " square feet"
         << " is " << landConversion(sqft);
    //Exit the Program - Cleanup
    return 0;
}
//Functions
int landConversion(int sqft)
{
    return sqft / acre; //Divides square feet of area by acres
}
