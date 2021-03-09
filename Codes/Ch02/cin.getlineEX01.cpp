#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //space가 있는 이름 입력받기
    cout << "Enter your name : ";
    char name[100];
    cin.getline(name, 100, '\n');
    cout << "Your name is " << name << endl;
    return 0;
}
