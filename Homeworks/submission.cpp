/*
Author: Wai Hlaing
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.5

Reads 3 #s and prints out increasing, if they are increasing, decreasing, or neither
*/

#include <iostream>
using namespace std;

int main() {
    int uno, dos, tres;
    cout << "Enter three numbas: ";
    cin >> uno >> dos >> tres;

    if (uno < dos && dos < tres) {
        cout << "increasing" << endl;
    } else if (uno > dos && dos > tres) {
        cout << "decreasing" << endl;
    } else {
        cout << "neither" << endl;
    }

    return 0;
}