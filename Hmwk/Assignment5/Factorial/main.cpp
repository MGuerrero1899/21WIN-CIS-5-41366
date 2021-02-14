/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    //Initialize Variables
    cout << "This program calculates the factorial using a function prototype found in the template for this problem.\n"
         << "Input the number for the function." << endl;
    cin  >> n;
    //Process/Map inputs to outputs
    
    //Output data
    cout << n << "! = " << fctrl(n);
    //Exit stage right!
    return 0;
}

int fctrl(int n)
{
    if(n > 1)
    {
        return n * fctrl(n - 1);
    }
    else
    {
        return 1;
    }
}