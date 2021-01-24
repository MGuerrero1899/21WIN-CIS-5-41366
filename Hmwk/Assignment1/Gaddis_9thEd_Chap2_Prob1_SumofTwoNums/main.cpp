/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose:  Sum of Two Numbers
 */

 //System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed

    //Declare Variables
    unsigned short num1, num2, total;
    //Initialize Variables
    num1 = 50; //Number 1
    num2 = 100; //Number 2
    total = num1 + num2; //Total of Number 1 + Number 2
    //Map Inputs to Outputs -> Process

    //Display Inputs/Outputs
    cout << "The sum of " << num1 << " and " << num2 << " is " << total;
    //Exit the Program - Cleanup
    return 0;
}
