/*
Author: Wai Hlaing
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1A

Find the smaller of the two integers.
*/

#include <iostream>
using namespace std;

int main() {
    // init variables
    int firstNum, secondNum;

    // cin the two numbers
    cout << "Enter the first number: " << endl;
    cin >> firstNum;
    cout << "Enter the second number: " << endl;
    cin >> secondNum;

    // logic to find the smaller of the two
    if (firstNum < secondNum) {
        cout << "The smaller of the two is " << firstNum << endl;
    }
    else {
        cout << "The smaller of the two is " << secondNum << endl;
    }
    
    return 0;
}
