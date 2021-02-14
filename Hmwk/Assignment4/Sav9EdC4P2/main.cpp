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
const float LTRinGllns = .264179;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float MPGCalc(int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int gasGln1,miTrvl1,gasGln2,miTrvl2;
    char usrInpt;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    do 
    {
    cout << "Car 1" << endl;
    cout << "Enter number of liters of gasoline:" << endl;
    cin  >> gasGln1;
    cout << "Enter number of miles traveled:" << endl;
    cin  >> miTrvl1;
    cout << "miles per gallon: " << fixed << setprecision(2) << MPGCalc(gasGln1,miTrvl1) << "\n" << endl;
    cout << "Car 2" << endl;
    cout << "Enter number of liters of gasoline:" << endl;
    cin  >> gasGln2;
    cout << "Enter number of miles traveled:" << endl;
    cin  >> miTrvl2;
    cout << "miles per gallon: " << fixed << setprecision(2) << MPGCalc(gasGln2,miTrvl2) << "\n" << endl;
         
    if(MPGCalc(gasGln1,miTrvl1) > MPGCalc(gasGln2,miTrvl2))
    {
        cout << "Car 1 is more fuel efficient\n" << endl;
    }
    else
    {
        cout << "Car 2 is more fuel efficient\n" << endl;
    }
    cout << "Again:" << endl;
    cin >> usrInpt;
    if(usrInpt == 'y' || usrInpt == 'Y')
    {
        cout << endl;
    }
    }while(usrInpt == 'y');
    //Exit stage right or left!
    return 0;
}

float MPGCalc(int glln,int mi)
{
    float MPG,gallon;
    gallon = LTRinGllns * glln;
    MPG = mi/gallon;
    return MPG;
}