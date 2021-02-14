//Create your own template, properly commented, spaced, etc....

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Function Prototypes
void inpt(int &,int &, char &,bool &);
void cnvrsn(int &, int &, int &, char &);
void tmeOutpt(int &,int &,int &,char &, char &);
//Main Function
int main(int argc, char** argv) 
{
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
    
    return 0;
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