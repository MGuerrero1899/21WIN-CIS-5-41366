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
    float nums,posNums,negNums,numSum,numAmnt;
    //Declare Variables
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    numAmnt = 10;
    //Initialize or input i.e. set variable values
    for(short i = 0;i<numAmnt; i++)
    {
        cin >> nums;
        if(nums > 0)
        {
            posNums += nums;
        }
        else if(nums < 0)
        {
            negNums += nums;
        }
        else
        {
            continue;
        }
    }
    numSum = posNums + negNums;
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Negative sum =" << setw(4) << negNums
         << "\nPositive sum =" << setw(4) << posNums
         << "\nTotal sum    =" << setw(4) << numSum;
    //Exit stage right or left!
    return 0;
}