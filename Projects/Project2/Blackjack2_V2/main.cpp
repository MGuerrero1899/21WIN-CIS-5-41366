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
float blckjack(float);
int plyrCrd(int);
int dlrCrd(int);

int main(int argc, char** argv) {
    //Initialize Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    bool gmeStat;
    char mnuInpt;
    float balance;
    unsigned short dlrHnd1,dlrHnd2,dlrHnd3,plyrHnd1,plyrHnd2,plyrHnd3,
                   stats;
    
    gmeStat = validUsr();
    //Main Menu
    while(gmeStat == true && mnuInpt != '4') //While user input is not 1 loop through Menu Options
    {
        cout << "==========================================" << endl;
        cout << "1)Play Game" << endl;
        cout << "2)Balance" << endl;
        cout << "3)Exit Game" << endl;
        cout << "==========================================" << endl;
        cout << "Select Choice : ";
        cin >> mnuInpt;
        switch(mnuInpt)
        {
            case '1':
                balance = blckjack(balance);
                break;
            case '2': //Displays Users Balance
                    cout << "Current Balance : ";
                    cout << fixed << setprecision(2) << "$" << balance 
                         << endl;
                    break;
            case '3': //Exits the entire program
                exit(0);
                break;
            default: //Default option loops around for player to choose again
                cout << "Invalid Choice, Please Try Again." << endl;
                        break;
        }
    }
    return 0;
}

bool validUsr()
{
    string usrnme,psswrd,un, pw;
    char inpt,inpt2;
    bool valid = false;
    int tries = 0;
    cout << "Do you have an active user?(Y/N) : ";
    cin  >> inpt;
    
        if(inpt == 'Y' || inpt == 'y')
        {
            do{
            cout << "Enter username : ";
            cin  >> usrnme;
            cout << "Enter the password : ";
            cin  >> psswrd;
            ifstream read(usrnme + ".dat");
            getline(read, un);
            getline(read, pw);

            if(un == usrnme && pw == psswrd)
            {
                cout << "Good login" << endl;
                valid = true;
                return true;
            }
            else
            {
                cout << "Invalid Username/Password, please try again." << endl;
                tries++;
            }
            if(tries == 3)
            {
                cout << "You have hit the login attempt limit.\n"
                     << "Please exit the program and create a new user."<< endl;
                return false;
                exit(0);
            }
            }while(!valid);
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
                exit(0);
            }
        }
}

float blckjack(float balance = 500)
{
    bool wgrVal = false;
    bool busted = false;
    float wager;
    int plyrSum,dlrSum,dlrHnd3,plyrHnd3;
    char hitstand;
    while(wgrVal == false)
    {
        cout << "Please Input Amount to Wager : ";
        cin >> wager;
        if(wager > balance)
        {
            cout << "Invalid Wager Amount, Try Again." << endl;
        }
        else if(wager <= balance)
        {
            wgrVal = true;
            busted = false;
        }
    }
    plyrSum = plyrCrd(plyrSum);
    dlrSum = dlrCrd(dlrSum);
    
    if(plyrSum > 21)
    {
        cout << "Player has busted!" << endl;
        plyrSum = 0;
        balance -= wager;
        busted = true;
    }
    if(plyrSum == 21)
    {
        cout << "Player has hit BlackJack!!!" << endl;
        plyrSum = 0;
        balance += wager * 2;
        busted = true;
    }
    if(plyrSum > 21)
    {
        cout << "Dealer has busted!" << endl;
        plyrSum = 0;
        balance += wager * 2;
        busted = true;
    }
    if(plyrSum == 21)
    {
        cout << "Dealer has hit BlackJack!!!" << endl;
        plyrSum = 0;
        balance -= wager;
        busted = true;
    }
               while(busted != true)
                {
                    cout << "Would you like to Hit or Stand (H/S) : ";
                    cin >> hitstand;
                    if(hitstand == 'h' || hitstand == 'H')
                    {
                        //Pulls new value for players hand
                        plyrHnd3 = rand() % 13 + 1;
                        plyrSum += plyrHnd3; //Draws New Card
                        cout << "Player selected hit and drew ";
                        switch(plyrHnd3)
                        {
                            case 1:
                                cout << "an Ace bringing the total to " << plyrSum << endl;
                                break;
                            case 11:
                                cout << "a Jack bringing the total to " << plyrSum << endl;
                                break;
                            case 13:
                                cout << "a King bringing the total to " << plyrSum << endl;
                                break;
                            default:
                                cout << " a " << plyrHnd3 << endl;
                        }
                        //Looks at win conditions  
                        if(plyrSum < 21)
                        {
                            continue;
                        }
                        else if(plyrSum == 21)
                        {
                            cout << "Player has hit Blackjack!!!" << endl;
                            balance += (wager * 2);
                            wgrVal = false; //Resets Wager
                            busted = true;
                        }
                        else
                        {
                            cout << "Player has Busted!!!" << endl;
                            balance -= wager;
                            wgrVal = false; //Resets Wager
                            busted = true;
                        }
                        if(dlrSum == 21)
                        {
                            cout << "Dealer has hit Blackjack!!!" << endl;
                            balance -= wager;
                            wgrVal = false; //Resets Wager
                            busted = true;
                        }
                        if(dlrSum > 21)
                        {
                            cout << "Dealer has busted!!!" << endl;
                            balance += (wager * 2);
                            wgrVal = false; //Resets Wager
                            busted = true;
                        }
                    }
                    else if(hitstand == 's' || hitstand == 'S')
                    {
                        //While Dealer hand is invalid hand keep hitting
                        while(dlrSum < 16 && dlrSum < 21)
                        {
                            //Pulls new value for dealer hand
                            dlrHnd3 = rand() % 13 + 1;
                            dlrSum += dlrHnd3;
                            cout << "Dealer drew ";
                            switch(dlrHnd3)
                            {
                                case 1:
                                    cout << "an Ace bringing the total to " << dlrSum << endl;
                                    break;
                                case 11:
                                    cout << "a Jack bringing the total to " << dlrSum << endl;
                                    break;
                                case 13:
                                    cout << "a King bringing the total to " << dlrSum << endl;
                                    break;
                                default:
                                cout << " a " << dlrHnd3 << endl;
                        }
                        //Win Conditions
                        if(dlrSum == 21)
                        {
                            cout << "Dealer has hit Blackjack!!!" << endl;
                            balance -= wager;
                            wgrVal = false; //Resets Wager
                            busted = true;
                        }
                        if(dlrSum > 21)
                        {
                            cout << "Dealer has Busted!!!" << endl;
                            balance += (wager * 2);
                            wgrVal = false; //Resets Wager
                            busted = true;
                        }
                        if(dlrSum > plyrSum && dlrSum < 21)
                        {
                            cout << "Dealer has Won!!!" << endl;
                            balance -= wager;
                            wgrVal = false; //Resets Wager
                            busted = true;
                        }
                        if(dlrSum < plyrSum && plyrSum < 21)
                        {
                            cout << "Player has Won!!!" << endl;
                            balance += (wager * 2);
                            wgrVal = false; //Resets Wager
                            busted = true;
                        }
                        if(dlrSum == plyrSum)
                        {
                            cout << "Push!!!" << endl;
                            balance += (wager * 0);
                            wgrVal = false; //Resets Wager
                            busted = true;
                        }
                    }
                }
    }
    return balance;
}

