#include <iostream>
using namespace std;
int max(int lhs, int rhs);
// int max(int x, int y); 위의 함수와 시그니처 동일.
// double max(int lhs, int rhs); 마찬가지로 동일.
double max(double lhs, double rhs);

/*
//그냥 내맘대로 씀.
template <typename T>
T max_template(T& lhs, T& rhs)
{
    return lhs > rhs ? lhs : rhs;
}
*/

int main()
{
    cout << max(5, 7) << endl;
    cout << max(5.5, 7.7) << endl;
    return 0;
}
int max(int lhs, int rhs)
{
    return lhs > rhs ? lhs : rhs;
}
double max(double lhs, double rhs)
{
    return lhs > rhs ? lhs : rhs;
}

