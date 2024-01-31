/*
Author: Wai Hlaing
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1D

Numer of days in a given month.
*/

#include <iostream>
using namespace std;

// 0 = common year, 1 = leap year, adapted from labOneC.cpp
int calcLeapYear(int year)
{
    if (year % 4 != 0)
    {
        return 0;
    }
    else if (year % 100 != 0)
    {
        return 1;
    }
    else if (year % 400 != 0)
    {
        return 0;
    }
    else return 1;
}

// main function
int main()
{
    int year, month;
    cout << "Enter year: " << endl;
    cin >> year;
    cout << "Enter month: " << endl;
    cin >> month;

    if (month > 12 || month < 1)
    {
        cout << "Invalid month" << endl;
        return 0;
    }

    // if month is 2, check if leap year
    if (month == 2)
    {
        if (calcLeapYear(year) == 1)
        {
            cout << "29 days" << endl;
        }
        else
            cout << "28 days" << endl;
    } // if month is 4, 6, 9, 11, print 30 days
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "30 days" << endl;
    } // else print 31 days
    else
        cout << "31 days" << endl;
    return 0;
}