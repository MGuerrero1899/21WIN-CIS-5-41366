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
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string runner1,runner2,runner3;
    short time1,time2,time3;
    //Initialize or input i.e. set variable values
    cout << "Race Ranking Program\n"
         << "Input 3 Runners\n"
         << "Their names, then their times" << endl;
    cin >> runner1 >> time1 >> runner2 >> time2 >> runner3 >> time3;
    
    if(time1 < 0 || time2 < 0 || time3 < 0)
    {
        
    }
    else
    {
        if (time1 < time2)
        {
            if (time1 < time3)
            {
                cout << runner1 <<"\t" << setw(3) << time1 << endl;
                if (time2 < time3)
                {
                   cout << runner2 <<"\t" << setw(3) << time2 << endl;
                   cout << runner3 <<"\t " << setw(3) << time3;
                }
                else
                {
                   cout << runner3 <<"\t" << setw(3) << time3 << endl;
                   cout << runner2 <<"\t" << setw(3) << time2;
                }
            }
        }
        if (time2 < time3)
        {
            if (time2 < time1)
            {
                cout << runner2 <<"\t" << setw(3) << time2 << endl;
                
                if (time1 < time3)
                {
                    cout << runner1 <<"\t" << setw(3) << time1 << endl;
                    cout << runner3 <<"\t " << setw(3) << time3;
                }
                else
                {
                    cout << runner3 <<"\t" << setw(3) << time3<< endl;
                    cout << runner1 <<"\t" << setw(3) << time1;
                }
            }
        }
        if (time3 < time2)
        {
            if (time3 < time1)
            {
                cout << runner3 <<"\t" << setw(3) << time3 << endl;
                if (time1 < time2)
                {
                    cout << runner1 <<"\t" << setw(3) << time1 << endl;
                    cout << runner2 <<"\t" << setw(3) << time2;
                }
                else
                {
                    cout << runner2 <<"\t" << setw(3) << time2 << endl;
                    cout << runner1 <<"\t" << setw(3) << time1;
                }
            }
        }
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}