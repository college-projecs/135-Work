/*
Author: Wai Hlaing
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1B

Find the smaller of the 3 integers.
*/

#include <iostream>
using namespace std;

int main()
{
    // initialize variables
    int firstNum, secondNum, thirdNum;

    // cin the three numbers
    cout << "Enter the first number: " << endl;
    cin >> firstNum;
    cout << "Enter the second number: " << endl;
    cin >> secondNum;
    cout << "Enter the third number: " << endl;
    cin >> thirdNum;

    // loogic to find the smaller of the three
    if (firstNum < secondNum && firstNum < thirdNum)
    {
        cout << "The smaller of the three is " << firstNum << endl;
    }
    else if (secondNum < firstNum && secondNum < thirdNum)
    {
        cout << "The smaller of the three is " << secondNum << endl;
    }
    else cout << "The smaller of the three is " << thirdNum << endl;
    
    // return 0
    return 0;
}