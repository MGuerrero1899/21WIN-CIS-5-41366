/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short usrInpt,sum = 0;
    
    cin >> usrInpt;
    //Initialize or input i.e. set variable values
    for(short i = 1;i <= usrInpt;i++)
    {
        sum += i;
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Sum = " << sum;
    //Exit stage right or left!
    return 0;
}