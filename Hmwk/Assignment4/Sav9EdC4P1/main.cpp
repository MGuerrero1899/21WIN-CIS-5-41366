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
    int gasGlln,miTrvld;
    char usrInpt;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    do 
    {
    cout << "Enter number of liters of gasoline:\n" << endl;
    cin >> gasGlln;
    cout << "Enter number of miles traveled:" << endl;
    cin >> miTrvld;
    cout << endl;
    cout << "miles per gallon:\n" << fixed << setprecision(2) << MPGCalc(miTrvld,gasGlln) << endl;
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

float MPGCalc(int mi,int glln)
{
    float MPG,gallon;
    gallon = LTRinGllns * glln;
    MPG = mi/gallon;
    return MPG;
}