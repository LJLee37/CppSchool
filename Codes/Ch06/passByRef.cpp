#include <iostream>
using namespace std;
//void GCDLCM(int lhs, int rhs, int& GCD, int& LCM);
void sumMul(int lhs, int rhs, int& sum, int& mul);
int main()
{
    cout << "첫 번째 수 : ";
    int lhs;
    cin >> lhs;
    cout << "두 번재 수 : ";
    int rhs;
    cin >> rhs;
    int sum, mul;
    sumMul(lhs, rhs, sum, mul);
    cout << "합은 " << sum << ", 곱은 " << mul << endl;
    return 0;
}
void sumMul(int lhs, int rhs, int& sum, int& mul)
{
    sum = lhs + rhs;
    mul = lhs * rhs;
}
