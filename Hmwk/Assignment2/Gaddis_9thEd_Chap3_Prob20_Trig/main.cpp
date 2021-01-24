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
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float pi = 3.141592653589793238;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    short angle;
    float dgreeCnvrsn;
    //Declare Variables
    cin >> angle;
    dgreeCnvrsn = angle * (pi / 180);
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout << fixed << setprecision(4) << "Calculate trig functions\n" << 
                                    "Input the angle in degrees.\n" << 
                                    "sin("<< angle << ") = " << sin(dgreeCnvrsn) <<
                                    "\ncos("<< angle << ") = " << cos(dgreeCnvrsn) <<
                                    "\ntan("<< angle << ") = " << tan(dgreeCnvrsn);
    //Exit stage right or left!
    return 0;
}