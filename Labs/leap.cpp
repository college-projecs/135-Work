/*
Author: Wai Hlaing
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1C

*/

// Leap year calculator implementing:

//if (year is not divisible by 4) then (it is a common year)
//else if (year is not divisible by 100) then (it is a leap year)
//else if (year is not divisible by 400) then (it is a common year)
//else (it is a leap year)

#include <iostream>
using namespace std;

// Leap year calculator.
int main()
{
    cout << "Enter year: " << endl;
    int year;
    cin >> year;
    // Leap year calculator, if year is not divisible by 4, it's a common year~
    if ( year % 4 != 0)
    {
        cout << "Common year" << endl;
    }
    else if ( year % 100 != 0)
    {
        cout << "Leap year" << endl;
    }
    else if ( year % 400 != 0)
    {
        cout << "Common year" << endl;
    } else cout << "Leap year" << endl;

    // return 0
    return 0;
}