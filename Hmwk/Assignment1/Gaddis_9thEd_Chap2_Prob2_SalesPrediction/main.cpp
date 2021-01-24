/*
 * File:   main.cpp
 * Author: Michael Guerrero
 * Created on January 8, 2021, 08:31 AM
 * Purpose:  Sales Prediction
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
    float sales, ttlsales, prdctn;
    //Initialize Variables
    sales = 8600000; //Sales for the year
    ttlsales = .58; //Percent of total sales based on estimate
    prdctn = ttlsales * sales; //Predicted Sales
    //Map Inputs to Outputs -> Process

    //Display Inputs/Outputs
    cout << fixed << setprecision(2) << "The East Coast Division will generate $"
         << prdctn << " in sales revenue";
    //Exit the Program - Cleanup
    return 0;
}
