/*-----------------------------------------------------------------------
This is the implementation for the class Month. The interface is in the
file month.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
-----------------------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "month.h"

using namespace std;

Month::Month(char theFirstLetter, char theSecondLetter, char theThirdLetter)
{
    setMonthChar(theFirstLetter, theSecondLetter, theThirdLetter);
}

Month::Month(int theMonth)
{
    setMonthInt(theMonth);
}

Month::Month()
{
    month = 1;
}

void Month::inputMonthChar()
{
    char f, s, t;
    cout<<"Enter the first three letters of your desired month: ";
    cin>>f>>s>>t;
    cout<<endl;

    monthInt(f,s,t);
}

void Month::inputMonthInt()
{
    cout<<"Enter a month as an integer: ";
    cin>>month;
    cout<<endl;

    if (month < 1 || month > 12)
    {
        cout<<"Invalid input: Aborting program.";
        exit(1);
    }
}

void Month::outputMonthChar() const
{
    cout<<"The month is ";
    switch(month)
    {
        case 1:
            cout<<"January.\n";
            break;
        case 2:
            cout<<"February.\n";
            break;
        case 3: 
            cout<<"March.\n";
            break;
        case 4: 
            cout<<"April.\n";
            exit(1);
        case 5:
            cout<<"May.\n";
            break;
        case 6:
            cout<<"June.\n";
            break;
        case 7:
            cout<<"July.\n";
            break;
        case 8: 
            cout<<"August.\n";
            break;
        case 9:
            cout<<"September.\n";
            break;
        case 10:
            cout<<"October.\n";
            break;
        case 11:
            cout<<"November.\n";
            break;
        case 12:
            cout<<"December.\n";
            break;
        default:
            {
                cout<<"Error: Aborting program\n";
                exit(1);
            }
    }
}

void Month::outputMonthInt() const
{
    cout<<month;
}

void Month::setMonthInt(int newMonth)
{
    if (newMonth < 1 || newMonth > 12)
    {
        cout<<"Illegal argument in mutator function: Aborting program.\n";
        exit(1);
    }
    month = newMonth;
}

void Month::setMonthChar(char newFirstLetter, char newSecondLetter, char newThirdLetter)
{
    monthInt(newFirstLetter, newSecondLetter, newThirdLetter);
}

int Month::getMonthInt() const
{
    return month;
}

void Month::monthInt(char firstLetter, char secondLetter, char thirdLetter)
{
    if (firstLetter == 'j' && secondLetter == 'a' && thirdLetter == 'n')
        month = 1;
    else if (firstLetter == 'f' && secondLetter == 'e' && thirdLetter == 'b')
        month = 2;
    else if (firstLetter == 'm' && secondLetter == 'a' && thirdLetter == 'r')
        month = 3;
    else if (firstLetter == 'a' && secondLetter == 'p' && thirdLetter == 'r')
        month = 4;
    else if (firstLetter == 'm' && secondLetter == 'a' && thirdLetter == 'y')
        month = 5;
    else if (firstLetter == 'j' && secondLetter == 'u' && thirdLetter == 'n')
        month = 6;
    else if (firstLetter == 'j' && secondLetter == 'u' && thirdLetter == 'l')
        month = 7;
    else if (firstLetter == 'a' && secondLetter == 'u' && thirdLetter == 'g')
        month = 8;
    else if (firstLetter == 's' && secondLetter == 'e' && thirdLetter == 'p')
        month  = 9;
    else if (firstLetter == 'o' && secondLetter == 'c' && thirdLetter == 't')
        month  = 10;
    else if (firstLetter == 'n' && secondLetter == 'o' && thirdLetter == 'v')
        month = 11;
    else if (firstLetter == 'd' && secondLetter == 'e' && thirdLetter == 'c')
        month = 12;
    else
    {
        cout<<"Illegal argument(s): Aborting program.\n";
        exit(1);
    }
}

Month Month::getNextMonth()
{
    return Month(month+1);
}
