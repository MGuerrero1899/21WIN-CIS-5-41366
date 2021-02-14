//Create your own, properly commented and formatted.
//Use a template and properly format with comments, etc....
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//Function Prototypes
void getScre(int &,int &,int &,int &,int &);
void calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);
//Main Function
int main(int argc, char** argv) {
    //Declare Variables
    int scre1,scre2,scre3,scre4,scre5; //Five scores that will be input
    //Initialize Variables / Basic Output
    cout << "Find the Average of Test Scores\nby removing the lowest value." << endl;
    getScre(scre1,scre2,scre3,scre4,scre5);
    calcAvg(scre1,scre2,scre3,scre4,scre5);
    return 0;
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