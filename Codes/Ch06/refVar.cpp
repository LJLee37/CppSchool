#include <iostream>
using namespace std;
void increment(double& n);
int main()
{
    int target = 20;
    double x = 1.0;
    cout << "Addr of x : " << &x << endl;
    increment(x);
    cout << "x : " << x << endl;
    int & ref = target; //20; numeric literal not allowed.
    cout << "ref : " << ref << ", target : " << target << endl;
    cout << "Addr of ref : " << &ref << ", addr of target : " << &target << endl;
    ref = 100;
    cout << "ref : " << ref << ", target : " << target << endl;
    return 0;
}
void increment(double& n)
{
    cout << "Addr of n : " << &n << endl;
    ++n;
}
