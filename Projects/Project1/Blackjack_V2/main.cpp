/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Michael Guerrero
 *
 * Created on February 5, 2021, 10:16 AM
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
int main(int argc, char** argv) {

    //Initialize Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned short dlrHnd1,dlrHnd2,dlrHnd3,plyrHnd1,plyrHnd2,plyrHnd3,
                   plyrSum,dlrSum,plyrChoice;
    float wager,balance;
    string usrNme;
    char usrInput;
    bool gmeStatus;
    //Initialize Variables
    balance = 500.0;
    usrNme = "";
    gmeStatus = true;
    //Main Do While Loop
    cout << "Please Enter a Username : ";
    cin >> usrNme;
    //Greeting Output
    cout << "==========================================" << endl;
    cout << "\tWelcome to BlackJack " << usrNme << endl;
    cout << "==========================================" << endl;

    do{
        //Main Menu
        while(plyrChoice != 1)
        {
            cout << "==========================================" << endl;
            cout << "1)Play Game" << endl;
            cout << "2)Balance" << endl;
            cout << "3)Exit Game" << endl;
            cout << "==========================================" << endl;
            cout << "Select Choice : ";
            cin >> plyrChoice;
            switch(plyrChoice)
            {
                case 1:
                    break;
                case 2:
                        cout << "Current Balance : ";
                        cout << fixed << setprecision(2) << "$" << balance << endl;
                        break;
                case 3:
                    gmeStatus = false;
                    plyrChoice = 1;
                    break;
                default:
                    cout << "Invalid Choice, Please Try Again." << endl;
                            break;
            }
        }
        //Determine Player and Dealers Hands
        dlrHnd1 = rand() % 13 + 1;
        dlrHnd2 = rand() % 13 + 1;
        dlrHnd3 = rand() % 13 + 1;
        plyrHnd1 = rand() % 13 + 1;
        plyrHnd2 = rand() % 13 + 1;
        plyrHnd3 = rand() % 13 + 1;
        //Output Dealers hand

        //Output Players hand

        //Win Conditions

        //Wager Returns
        gmeStatus = false;
        //Ask if User wants to play again
    }while(gmeStatus == true);
    return 0;
}

