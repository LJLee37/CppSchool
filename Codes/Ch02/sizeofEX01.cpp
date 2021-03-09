#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char name1[6] = {'G', 'r', 'a', 'c', 'e', '\0'};
    char name2[5] = {'G', 'r', 'a', 'c', 'e'};
    char name3[10] = "Grace";
    cout << name1 << endl << name2 << endl << name3 << endl;
    cout << strlen(name1) << ' ' << strlen(name2) << ' ' << strlen(name3) << endl; //5 10 5
    cout << sizeof(int) << ' ' << sizeof(char) << ' ' << sizeof(double) << endl;
    cout << sizeof(name1) << endl << sizeof(name2) << endl << sizeof(name3) << endl; //6 5 10
    int i;
    double d;
    cout << sizeof(i) << ' ' << sizeof(d) << endl; //4 8
    return 0;
}
