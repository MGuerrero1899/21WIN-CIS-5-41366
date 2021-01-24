/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose: Ocean Levels
 */

 //System Libraries
#include <iostream>//I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float oceanLevel(float,short);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    float crntRate;
    short  year5,year7,year10;
    
    //Initialize Variables
    crntRate = 1.5; //Current Rate ocean rises
    year5 = 5; //5 years from now
    year7 = 7; //7 years from now
    year10 = 10; // 10 years from now
    //Map Inputs to Outputs -> Process

    //Display Inputs/Outputs
    cout << "In " << year5 << " years the oceans level will be about " 
         << oceanLevel(crntRate,year5) << " millimeters higher" << endl;
    cout << "In " << year7 << " years the oceans level will be about " 
         << oceanLevel(crntRate,year7) << " millimeters higher" << endl;
    cout << "In " << year10 << " years the oceans level will be about " 
         << oceanLevel(crntRate,year10) << " millimeters higher" << endl;
    //Exit the Program - Cleanup
    return 0;
}
//Functions
float oceanLevel(float crntRate, short yearsPassed)
{
    return crntRate * yearsPassed;
}

