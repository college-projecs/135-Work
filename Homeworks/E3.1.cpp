/*
Author: Wai Hlaing
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.1

Returns if int is negative or not
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0)
    {
        cout << "zero" << endl;
    }
    else if (num < 0)
    {
        cout << "negative" << endl;
    }
    else
    {
        cout << "positive" << endl;
    }
    return 0;
}