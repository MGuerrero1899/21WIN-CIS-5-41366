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
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void waitTme(short,short,short,char);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int crntHr,crntMin,wait;
    char usrInpt,ampm;
    //Initialize or input i.e. set variable values
    do{
    cout << "Enter hour:\n" << endl;
    cin  >> crntHr;
    cout << "Enter minutes:\n" << endl;
    cin  >> crntMin;
    cout << "Enter A for AM, P for PM:\n" << endl;
    cin  >> ampm;
    cout << "Enter waiting time:\n" << endl;
    cin  >> wait;
    //Map inputs -> outputs
    
    //Display the outputs
    waitTme(crntHr,crntMin,wait,ampm);
    cout << "\nAgain:" << endl;
    cin >> usrInpt;
    if(usrInpt == 'y' || usrInpt == 'Y')
    {
        cout << endl;
    }
    }while(usrInpt == 'y');
    //Exit stage right or left!
    return 0;
}

void waitTme(short crntHr,short crntMin,short wait,char ampm)
{
    short hrInDay, ttlHrs,ttlMins;
    hrInDay = 12;
    ttlHrs = crntHr;
    ttlMins = crntMin + wait;
    //Makes minutes less than 60 to fit into an hour
    while(ttlMins > 59)
    {
        ttlMins -= 60;
        ttlHrs++;
    }
    //Determines output for wait time
    if(ampm == 'A' || ampm == 'a')
    {
            //Determines correct output for current time
        if(crntHr < 10)
        {
            cout << "Current time = "  << setfill('0') << setw(2) << setprecision(2) << crntHr;
            if(crntMin < 10)
            {
                cout << ":" << setfill('0') << setw(2) << setprecision(2) << crntMin << " AM" << endl;
            }
            else
            {
                cout << ":" << crntMin << " AM" << endl;
            }
        }
        else if(crntHr >= 10 && crntHr < 12)
        {
            cout << "Current time = " << crntHr;
            if(crntMin < 10)
            {
                cout << ":" << setfill('0') << setw(2) << setprecision(2) << crntMin << " AM" << endl;
            }
            else
            {
                cout << ":" << crntMin << " AM" << endl;
            }
        }
        else
        {
            crntHr -= hrInDay;
            cout << "Current time = "  << setfill('0') << setw(2) << setprecision(2) << crntHr;
            if(crntMin < 10)
            {
                cout << ":" << setfill('0') << setw(2) << setprecision(2) << crntMin << " PM" << endl;
            }
            else
            {
                cout << ":" << crntMin << " PM" << endl;
            } 
        }
        if(ttlHrs < 10)
        {
            cout << "Time after waiting period = "<< setfill('0') << setw(2) << setprecision(2) << ttlHrs;
            if(ttlMins >= 10)
            {
                cout << ":" << setw(2) << setprecision(2) << ttlMins << " AM" << endl;
            }
            else
            {
               cout << ":" << setfill('0') << setw(2) << setprecision(2) << ttlMins << " AM" << endl;
            }
        }
        else if(ttlHrs >= 10 && ttlHrs < 12)
        {
            cout << "Time after waiting period = " << ttlHrs;
            if(ttlMins >= 10)
            {
                cout << ":" << setw(2) << setprecision(2) << ttlMins << " AM" << endl;
            }
            else
            {
               cout << ":" << setfill('0') << setw(2) << setprecision(2) << ttlMins << " AM" << endl;
            }
        }
        else
        {
            ttlHrs -= hrInDay;
            cout << "Time after waiting period = " << setfill('0') << setw(2) << setprecision(2) << ttlHrs;
            if(ttlMins >= 10)
            {
                cout << ":" << setw(2) << setprecision(2) << ttlMins << " PM" << endl;
            }
            else
            {
               cout << ":" << setfill('0') << setw(2) << setprecision(2) << ttlMins << " PM" << endl;
            }
        }
    }
    else
    {
                //Determines correct output for current time
        if(crntHr < 10)
        {
            cout << "Current time = "  << setfill('0') << setw(2) << setprecision(2) << crntHr;
            if(crntMin < 10)
            {
                cout << ":" << setfill('0') << setw(2) << setprecision(2) << crntMin << " PM" << endl;
            }
            else
            {
                cout << ":" << crntMin << " PM" << endl;
            }
        }
        else
        {
            cout << "Current time = "  << setfill('0') << setw(2) << setprecision(2) << crntHr;
            if(crntMin < 10)
            {
                cout << ":" << setfill('0') << setw(2) << setprecision(2) << crntMin << " PM" << endl;
            }
            else
            {
                cout << ":" << crntMin << " PM" << endl;
            } 
        }
        if(ttlHrs < 10)
        {
            cout << "Time after waiting period = "<< setfill('0') << setw(2) << setprecision(2) << ttlHrs;
            if(ttlMins >= 10)
            {
                cout << ":" << setw(2) << setprecision(2) << ttlMins << " PM" << endl;
            }
            else
            {
               cout << ":" << setfill('0') << setw(2) << setprecision(2) << ttlMins << " PM" << endl;
            }
        }
        else
        {
            cout << "Time after waiting period = " << ttlHrs;
            if(ttlMins >= 10)
            {
                cout << ":" << setw(2) << setprecision(2) << ttlMins << " PM" << endl;
            }
            else
            {
               cout << ":" << setfill('0') << setw(2) << setprecision(2) << ttlMins << " PM" << endl;
            }
        }
    }
}