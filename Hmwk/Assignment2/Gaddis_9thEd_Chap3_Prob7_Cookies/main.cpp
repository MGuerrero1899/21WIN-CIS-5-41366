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
    short cookies,calPerCookie,servings,cookieBag, calPerServing;
    //Declare Variables
    cookieBag = 40;
    servings = 10;
    calPerServing = 300;
    calPerCookie = calPerServing / (cookieBag/servings);
    cin >> cookies;
    cookies *= calPerCookie;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
 cout << "Calorie Counter\n" << "How many cookies did you eat?\n" << "You consumed " << cookies << " calories.";
    //Exit stage right or left!
    return 0;
}