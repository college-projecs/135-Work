/*
Author: Wai Hlaing
Course: CSCI-135
Instructor: Tong Yi
Assignment: E1.7

Returns 3 prompted names in seperate lines
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1, name2, name3;
    cout << "Enter three names: ";
    cin >> name1 >> name2 >> name3;
    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << endl;
    return 0;
}