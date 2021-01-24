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
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    //Initialize the Random Number Seed
    //Declare Variables
    char usrInpt;
    cout << "=====Menu====\n"
         << "Type 1 for Sort Names\n"
         << "Type 2 for Books\n"
         << "Type 3 for Bank Charges\n"
         << "Type 4 for Race\n"
         << "Type 5 for ISP\n"
         << "Type 6 for Rock Paper Scissors\n"
         << "Type 7 for Roman Conversion\n"
         << "Type 8 for Compatible Signs\n"
         << "Type 9 for Truth Table\n"
         << "Type 0 to Exit" << endl;
    cin >> usrInpt;
    
    switch(usrInpt)
    {
        case '1': 
        {
                //Declare Variables
                string name1,name2,name3;
                //Initialize or input i.e. set variable values
                cout << "Sorting Names\nInput 3 names" << endl;
                cin >> name1 >> name2 >> name3;
                //Map inputs -> outputs
                if(name1 < name2 && name1 < name3)
                {
                    if(name2 < name3)
                    {
                        cout << name1 << endl;
                        cout << name2 << endl;
                        cout << name3;
                    }
                    else
                    {
                        cout << name1 << endl;
                        cout << name3 << endl;
                        cout << name2;
                    }
                }
                else if(name2 < name1 && name2 < name3)
                {
                    if(name1 < name3)
                    {
                        cout << name2 << endl;
                        cout << name1 << endl;
                        cout << name3;
                    }
                    else
                    {
                        cout << name2 << endl;
                        cout << name3 << endl;
                        cout << name1;
                    }
                }
                else if(name3 < name1 && name3 < name2)
                {
                    if(name1 < name2)
                    {
                        cout << name3 << endl;
                        cout << name1 << endl;
                        cout << name2;
                    }
                    else
                    {
                        cout << name3 << endl;
                        cout << name2 << endl;
                        cout << name1;
                    }
                }
                else
                {
                    cout << "Invalid name input.";
                }
                break;
        }
        case '2':
        {       //Books
                short points,books;
                //Declare Variables
                cout << "Book Worm Points\nInput the number of books purchased this month." << endl;
                cin >> books;
                //Initialize or input i.e. set variable values
                if(books == 0)
                {
                    points = 0;
                }
                else if(books == 1)
                {
                    points = 5;
                }
                else if(books == 2)
                {
                    points = 15;
                }
                else if(books == 3)
                {
                    points = 30;
                }
                else
                {
                    points = 60;
                }
                //Map inputs -> outputs

                //Display the outputs
                cout << "Books purchased =  " << books
                     << "\nPoints earned   = " << points;
                break;
        }
        case '3':   
        {           //Bank Charges
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
                    break;
        }
        case '4': 
        {       //Race
                //Declare Variables
                string runner1,runner2,runner3;
                short time1,time2,time3;
                //Initialize or input i.e. set variable values
                cout << "Race Ranking Program\n"
                     << "Input 3 Runners\n"
                     << "Their names, then their times" << endl;
                cin >> runner1 >> time1 >> runner2 >> time2 >> runner3 >> time3;

                if(time1 < 0 || time2 < 0 || time3 < 0)
                {

                }
                else
                {
                    if (time1 < time2)
                    {
                        if (time1 < time3)
                        {
                            cout << runner1 <<"\t" << setw(3) << time1 << endl;
                            if (time2 < time3)
                            {
                               cout << runner2 <<"\t" << setw(3) << time2 << endl;
                               cout << runner3 <<"\t " << setw(3) << time3;
                            }
                            else
                            {
                               cout << runner3 <<"\t" << setw(3) << time3 << endl;
                               cout << runner2 <<"\t" << setw(3) << time2;
                            }
                        }
                    }
                    if (time2 < time3)
                    {
                        if (time2 < time1)
                        {
                            cout << runner2 <<"\t" << setw(3) << time2 << endl;

                            if (time1 < time3)
                            {
                                cout << runner1 <<"\t" << setw(3) << time1 << endl;
                                cout << runner3 <<"\t " << setw(3) << time3;
                            }
                            else
                            {
                                cout << runner3 <<"\t" << setw(3) << time3<< endl;
                                cout << runner1 <<"\t" << setw(3) << time1;
                            }
                        }
                    }
                    if (time3 < time2)
                    {
                        if (time3 < time1)
                        {
                            cout << runner3 <<"\t" << setw(3) << time3 << endl;
                            if (time1 < time2)
                            {
                                cout << runner1 <<"\t" << setw(3) << time1 << endl;
                                cout << runner2 <<"\t" << setw(3) << time2;
                            }
                            else
                            {
                                cout << runner2 <<"\t" << setw(3) << time2 << endl;
                                cout << runner1 <<"\t" << setw(3) << time1;
                            }
                        }
                    }
                }
                break;
        }
        case '5': 
        {           //ISP
                    //Declare Variables
                    char package;
                    float hours,price,bill;
                    //Initialize or input i.e. set variable values
                    cout << "ISP Bill\nInput Package and Hours" << endl;
                    cin >> package;

                    if ((package == 'A') || (package == 'B') || (package == 'C'))
                    {
                     cin >> hours;
                     if(hours <= 744)
                     {
                         if(package == 'A')
                         {
                            if(hours > 10)
                            {
                                bill = 9.95 + (hours - 10) * 2;
                            }
                            else
                            {
                                bill = 9.95;
                            }
                         }
                         else if(package == 'B')
                         {
                            if(hours > 20)
                            {
                                bill = 14.95 + (hours - 20) * 1;
                            }
                            else
                            {
                                bill = 14.95;
                            }
                         }
                         else
                         {
                             bill = 19.95;
                         }
                     }
                     cout << "Bill = $ " << bill;
                    }
                    break;
        }
        case '6': 
        {           //Rock Paper Scissors
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
                    break;
        }
        case '7':
        {   //Roman Conversion
            //Declare Variables
            short year;
            unsigned char n1,n10,n100,n1000;

            cout << "Arabic to Roman numeral conversion.\nInput the integer to convert." << endl;
            cin >> year;

            if(year >= 1000 && year <= 3000)
            {
                n1 =(year)%10;
                n10 = (year/10)%10;
                n100 = (year/100)%10;
                n1000 = (year/1000)%10;

                cout << year << " is equal to ";

                cout << (n1000==3?"MMM":n1000==2?"MM":n1000==1?"M":"");
                cout << (n100==9?"CM":n100==8?"DCCC":n100==7?"DCC":n100==6?"DC":n100==5?"D":n100==4?"CD":n100==3?"CCC":n100==2?"CC":n100==1?"C":"");
                cout << (n10==9?"XC":n10==8?"LXXX":n10==7?"LXX":n10==6?"LX":n10==5?"L":n10==4?"XL":n10==3?"XXX":n10==2?"XX":n10==1?"X":"");
                cout << (n1==9?"IX":n1==8?"VIII":n1==7?"VII":n1==6?"VI":n1==5?"V":n1==4?"IV":n1==3?"III":n1==2?"II":n1==1?"I":"");
            }
            else
            {
                cout << year << " is Out of Range!";
            }
            break;
        }
        case '8':
        {   //Compatible Signs
            //Declare Variables
            string input1,input2;
            short sign1,sign2;

            cout << "Horoscope Program which examines compatible signs.\nInput 2 signs." << endl;
            cin >> input1;
            if(input1 == "Aries")
            {
                sign1 = 0;
            }
            if(input1 == "Leo")
            {
                sign1 = 0;
            }
            if(input1 == "Sagittarius")
            {
                sign1 = 0;
            }
            if(input1 == "Virgo")
            {
                sign1 = 1;
            }
            if(input1 == "Capricorn")
            {
                sign1 = 1;
            }
            if(input1 == "Taurus")
            {
                sign1 = 1;
            }
            if(input1 == "Gemini")
            {
                sign1 = 2;
            }
            if(input1 == "Libra")
            {
                sign1 = 2;
            }
            if(input1 == "Aquarius")
            {
                sign1 = 2;
            }
            if(input1 == "Cancer")
            {
                sign1 = 3;
            }
            if(input1 == "Scorpio")
            {
                sign1 = 3;
            }
            if(input1 == "Pisces")
            {
                sign1 = 3;
            }

            cin >> input2;
            if(input2 == "Aries")
            {
                sign2 = 0;
            }
            if(input2 == "Leo")
            {
                sign2 = 0;
            }
            if(input2 == "Sagittarius")
            {
                sign2 = 0;
            }
            if(input2 == "Virgo")
            {
                sign2 = 1;
            }
            if(input2 == "Capricorn")
            {
                sign2 = 1;
            }
            if(input2 == "Taurus")
            {
                sign2 = 1;
            }
            if(input2 == "Gemini")
            {
                sign2 = 2;
            }
            if(input2 == "Libra")
            {
                sign2 = 2;
            }
            if(input2 == "Aquarius")
            {
                sign2 = 2;
            }
            if(input2 == "Cancer")
            {
                sign2 = 3;
            }
            if(input2 == "Scorpio")
            {
                sign2 = 3;
            }
            if(input2 == "Pisces")
            {
                sign2 = 3;
            }

            if(sign1 == 0 && sign2 == 0)
            {
                cout << input1 << " and " << input2 << " are compatible Fire signs.";
            }
            else if(sign1 == 1 && sign2 == 1)
            {
                cout << input1 << " and " << input2 << " are compatible Earth signs.";
            }
            else if(sign1 == 2 && sign2 == 2)
            {
                cout << input1 << " and " << input2 << " are compatible Air signs.";
            }
            else if(sign1 == 3 && sign2 == 3)
            {
                cout << input1 << " and " << input2 << " are compatible Water signs.";
            }
            else
            {
                cout << input1 << " and " << input2 << " are not compatible signs.";
            }
            break;
        }
        case '9': //Truth Table
                    //Declare Variables
                    bool x,y;//Boolean statements represented in the Table
                    //Initialize Variables
                    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
                    //1st Row of the Truth Table
                    x=y=true;
                    cout<<(x?'T':'F')<<" ";
                    cout<<(y?'T':'F')<<"  ";
                    cout<<(!x?'T':'F')<<"  ";
                    cout<<(!y?'T':'F')<<"   ";
                    cout<<(x&&y?'T':'F')<<" ";
                    cout<<(x||y?'T':'F')<<" ";
                    cout<<(x^y?'T':'F')<<" ";
                    cout<<((x^y)^x?'T':'F')<<" ";
                    cout<<((x^y)^y?'T':'F')<<" ";
                    cout<<(!(x&&y)?'T':'F')<<" ";
                    cout<<(!x||!y?'T':'F')<<" ";
                    cout<<(!(x||y)?'T':'F')<<" ";
                    cout<<(!x&&!y?'T':'F')<<" ";
                    cout<<endl;
                    //2nd Row of the Truth Table
                    y=false;
                    cout<<(x?'T':'F')<<" ";
                    cout<<(y?'T':'F')<<"  ";
                    cout<<(!x?'T':'F')<<"  ";
                    cout<<(!y?'T':'F')<<"   ";
                    cout<<(x&&y?'T':'F')<<" ";
                    cout<<(x||y?'T':'F')<<" ";
                    cout<<(x^y?'T':'F')<<" ";
                    cout<<((x^y)^x?'T':'F')<<" ";
                    cout<<((x^y)^y?'T':'F')<<" ";
                    cout<<(!(x&&y)?'T':'F')<<" ";
                    cout<<(!x||!y?'T':'F')<<" ";
                    cout<<(!(x||y)?'T':'F')<<" ";
                    cout<<(!x&&!y?'T':'F')<<" ";
                    cout<<endl;
                    //3rd Row of the Truth Table
                    x=false;
                    y=true;
                    cout<<(x?'T':'F')<<" ";
                    cout<<(y?'T':'F')<<"  ";
                    cout<<(!x?'T':'F')<<"  ";
                    cout<<(!y?'T':'F')<<"   ";
                    cout<<(x&&y?'T':'F')<<" ";
                    cout<<(x||y?'T':'F')<<" ";
                    cout<<(x^y?'T':'F')<<" ";
                    cout<<((x^y)^x?'T':'F')<<" ";
                    cout<<((x^y)^y?'T':'F')<<" ";
                    cout<<(!(x&&y)?'T':'F')<<" ";
                    cout<<(!x||!y?'T':'F')<<" ";
                    cout<<(!(x||y)?'T':'F')<<" ";
                    cout<<(!x&&!y?'T':'F')<<" ";
                    cout<<endl;
                    //4th Row of the T
                    x=y=false;
                    cout<<(x?'T':'F')<<" ";
                    cout<<(y?'T':'F')<<"  ";
                    cout<<(!x?'T':'F')<<"  ";
                    cout<<(!y?'T':'F')<<"   ";
                    cout<<(x&&y?'T':'F')<<" ";
                    cout<<(x||y?'T':'F')<<" ";
                    cout<<(x^y?'T':'F')<<" ";
                    cout<<((x^y)^x?'T':'F')<<" ";
                    cout<<((x^y)^y?'T':'F')<<" ";
                    cout<<(!(x&&y)?'T':'F')<<" ";
                    cout<<(!x||!y?'T':'F')<<" ";
                    cout<<(!(x||y)?'T':'F')<<" ";
                    cout<<(!x&&!y?'T':'F')<<" ";
                    cout<<endl;
                    break;
        default:
            cout << "Not a valid option" << endl;
            
            
    }
    return 0;
}

