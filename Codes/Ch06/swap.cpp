#include <iostream>
using namespace std;
int maxVal(const int & lhs, const int & rhs);
void swapByValue(int lhs, int rhs);
void swapByReference(int& lhs, int& rhs);
int main()
{
    /*
    int x = 5, y = -50;
    int r = maxVal(x, y);
    cout << "maxVal : " << r << endl;
    */

    //사용자에게 두 개의 변수를 입력받는다.
    //입력된 변수를 출력한다.
    //swapByValue를 콜한다.
    //두 개의 변수를 출력한다.
    //swapByReference를 콜한다.
    //두 개의 변수를 출력한다.
    int lhs, rhs;
    cout << "Input two integers : ";
    cin >> lhs >> rhs;
    cout << "lhs : " << lhs << ", rhs : " << rhs << '.' << endl;
    swapByValue(lhs, rhs);
    cout << "lhs : " << lhs << ", rhs : " << rhs << '.' << endl;
    swapByReference(lhs, rhs);
    cout << "lhs : " << lhs << ", rhs : " << rhs << '.' << endl;
    return 0;
}
int maxVal(const int & lhs, const int & rhs)
{
    // a = 5000; error, can't assign value to a const.
    int result = lhs > rhs ? lhs : rhs;
    return result;
}
void swapByValue(int lhs, int rhs)
{
    cout << "In swapByValue, lhs : " << lhs << ", rhs : " << rhs << '.' << endl;
    lhs += rhs;
    rhs = lhs - rhs;
    lhs -= rhs;
    cout << "In swapByValue, lhs : " << lhs << ", rhs : " << rhs << '.' << endl;
}
void swapByReference(int& lhs, int& rhs)
{
    cout << "In swapByReference, lhs : " << lhs << ", rhs : " << rhs << '.' << endl;
    lhs += rhs;
    rhs = lhs - rhs;
    lhs -= rhs;
    cout << "In swapByReference, lhs : " << lhs << ", rhs : " << rhs << '.' << endl;
}
