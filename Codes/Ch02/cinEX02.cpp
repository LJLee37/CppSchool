#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //"C++"이 암호인 프로그램 작성.
    //올바른 암호를 입력하면 종료하고 아니면 무한반복.
    const char ANSWER[] = "C++";
    char pwd[100];
    cout << "올바른 암호가 입력될 때까지 암호를 지속적으로 입력하기." << endl;
    while (true)
    {
        cout << "암호 입력 : ";
        cin >> pwd;
        if (strcmp(pwd, ANSWER) == 0)
        {
            cout << "올바른 암호." << endl;
            break;
        }
        else
            cout << "잘못된 암호." << endl;
    }
    return 0;
}
