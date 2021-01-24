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
    
    //Declare Variables
    float chckFee,mnthFee,lowBal,newBal,checks,xtraFee,balance;;
    //Initialize or input i.e. set variable values
    mnthFee = 10;
    
    cout << "Monthly Bank Fees\nInput Current Bank Balance and Number of Checks" << endl;
    cin >> balance >> checks;
    //Map inputs -> outputs
    if(checks < 0)
    {
        cout << "Invalid number of checks.";
        if(balance < 0)
        {
            cout << "Invalid number of checks.";
        }
    }
    else if(checks > 0)
    {
        if(balance < 0)
        {
            cout << "URGENT ACCOUNT HAS BEEN OVERDRAWN.";
        }
        else if(balance > 0)
        {
            if(checks < 20 && checks >= 0)
                {
                    chckFee = .10 * checks;
                }
            else if (checks <= 39 && checks >= 20)
                {
                    chckFee = .08 * checks;
                }
            else if(checks <= 59 && checks >= 40)
                {
                    chckFee = .06 * checks;
                }
            else if(checks >= 60)
                {
                    chckFee = .04 * checks;
                }
        //Display the outputs
         balance<400?lowBal=15.00:lowBal=0.00;
         newBal = balance - chckFee - mnthFee - lowBal;
         cout << fixed <<setprecision(2)
         << "Balance     $" << setw(9) << balance
         << "\nCheck Fee   $" << setw(9) << chckFee
         << "\nMonthly Fee $" << setw(9) << mnthFee
         << "\nLow Balance $" << setw(9) << lowBal
         << "\nNew Balance $" << setw(9) << newBal;
        }
    }

    //Exit stage right or left!
    return 0;
}