/*
 * File Name: Ex2.5page85.cpp
 * File Author: LJLee37 (이지형, 202035211)
 * File Creation Date: 10th Mar. 2021
 * File Modification Date: 10th Mar. 2021
 * File Explanation : Ex2.5 in page 85 homework.
 * */
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the subtotal and a gratuity rate: ";
    int subtotal, gratuity;
    cin >> subtotal >> gratuity;
    cout << "The gratuity is $" << subtotal * (static_cast<float>(gratuity) / 100) << " and total is $" << subtotal * (1 + (static_cast<float>(gratuity) / 100)) << endl;
    return 0;
}
