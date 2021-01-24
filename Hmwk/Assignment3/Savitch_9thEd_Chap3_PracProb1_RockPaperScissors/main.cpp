/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include <cctype>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char player1,player2;
    cout << "Rock Paper Scissors Game\nInput Player 1 and Player 2 Choices" << endl;
    cin >> player1 >> player2;
    player1 = toupper(player1);
    player2 = toupper(player2);
    
    switch (player1)
			{
			case 'P':
				if	(player2 == 'R')
					cout << "Paper covers rock.";
				else
					cout << "Scissors cuts paper.";
				break;
			case 'R':
				if	(player2 == 'S')
					cout << "Rock breaks scissors.";
				else
					cout << "Paper covers rock.";
				break;	
			case 'S':
				if	(player2 == 'P')
					cout << "Scissors cuts paper.";
				else
					cout << "Rock breaks scissors.";
				break;
			}
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}