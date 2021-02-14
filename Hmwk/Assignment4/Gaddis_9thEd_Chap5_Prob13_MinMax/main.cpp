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
    int stopNum,numbers,minNum,maxNum;
    stopNum = -99;
    
    cin >> numbers;
    minNum = maxNum = numbers;
    //Initialize or input i.e. set variable values
    while(numbers != stopNum)
    {
        if(numbers < minNum)
        {
            minNum = numbers;
        }
        if(numbers > maxNum)
        {
            maxNum = numbers;
        }
        
        cin >> numbers;
    }
    //Map inputs -> outputs
    
    //Display the outputs
cout << "Smallest number in the series is " << minNum << "\nLargest  number in the series is " << maxNum;
    //Exit stage right or left!
    return 0;
}