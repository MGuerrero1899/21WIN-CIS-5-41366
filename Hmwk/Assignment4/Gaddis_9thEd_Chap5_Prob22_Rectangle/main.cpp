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
    int num;
    char letter;
    
    //Map inputs -> outputs
    cin >> num;
    cin >> letter;
    
    //Display the outputs
    if(num <= 15)
    {
        for(int i = 0;i<num; i++)
        {
            for(int x = 0;x <num; x++)
            {
                cout << letter;
            }
            if(i+1 != num)
            {
                cout << endl;
            }
        }
    }
    

    //Exit stage right or left!
    return 0;
}