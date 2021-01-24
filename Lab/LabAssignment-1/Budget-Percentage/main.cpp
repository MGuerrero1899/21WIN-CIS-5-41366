/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose: 
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
    float milBdgt,fedBdgt,mlPrcnt;
    //Initialize Variables
    milBdgt = 7.0e11f;
    fedBdgt = 4.1e12f;
    //Map Inputs to Outputs -> Process
    mlPrcnt = fedBdgt / milBdgt;
    //Display Inputs/Outputs
    cout << setprecision(3) << "The military budget makes up " << mlPrcnt 
         << "% of the federal budget.";
    //Exit the Program - Cleanup
    return 0;
}
//Functions

