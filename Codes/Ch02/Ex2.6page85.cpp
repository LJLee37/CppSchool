/*
 * File name: Ex2.6page85.cpp
 * File Author: LJLee37(이지형, 202035211)
 * File Creation Date: 12th Mar.
 * File Modification Date: 12th Mar.
 * File Description: Excercise 2.6 in page 85. Homework.
 * */
#include <iostream>
using namespace std;
int main()
{
    unsigned short input;
    while (true)
    {
        cout << "Enter a number between 0 and 1000 : ";
        cin >> input;
        if (input <= 1000)
            break;
        cout << "Wrong range!" << endl;
    }
    int sum = 0;
    for (;input > 0; input /= 10)
        sum += input % 10;
    cout << "The sum of the digits is " << sum << endl;
    return 0;
}
