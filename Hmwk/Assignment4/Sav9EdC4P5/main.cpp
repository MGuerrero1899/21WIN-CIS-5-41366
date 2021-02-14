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
float InfRate(float,float);
float futPrice(float,float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float presItm,pastItm,infPrct;
    char usrInpt;
    //Initialize or input i.e. set variable values
    do
    {
    cout << "Enter current price:" << endl;
    cin  >> presItm;
    cout << "Enter year-ago price:" << endl;
    cin  >> pastItm;
    //Map inputs -> outputs
    cout << "Inflation rate: ";
    cout << fixed << showpoint << setprecision(2) << InfRate(presItm,pastItm) <<"%\n" << endl;
    infPrct = InfRate(presItm,pastItm);
    pastItm = presItm;
    pastItm = futPrice(pastItm,infPrct);
    cout << "Price in one year: $" << pastItm << endl;
    pastItm = futPrice(pastItm,infPrct);
    cout << "Price in two year: $" << pastItm << "\n" << endl;
    cout << "Again:" << endl;
    cin >> usrInpt;
    if(usrInpt == 'y' || usrInpt == 'Y')
    {
        cout << endl;
    }
    }while(usrInpt == 'y');
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float InfRate(float presItm, float pastItm)
{
    float prceDif,infltn;
    prceDif = presItm - pastItm;
    infltn = (prceDif / pastItm) * 100;
    return infltn;
}

float futPrice(float presItm,float infltn)
{
    float change;
    change = (presItm * (infltn/100) + presItm);
    return change;
    
}