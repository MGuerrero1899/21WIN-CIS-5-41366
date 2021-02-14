/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mike
 *
 * Created on January 20, 2021, 9:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

//Global Constants, no Global Variables are allowed
const float LTRinGllns = .264179;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max
int fctrl(int);//Function to write for this problem
bool isPrime(int);//Determine if the input number is prime.
int collatz(int);//3n+1 sequence
int collatzSeq(int);//3n+1 sequence
void waitTme(short,short,short,char);
void inpt(int &,int &, char &,bool &);
void cnvrsn(int &, int &, int &, char &);
void tmeOutpt(int &,int &,int &,char &, char &);
float psntVal(float,float,int);
void getScre(int &,int &,int &,int &,int &);
void calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);

int main(int argc, char** argv) 
{
    //Initialize the Random Number Seed
    //Declare Variables
    int usrInpt;
    cout << "=====Menu====\n"
         << "Type 1 for MinMax\n"
         << "Type 2 for Factorial\n"
         << "Type 3 for isPrime\n"
         << "Type 4 for Collatz Sequence\n"
         << "Type 5 for Collatz Sequence with Output\n"
         << "Type 6 for Wait Time\n"
         << "Type 7 for Time Converter\n"
         << "Type 8 for Present Value\n"
         << "Type 9 for Average Test Score\n"
         << "Type 0 to Exit" << endl;
    cin >> usrInpt;
    
    switch(usrInpt)
    {
        case 1: 
        {   //MinMax
        //Declare Variables
        int min,max,num1,num2,num3;
        //Initialize Variables
        cout << "Input 3 numbers" << endl;
        cin  >> num1;
        cin  >> num2;
        cin  >> num3;
        min = max = num1;
        //Process/Map inputs to outputs
        minmax(num1,num2,num3,max,min);
        //Output data
        cout << "Min = " << min << endl;
        cout << "Max = " << max;
                break;
        }
        case 2:
        {       //Factorial
            int n;
            //Initialize Variables
            cout << "This program calculates the factorial using a function prototype found in the template for this problem.\n"
                 << "Input the number for the function." << endl;
            cin  >> n;
            //Process/Map inputs to outputs

            //Output data
            cout << n << "! = " << fctrl(n);
            break;
        }
        case 3:   
        {   //isPrime
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
            break;
        }
        case 4: 
        {   //Collatz Sequence
            int n;

            //Initialize Variables
            cout<<"Collatz Conjecture Test"<<endl;
            cout<<"Input a sequence start"<<endl;
            cin>>n;

            //Process/Map inputs to outputs
            cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                    collatz(n)<<" steps";
            break;
        }
        case 5: 
        {   //Collatz Sequence With Output
            int n,ns;

            //Initialize Variables
            cout<<"Collatz Conjecture Test"<<endl;
            cout<<"Input a sequence start"<<endl;
            cin>>n;
            //Process/Map inputs to outputs
            ns=collatzSeq(n);

            //Output data
            cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                    ns<<" steps";
    
            break;
        }
        case 6: 
        {     //Wait Time
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
            break;
        }
        case 7:
        {   //Time Converter
            //declare variables
            int milHr,min,hrs; //Variable for 24 hour, minute and regular hour input
            char ampm,usrInpt,colon;//Variable for AMPM determination and input to run again or not
            bool valdTme = 1; //Rejects input if its an invalid time
            colon = ':';
            //Basic Output
            cout << "Military Time Converter to Standard Time" << endl; 
            cout << "Input Military Time hh:mm" << endl;
            //Do While loop to run as many times as the user wants
            do
            {
                //Calls our Input function
                inpt(milHr,min,colon,valdTme);
                //if we did not get a valid time program will ask for another input
                if(valdTme == 1)
                {
                    cnvrsn(milHr,min,hrs,ampm);
                    tmeOutpt(milHr,min,hrs,colon,ampm);
                }
                cout << "Would you like to convert another time (y/n)" << endl;
                cin >> usrInpt;
            }while(usrInpt == 'Y' || usrInpt == 'y');
            break;
        }
        case 8:
        {   //Present Value
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
            break;
        }
        case 9: 
        {   //Average of 5 Test scores
            //Declare Variables
            int scre1,scre2,scre3,scre4,scre5; //Five scores that will be input
            //Initialize Variables / Basic Output
            cout << "Find the Average of Test Scores\nby removing the lowest value." << endl;
            getScre(scre1,scre2,scre3,scre4,scre5);
            calcAvg(scre1,scre2,scre3,scre4,scre5);
            break;
        }
        default:
            cout << "Not a valid option" << endl;
            
            
    }
    return 0;
}
void minmax(int num1,int num2,int num3,int &max,int &min)
{
    if(num1 > max)
    {
        max = num1;
    }
    if(num2 > max)
    {
        max = num2;
    }
    if(num3 > max)
    {
        max = num3;
    }
    if(num1 < min)
    {
        min = num1;
    }
    if(num2 < min)
    {
        min = num2;
    }
    if(num3 < min)
    {
        min = num3;
    }
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
int collatz(int n)
{
    int i = 1;
    while(n != 1)
    {
        if(n%2 == 0)
        {
           n /=2;
        }
        else if(n%2 == 1)
        {
            n = (n*3) + 1;
        }
        i++;
    }
    return i;
}
int collatzSeq(int n)
{
    int i = 1;
    cout << n << ", ";
    while(n != 1)
    {
        if(n%2 == 0)
        {
           n /=2;
           if(n != 1)
           {
             cout << n << ", ";
           }
           else
           {
               cout << n << endl;
           }
        }
        else if(n%2 == 1)
        {
            n = (n*3) + 1;
           if(n != 1)
           {
             cout << n << ", ";
           }
           else
           {
               cout << n << endl;
           }
        }
        i++;
    }
    return i;
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
void inpt(int &milHr,int &min, char &colon, bool &valdTme)
{
    cin  >> milHr;//Input 24 hour notation
    cin  >> colon;//Input colon character
    cin  >> min;//Input minute
    //Determines if input is valid time
    if(milHr > 24 || min > 59)
    {
        cout << milHr << ":" << min << " is not a valid time" << endl;
        valdTme = 0;
    }
    else
    {
        valdTme = 1;
    }
}
void cnvrsn(int &milHr,int &min, int &hrs, char &ampm)
{
    //Sets ampm to P if 24 hour is greater than 12
    if(milHr > 12)
    {
        hrs = milHr - 12;
        ampm = 'P';
    }
    //sets ampm to P if 24 hour equals 12
    else if(milHr == 12)
    {
        hrs = 12;
        ampm = 'P';
    }
    //sets ampm to A if 24 hour equals 12 in the morning
    else if(milHr == 0)
    {
        hrs = 12;
        ampm = 'A';
    }
    //sets ampm to A if no other conditions are met
    else
    {
        hrs = milHr;
        ampm = 'A';
    }
}
void tmeOutpt(int &milHr, int &min, int &hrs, char &colon, char &ampm)
{
    //Outputs our final statements
    if(ampm == 'A')
    {
        if(milHr == 0)
        {
            cout << "00:" << min << " = " << hrs << ":" << min << " AM" << endl;
        }
        else
        {
            cout << milHr << colon << min << " = " << hrs << ":" << min << " AM" << endl;
        }
    }
    else
    {

        cout << milHr << colon << min << " = " << hrs << ":" << min << " PM" << endl;
    }
}
float psntVal(float futVal,float intRate,int yrs)
{
    //Returns the future value divided by 1 + interest rates to the power of years
    return futVal/pow(1+(intRate/100.0f),yrs);
}
void getScre(int &scre1, int &scre2,int &scre3,int &scre4,int &scre5)
{
    //Takes in the input of the 5 scores
    cout << "Input the 5 test scores." << endl;
    cin >> scre1 >> scre2 >> scre3 >> scre4 >> scre5;
}
void calcAvg(int scre1, int scre2, int scre3, int scre4, int scre5)
{
    float sum,avg;
    //Adds all scores into variable called sum
    sum = scre1 + scre2 + scre3 + scre4 + scre5;
    //Calculates the average by subtracting the lowest score from sum then dividing by 4
    avg = (sum - fndLwst(scre1,scre2,scre3,scre4,scre5)) / 4;
    cout << "The average test score = " << fixed << setprecision(1) << avg;
}
int fndLwst(int scre1,int scre2,int scre3,int scre4,int scre5)
{
    //Find lowest score by comparing all values to each other
    if(scre1 < scre2 && scre1 < scre3 && scre1 < scre4 && scre1 < scre5)
    {
        return scre1;
    }
    if(scre2 < scre1 && scre2 < scre3 && scre2 < scre4 && scre2 < scre5)
    {
        return scre2;
    }
    if(scre3 < scre1 && scre3 < scre2 && scre3 < scre4 && scre3 < scre5)
    {
        return scre3;
    }
    if(scre4 < scre1 && scre4 < scre2 && scre4 < scre3 && scre4 < scre5)
    {
        return scre4;
    }
    if(scre5 < scre1 && scre5 < scre2 && scre5 < scre3 && scre5 < scre4)
    {
        return scre5;
    }
}