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
    char package;
    float hours,price,bill;
    //Initialize or input i.e. set variable values
    cout << "ISP Bill\nInput Package and Hours" << endl;
    cin >> package;
    
    if ((package == 'A') || (package == 'B') || (package == 'C'))
    {
     cin >> hours;
     if(hours <= 744)
     {
         if(package == 'A')
         {
            if(hours > 10)
            {
                bill = 9.95 + (hours - 10) * 2;
            }
            else
            {
                bill = 9.95;
            }
         }
         else if(package == 'B')
         {
            if(hours > 20)
            {
                bill = 14.95 + (hours - 20) * 1;
            }
            else
            {
                bill = 14.95;
            }
         }
         else
         {
             bill = 19.95;
         }
     }
     cout << "Bill = $ " << bill;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}