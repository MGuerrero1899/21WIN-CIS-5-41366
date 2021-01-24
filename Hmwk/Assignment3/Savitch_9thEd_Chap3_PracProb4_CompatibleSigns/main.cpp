/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string input1,input2;
    short sign1,sign2;
    
    cout << "Horoscope Program which examines compatible signs.\nInput 2 signs." << endl;
    cin >> input1;
    if(input1 == "Aries")
    {
        sign1 = 0;
    }
    if(input1 == "Leo")
    {
        sign1 = 0;
    }
    if(input1 == "Sagittarius")
    {
        sign1 = 0;
    }
    if(input1 == "Virgo")
    {
        sign1 = 1;
    }
    if(input1 == "Capricorn")
    {
        sign1 = 1;
    }
    if(input1 == "Taurus")
    {
        sign1 = 1;
    }
    if(input1 == "Gemini")
    {
        sign1 = 2;
    }
    if(input1 == "Libra")
    {
        sign1 = 2;
    }
    if(input1 == "Aquarius")
    {
        sign1 = 2;
    }
    if(input1 == "Cancer")
    {
        sign1 = 3;
    }
    if(input1 == "Scorpio")
    {
        sign1 = 3;
    }
    if(input1 == "Pisces")
    {
        sign1 = 3;
    }
    
    cin >> input2;
    if(input2 == "Aries")
    {
        sign2 = 0;
    }
    if(input2 == "Leo")
    {
        sign2 = 0;
    }
    if(input2 == "Sagittarius")
    {
        sign2 = 0;
    }
    if(input2 == "Virgo")
    {
        sign2 = 1;
    }
    if(input2 == "Capricorn")
    {
        sign2 = 1;
    }
    if(input2 == "Taurus")
    {
        sign2 = 1;
    }
    if(input2 == "Gemini")
    {
        sign2 = 2;
    }
    if(input2 == "Libra")
    {
        sign2 = 2;
    }
    if(input2 == "Aquarius")
    {
        sign2 = 2;
    }
    if(input2 == "Cancer")
    {
        sign2 = 3;
    }
    if(input2 == "Scorpio")
    {
        sign2 = 3;
    }
    if(input2 == "Pisces")
    {
        sign2 = 3;
    }
    
    if(sign1 == 0 && sign2 == 0)
    {
        cout << input1 << " and " << input2 << " are compatible Fire signs.";
    }
    else if(sign1 == 1 && sign2 == 1)
    {
        cout << input1 << " and " << input2 << " are compatible Earth signs.";
    }
    else if(sign1 == 2 && sign2 == 2)
    {
        cout << input1 << " and " << input2 << " are compatible Air signs.";
    }
    else if(sign1 == 3 && sign2 == 3)
    {
        cout << input1 << " and " << input2 << " are compatible Water signs.";
    }
    else
    {
        cout << input1 << " and " << input2 << " are not compatible signs.";
    }
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}