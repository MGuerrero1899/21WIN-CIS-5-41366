/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Michael Guerrero
 *
 * Created on February 13, 2021, 9:21 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>  
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

/*
 * 
 */
//Function Prototype
bool validUsr();

int main(int argc, char** argv) {
    //Initialize Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    validUsr();
    return 0;
}

bool validUsr()
{
    string usrnme, psswrd,un, pw;
    char inpt,inpt2;
    cout << "Do you have an active user?(Y/N) : ";
    cin  >> inpt;
    
    if(inpt == 'Y' || inpt == 'y')
    {
        cout << "Enter username : ";
        cin  >> usrnme;
        cout << "Enter the password : ";
        cin  >> psswrd;
        ifstream read(usrnme + ".dat");
        getline(read, un);
        getline(read, pw);
        
        if(un == usrnme && pw == psswrd)
        {
            cout << "Good login";
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        cout << "Would you like to create a new user?(Y/N) : ";
        cin  >> inpt2;
        
        if(inpt2 == 'Y' || inpt2 == 'y')
        {
            cout << "Enter a username : ";
            cin  >> usrnme;
            cout << "Enter a password : ";
            cin  >> psswrd;
            
            ofstream file;
            file.open(usrnme + ".dat");
            file << usrnme << endl << psswrd;
            file.close();
            return true;
        }
        else
        {
            return false;
        }
    }
}
