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
    
    //Declare Variables
    int strtSlry,dayGain,grossPay,numDays;
    
    strtSlry = 1;
    dayGain = 2;
    
    //Initialize or input i.e. set variable values
    do
    {
       cin >> numDays; 
    }while(numDays < 1);
    //Map inputs -> outputs
    for(int i = 0;i<numDays;i++)
    {
        grossPay += strtSlry;
        strtSlry = strtSlry * dayGain;
    }
    //Display the outputs
cout << "Pay = $" << grossPay/100 << ".";
if(grossPay%100 < 10)
{
    cout << "0" << grossPay%100;
}
else if(grossPay%100 >=10)
{
    cout << grossPay % 100;
}
    //Exit stage right or left!
    return 0;
}