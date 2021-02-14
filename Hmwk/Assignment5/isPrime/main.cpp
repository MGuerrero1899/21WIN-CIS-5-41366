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
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int input;
    //Initialize Variables
    cout << "Input a number to test if Prime." << endl; 
    cin  >> input;
    //Process/Map inputs to outputs
    
    //Output data
    if(isPrime(input) == 1)
    {
        cout << input << " is prime.";
    }
    else
    {
        cout << input << " is not prime.";
    }
    //Exit stage right!
    return 0;
}

bool isPrime(int input)
{
    if(input == 0 || input == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < input; i++) 
        {
            if (input % i == 0) 
            {
                return false;
            }
        }
        return true;
    }
}