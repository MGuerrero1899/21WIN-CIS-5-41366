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

using namespace std;

//Global Constants, no Global Variables are allowed
const float LTRinGllns = .264179;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float MPGCalc(int,int);
float InfRate(float,float);
float futPrice(float,float);
float maxTwo(float,float);
float maxThree(float,float,float);

int main(int argc, char** argv) 
{
    //Initialize the Random Number Seed
    //Declare Variables
    int usrInpt;
    cout << "=====Menu====\n"
         << "Type 1 for Sum\n"
         << "Type 2 for Pay in Pennies\n"
         << "Type 3 for Min Max\n"
         << "Type 4 for Rectangle\n"
         << "Type 5 for Pattern\n"
         << "Type 6 for MPG\n"
         << "Type 7 for Two Car MPG\n"
         << "Type 8 for Inflation Rate\n"
         << "Type 9 for Inflation Rate and Future Price\n"
         << "Type 10 for Max of Two or Three Parameters\n"
         << "Type 0 to Exit" << endl;
    cin >> usrInpt;
    
    switch(usrInpt)
    {
        case 1: 
        {   //Sum
            //Declare Variables
            short usrInpt,sum = 0;
            cout << "Enter a number: ";
            cin >> usrInpt;
            //Initialize or input i.e. set variable values
            for(short i = 1;i <= usrInpt;i++)
            {
                sum += i;
            }
            //Map inputs -> outputs

            //Display the outputs
            cout << "Sum = " << sum;
            break;
        }
        case 2:
        {       //Pay in Pennies
                //Declare Variables
            int strtSlry,dayGain,grossPay,numDays;

            strtSlry = 1;
            dayGain = 2;

            //Initialize or input i.e. set variable values
            do
            {
               cout << "Enter number of days: "; 
               cin >> numDays; 
            }while(numDays < 1);
            //Map inputs -> outputs
            for(int i = 0;i<numDays;i++)
            {
                grossPay += strtSlry;
                strtSlry = strtSlry * dayGain;
            }
            //Display the outputs
            cout << "Pay = $" << grossPay/100 << ".";
            if(grossPay%100 < 10)
            {
                cout << "0" << grossPay%100;
            }
            else if(grossPay%100 >=10)
            {
                cout << grossPay % 100;
            }
            break;
        }
        case 3:   
        {   //MinMax
            //Declare Variables
            int stopNum,numbers,minNum,maxNum;
            stopNum = -99;
            
            cout << "Enter numbers and -99 to stop: ";
            cin >> numbers;
            minNum = maxNum = numbers;
            //Initialize or input i.e. set variable values
            while(numbers != stopNum)
            {
                if(numbers < minNum)
                {
                    minNum = numbers;
                }
                if(numbers > maxNum)
                {
                    maxNum = numbers;
                }

                cin >> numbers;
            }
            //Map inputs -> outputs

            //Display the outputs
            cout << "Smallest number in the series is " << minNum << "\nLargest  number in the series is " << maxNum;
            break;
        }
        case 4: 
        {   //Rectangle
            //Declare Variables
            int num;
            char letter;

            //Map inputs -> outputs
            cout << "Enter a number: ";
            cin >> num;
            cout << "Enter a letter: ";
            cin >> letter;

            //Display the outputs
            if(num <= 15)
            {
                for(int i = 0;i<num; i++)
                {
                    for(int x = 0;x <num; x++)
                    {
                        cout << letter;
                    }
                    if(i+1 != num)
                    {
                        cout << endl;
                    }
                }
            }
            break;
        }
        case 5: 
        {   //Pattern
            //Declare Variables
            int n;
            //Initialize or input i.e. set variable values
            cout << "Enter 10: ";
            cin >> n;
            //Map inputs -> outputs
            for(int i = 1; i <= n; i++)
            {
                for(int j = 1; j <= i; j++)
                {
                    cout << "+";
                }
                cout << endl;
                cout << endl;
            }
            for(int i = n; i >= 2; i--)
            {
                for(int j = 1; j <= i; j++)
                {
                    cout << "+";
                }
                cout << endl;
                cout << endl;
            }
            cout << "+";
            break;
        }
        case 6: 
        {     //MPG
            //Declare Variables
            int gasGlln,miTrvld;
            char usrInpt;
            //Map inputs -> outputs
            do 
            {
            cout << "Enter number of liters of gasoline:\n" << endl;
            cin >> gasGlln;
            cout << "Enter number of miles traveled:" << endl;
            cin >> miTrvld;
            cout << endl;
            cout << "miles per gallon:\n" << fixed << setprecision(2) << MPGCalc(miTrvld,gasGlln) << endl;
            cout << "Again:" << endl;
            cin >> usrInpt;
            if(usrInpt == 'y' || usrInpt == 'Y')
            {
                cout << endl;
            }
            }while(usrInpt == 'y');
            break;
        }
        case 7:
        {   //Two Car MPG
            //Declare Variables
            int gasGln1,miTrvl1,gasGln2,miTrvl2;
            char usrInpt;
            //Initialize or input i.e. set variable values

            //Map inputs -> outputs

            do 
            {
            cout << "Car 1" << endl;
            cout << "Enter number of liters of gasoline:" << endl;
            cin  >> gasGln1;
            cout << "Enter number of miles traveled:" << endl;
            cin  >> miTrvl1;
            cout << "miles per gallon: " << fixed << setprecision(2) << MPGCalc(gasGln1,miTrvl1) << "\n" << endl;
            cout << "Car 2" << endl;
            cout << "Enter number of liters of gasoline:" << endl;
            cin  >> gasGln2;
            cout << "Enter number of miles traveled:" << endl;
            cin  >> miTrvl2;
            cout << "miles per gallon: " << fixed << setprecision(2) << MPGCalc(gasGln2,miTrvl2) << "\n" << endl;

            if(MPGCalc(gasGln1,miTrvl1) > MPGCalc(gasGln2,miTrvl2))
            {
                cout << "Car 1 is more fuel efficient\n" << endl;
            }
            else
            {
                cout << "Car 2 is more fuel efficient\n" << endl;
            }
            cout << "Again:" << endl;
            cin >> usrInpt;
            if(usrInpt == 'y' || usrInpt == 'Y')
            {
                cout << endl;
            }
            }while(usrInpt == 'y');
            break;
        }
        case 8:
        {   //Inflation Rate
            //Declare Variables
            float presItm,pastItm;
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
            cout << "Again:" << endl;
            cin >> usrInpt;
            if(usrInpt == 'y' || usrInpt == 'Y')
            {
                cout << endl;
            }
            }while(usrInpt == 'y');
            break;
        }
        case 9: 
        {   //Inflation Rate and Future Price
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
            break;
        }
        case 10:
        {   //Max of Two or Three Parameters
            //Declare Variables
            float num1,num2,num3;
            //Initialize or input i.e. set variable values
            cout << "Enter first number:\n" << endl;
            cin  >> num1;
            cout << "Enter Second number:\n" << endl;
            cin  >> num2;
            cout << "Enter third number:\n" << endl;
            cin  >> num3;
            //Map inputs -> outputs

            //Display the outputs
            cout << "Largest number from two parameter function:\n" << fixed << setprecision(1) << maxTwo(num1,num2) << endl;
            cout << "\nLargest number from three parameter function:\n" << fixed << setprecision(1) << maxThree(num1,num2,num3) << endl;
            break;
        }
        default:
            cout << "Not a valid option" << endl;
            
            
    }
    return 0;
}

float MPGCalc(int glln,int mi)
{
    float MPG,gallon;
    gallon = LTRinGllns * glln;
    MPG = mi/gallon;
    return MPG;
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
float maxTwo(float num1,float num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

float maxThree(float num1,float num2,float num3)
{
    if(num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}