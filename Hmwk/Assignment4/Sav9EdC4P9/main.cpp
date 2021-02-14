/* 
 * File:   
 * Author: 
 * Created on 
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
float maxTwo(float,float);
float maxThree(float,float,float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1,num2,num3;
    //Initialize or input i.e. set variable values
    cout << "Enter first number:\n" << endl;
    cin  >> num1;
    cout << "Enter Second number:\n" << endl;
    cin  >> num2;
    cout << "Enter third number:\n" << endl;
    cin  >> num3;
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Largest number from two parameter function:\n" << fixed << setprecision(1) << maxTwo(num1,num2) << endl;
    cout << "\nLargest number from three parameter function:\n" << fixed << setprecision(1) << maxThree(num1,num2,num3) << endl;
    //Exit stage right or left!
    return 0;
}

float maxTwo(float num1,float num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

float maxThree(float num1,float num2,float num3)
{
    if(num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}