int plyrCrd(int plyrSum)
{
    short card,card2,randCrd,randCrd2;
    string AKJ[3] {"Ace","King","Jack"};
    static string cardType[4] {"Clubs","Diamond","Hearts","Spades"};
    randCrd = rand() % 4;
    randCrd2 = rand() % 4;
    card = rand() % 13 + 1;
    card2 = rand() % 13 + 1;
    if(card == 1)
    {
        cout << "Player has drawn an " << AKJ[0] << " ";
    }
    else if(card == 11)
    {
        cout << "Player has drawn a " << AKJ[2] << " ";
    }
    else if(card == 13)
    {
        cout << "Player has drawn a " << AKJ[1] << " ";
    }
    else
    {
        cout << "Player has drawn " << card << " of " << cardType[randCrd] << " ";
    }
    if(card2 == 1)
    {
        cout << " and a " << AKJ[0] << endl;
    }
    else if(card2 == 11)
    {
        cout << " and a " << AKJ[2] << endl;
    }
    else if(card2 == 13)
    {
        cout << " and a " << AKJ[1] << endl;
    }
    else
    {
        cout << " and a " << card2 << " of " << cardType[randCrd2] << endl;
    }
    
    plyrSum = card + card2;
    return plyrSum;
}

int dlrCrd(int dlrSum)
{
    short card,card2,randCrd,randCrd2;
    string AKJ[3] {"Ace","King","Jack"};
    static string cardType[4] {"Clubs","Diamond","Hearts","Spades"};
    randCrd = rand() % 4;
    randCrd2 = rand() % 4;
    card = rand() % 13 + 1;
    card2 = rand() % 13 + 1;
    if(card == 1)
    {
        cout << "Dealer has drawn an " << AKJ[0] << " ";
    }
    else if(card == 11)
    {
        cout << "Dealer has drawn a " << AKJ[2] << " ";
    }
    else if(card == 13)
    {
        cout << "Dealer has drawn a " << AKJ[1] << " ";
    }
    else
    {
        cout << "Dealer has drawn " << card << " of " << cardType[randCrd] << " ";
    }
    if(card2 == 1)
    {
        cout << " and a " << AKJ[0] << endl;
    }
    else if(card2 == 11)
    {
        cout << " and a " << AKJ[2] << endl;
    }
    else if(card2 == 13)
    {
        cout << " and a " << AKJ[1] << endl;
    }
    else
    {
        cout << " and a " << card2 << " of " << cardType[randCrd2] << endl;
    }
    
    dlrSum = card + card2;
    return dlrSum;
}

