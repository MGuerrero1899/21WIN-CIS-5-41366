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
const float sdaSwtn = 0.001f;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
float sweetnr, mseSwt,mseWght,tgtWght,txcDose,sdaGram,grmWght;
unsigned short sdaCan;
    //Initialize or input i.e. set variable values
    mseSwt = 5;
    mseWght = 35.0f;
    txcDose = mseSwt/mseWght;
    sdaGram = 350;
    sweetnr = sdaGram * sdaSwtn;
    cin >> tgtWght;
    grmWght = tgtWght * 453.59237f;
    sdaCan = (grmWght * txcDose)/sweetnr;
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Program to calculate the limit of Soda Pop Consumption.\n"
         << "Input the desired dieters weight in lbs.\n"
         << "The maximum number of soda pop cans\n"
         << "which can be consumed is " << sdaCan << " cans";
    //Exit stage right or left!
    return 0;
}