/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    unsigned short hrsWrkd,ovrTime,ovrHrs;
    float payRate,grssPay;
    //Declare Variables
     cin >> payRate >> hrsWrkd;
     ovrHrs = hrsWrkd - 40;
    //Initialize or input i.e. set variable values
    if(hrsWrkd > 40)
    {
        ovrTime = ((ovrHrs) * payRate) * 2;
        grssPay = (payRate * (hrsWrkd - ovrHrs)) + ovrTime;
    }
    else
    {
        grssPay = hrsWrkd * payRate;
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "This program calculates the gross paycheck.\n"<<
            "Input the pay rate in $'s/hr and the number of hours." << endl;
                
    if(grssPay > 1000)
    {
          cout << fixed << setprecision(2) << "Paycheck = $" << grssPay;
    }
    else
    {
          cout << fixed << setprecision(2) << "Paycheck = $ " << grssPay;
    }
    //Exit stage right or left!
    return 0;
}