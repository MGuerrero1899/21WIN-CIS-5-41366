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
    float score1,score2,score3,score4,score5,avg;
    //Declare Variables
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    avg = (score1 + score2 + score3 + score4 + score5) / 5;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout << fixed << setprecision(1) << "Input 5 numbers to average.\n" << "The average = " << avg;
    //Exit stage right or left!
    return 0;
}