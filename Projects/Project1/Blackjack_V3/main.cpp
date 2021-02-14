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
                   plyrSum,dlrSum,choice,cardType,stats;
    float wager,balance;
    string usrNme;
    char usrInput,hitstand;
    bool status,wgrVal,busted;
    //Initialize Variables
    balance = 500.0; //Balance in USD
    usrNme = ""; //Players username (Setting up for being able to store balances)
    status = true; //Status of the current game of blackjack
    wgrVal = false; //Checks for invalid Wager
    busted = false; //Allows game to loop while players are under 21
    stats = 0; //Sets wins to 0
    //Main Do While Loop
    cout << "Please Enter a Username : ";
    cin >> usrNme;
    //Greeting Output
    cout << "==========================================" << endl;
    cout << "\tWelcome to BlackJack " << usrNme << endl;
    cout << "==========================================" << endl;

        //Main Menu
    while(choice != 4) //While user input is not 1 loop through Menu Options
    {
        cout << "==========================================" << endl;
        cout << "1)Play Game" << endl;
        cout << "2)Balance" << endl;
        cout << "3)Stats" << endl;
        cout << "4)Exit Game" << endl;
        cout << "==========================================" << endl;
        cout << "Select Choice : ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
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
                //Main Do While Loop
                do{
                //Determine Player and Dealers Hands
                dlrHnd1 = rand() % 13 + 1;
                dlrHnd2 = rand() % 13 + 1;
                dlrHnd3 = rand() % 13 + 1;
                plyrHnd1 = rand() % 13 + 1;
                plyrHnd2 = rand() % 13 + 1;
                //Find Sum
                dlrSum = dlrHnd1 + dlrHnd2;
                plyrSum = plyrHnd1 + plyrHnd2;
                //Output Dealers hand
                cout << "Dealers Hand is ";
                switch(dlrHnd1)
                {
                    case 1:
                        cout << "an Ace and ";
                        break;
                    case 11:
                        cout << "a Jack and ";
                        break;
                    case 13:
                        cout << "a King and ";
                        break;
                    default:
                        cardType = rand() % 3 + 1;
                        if(cardType == 1)
                        {
                            cout << dlrHnd1 << " of diamonds and ";
                        }
                        else if(cardType == 2)
                        {
                            cout << dlrHnd1 << " of spades and ";
                        }
                        else
                        {
                            cout << dlrHnd1 << " of hearts and ";
                        }
                        break;
                }
                //Output for Dealer Card 2
                switch(dlrHnd2)
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
                        cardType = rand() % 3 + 1;
                        if(cardType == 1)
                        {
                            cout << dlrHnd2 << " of diamonds bringing the total to " 
                                 << dlrSum << endl;
                        }
                        else if(cardType == 2)
                        {
                            cout << dlrHnd2 << " of spades bringing the total to " 
                                 << dlrSum << endl;
                        }
                        else
                        {
                            cout << dlrHnd2 << " of hearts bringing the total to " 
                                 << dlrSum << endl;
                        }
                        break;
                }
                //Output Players hand
                cout << usrNme << "'s Hand is ";
                switch(plyrHnd1)
                {
                    case 1:
                        cout << "an Ace and ";
                        break;
                    case 11:
                        cout << "a Jack and ";
                        break;
                    case 13:
                        cout << "a King and ";
                        break;
                    default:
                        cardType = rand() % 3 + 1;
                        if(cardType == 1)
                        {
                            cout << dlrHnd1 << " of diamonds and ";
                        }
                        else if(cardType == 2)
                        {
                            cout << dlrHnd1 << " of spades and ";
                        }
                        else
                        {
                            cout << dlrHnd1 << " of hearts and ";
                        }
                        break;
                }
                //Output for Dealer Card 2
                switch(plyrHnd2)
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
                        cardType = rand() % 3 + 1;
                        if(cardType == 1)
                        {
                            cout << dlrHnd2 << " of diamonds bringing the total to " 
                                 << plyrSum << endl;
                        }
                        else if(cardType == 2)
                        {
                            cout << dlrHnd2 << " of spades bringing the total to " 
                                 << plyrSum << endl;
                        }
                        else
                        {
                            cout << dlrHnd2 << " of hearts bringing the total to " 
                                 << plyrSum << endl;
                        }
                        break;
                }
                //Premature Blackjack or bust
                if(dlrSum == 21)
                {
                    cout << "Dealer has hit Blackjack!!!" << endl;
                    balance -= wager;
                    busted = true;
                    status = false;
                    
                }
                if(dlrSum > 21)
                {
                    cout << "Dealer has busted!!!" << endl;
                    balance += (wager * 2);
                    busted = true;
                    status = false;
                    stats++;
                }
                if(plyrSum == 21)
                {
                    cout << usrNme  << " has hit Blackjack!!!" << endl;
                    balance += (wager * 2);
                    busted = true;
                    status = false;
                    stats++;
                }
                if(plyrSum > 21)
                {
                    cout << usrNme << " has busted!!!" << endl;
                    balance -= wager;
                    busted = true;
                    status = false;
                }
                //Hit or Stand
                while(busted != true)
                {
                    cout << "Would you like to Hit or Stand (H/S) : ";
                    cin >> hitstand;
                    if(hitstand == 'h' || hitstand == 'H')
                    {
                        //Pulls new value for players hand
                        plyrHnd3 = rand() % 13 + 1;
                        plyrSum += plyrHnd3; //Draws New Card
                        cout << usrNme << " selected hit and drew ";
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
                                cardType = rand() % 3 + 1;
                                if(cardType == 1)
                                {
                                    cout << plyrHnd3 << " of diamonds bringing the total to " 
                                         << plyrSum << endl;
                                }
                                else if(cardType == 2)
                                {
                                    cout << plyrHnd3 << " of spades bringing the total to " 
                                         << plyrSum << endl;
                                }
                                else
                                {
                                    cout << plyrHnd3 << " of hearts bringing the total to " 
                                         << plyrSum << endl;
                                }
                                break;
                        }
                        //Looks at win conditions  
                        if(plyrSum < 21)
                        {
                            continue;
                        }
                        else if(plyrSum == 21)
                        {
                            cout << usrNme  << " has hit Blackjack!!!" << endl;
                            balance += (wager * 2);
                            wgrVal = false; //Resets Wager
                            status = false;
                            busted = true;
                            stats++;
                        }
                        else
                        {
                            cout << usrNme << " has Busted!!!" << endl;
                            balance -= wager;
                            wgrVal = false; //Resets Wager
                            status = false;
                            busted = true;
                        }
                        if(dlrSum == 21)
                        {
                            cout << "Dealer has hit Blackjack!!!" << endl;
                            balance -= wager;
                            wgrVal = false; //Resets Wager
                            status = false;
                            busted = true;
                        }
                        if(dlrSum > 21)
                        {
                            cout << "Dealer has busted!!!" << endl;
                            balance += (wager * 2);
                            wgrVal = false; //Resets Wager
                            status = false;
                            busted = true;
                            stats++;
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
                                    cardType = rand() % 3 + 1; //Draws 3rd card
                                    if(cardType == 1)
                                    {
                                        cout << dlrHnd3 << " of diamonds bringing the total to " 
                                             << dlrSum << endl;
                                    }
                                    else if(cardType == 2)
                                    {
                                        cout << dlrHnd3 << " of spades bringing the total to " 
                                             << dlrSum << endl;
                                    }
                                    else
                                    {
                                        cout << dlrHnd3 << " of hearts bringing the total to " 
                                             << dlrSum << endl;
                                    }
                                    break;
                            }
                        }
                        //Win Conditions
                        if(dlrSum == 21)
                        {
                            cout << "Dealer has hit Blackjack!!!" << endl;
                            balance -= wager;
                            wgrVal = false; //Resets Wager
                            status = false;
                            busted = true;
                        }
                        if(dlrSum > 21)
                        {
                            cout << "Dealer has Busted!!!" << endl;
                            balance += (wager * 2);
                            wgrVal = false; //Resets Wager
                            status = false;
                            busted = true;
                        }
                        if(dlrSum > plyrSum && dlrSum < 21)
                        {
                            cout << "Dealer has Won!!!" << endl;
                            balance -= wager;
                            wgrVal = false; //Resets Wager
                            status = false;
                            busted = true;
                        }
                        if(dlrSum < plyrSum && plyrSum < 21)
                        {
                            cout << "Player has Won!!!" << endl;
                            balance += (wager * 2);
                            wgrVal = false; //Resets Wager
                            status = false;
                            busted = true;
                            stats++;
                        }
                        if(dlrSum == plyrSum)
                        {
                            cout << "Push!!!" << endl;
                            balance += (wager * 0);
                            wgrVal = false; //Resets Wager
                            status = false;
                            busted = true;
                        }
                    }
                }
                //Ask if User wants to play again
                cout << "Would you like to play again? (Y/N): ";
                cin >> usrInput;
                if(usrInput == 'n' || usrInput == 'N')
                {
                    status = false;
                    choice = 4;
                }
                else
                {
                    wgrVal = false; //Resets Wager
                    status = false; //Resets Game
                    busted = false; // Resets Win Status
                }
                }while(status == true);
                break;
            }
            case 2: //Displays Users Balance
                    cout << "Current Balance : ";
                    cout << fixed << setprecision(2) << "$" << balance 
                         << endl;
                    break;
            case 3:
                cout << "You have won " << stats << " times." << endl;
                break;
            case 4: //Exits the entire program
                status = false;
                break;
            default: //Default option loops around for player to choose again
                cout << "Invalid Choice, Please Try Again." << endl;
                        break;
               
        }
    }
            return 0;
}

