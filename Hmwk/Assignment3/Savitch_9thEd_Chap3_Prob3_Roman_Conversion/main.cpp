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
    short year;
    unsigned char n1,n10,n100,n1000;
    
    cout << "Arabic to Roman numeral conversion.\nInput the integer to convert." << endl;
    cin >> year;
    
    if(year >= 1000 && year <= 3000)
    {
        n1 =(year)%10;
        n10 = (year/10)%10;
        n100 = (year/100)%10;
        n1000 = (year/1000)%10;
        
        cout << year << " is equal to ";
        
        cout << (n1000==3?"MMM":n1000==2?"MM":n1000==1?"M":"");
        cout << (n100==9?"CM":n100==8?"DCCC":n100==7?"DCC":n100==6?"DC":n100==5?"D":n100==4?"CD":n100==3?"CCC":n100==2?"CC":n100==1?"C":"");
        cout << (n10==9?"XC":n10==8?"LXXX":n10==7?"LXX":n10==6?"LX":n10==5?"L":n10==4?"XL":n10==3?"XXX":n10==2?"XX":n10==1?"X":"");
        cout << (n1==9?"IX":n1==8?"VIII":n1==7?"VII":n1==6?"VI":n1==5?"V":n1==4?"IV":n1==3?"III":n1==2?"II":n1==1?"I":"");
    }
    else
    {
        cout << year << " is Out of Range!";
    }
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}