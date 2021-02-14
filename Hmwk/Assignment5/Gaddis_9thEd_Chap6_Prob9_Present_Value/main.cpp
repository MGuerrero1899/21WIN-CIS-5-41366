//Use a template and properly format with comments, etc....
//System Libraries
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//Function Prototypes
float psntVal(float,float,int);
//Main Function
int main(int argc, char** argv) {
    //Declare Variables
    float futVal,intRate; //Current value, Future Value, Interest Rate
    int yrs; //Number of years that money will sit in account
    //Initialize variables and basic Ouput prompts
    cout << "This is a Present Value Computation" << endl;
    cout << "Input the Future Value in Dollars" << endl;
    cin  >> futVal;
    cout << "Input the Number of Years" << endl;
    cin  >> yrs;
    cout << "Input the Interest Rate %/yr" << endl;
    cin  >> intRate;
    cout << "The Present Value = $" << fixed << setprecision(2) << psntVal(futVal,intRate,yrs);
}
float psntVal(float futVal,float intRate,int yrs)
{
    //Returns the future value divided by 1 + interest rates to the power of years
    return futVal/pow(1+(intRate/100.0f),yrs);
}