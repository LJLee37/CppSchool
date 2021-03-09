#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // C ++이 암호인 프로그램 작성. 올바른 암호 입력 혹은 빈 문자를 입력하면 종료, 아니면 무한루프.
    const char ANSWER[] = "C ++";
    cout << "Input until correct answer or empty string." << endl;
    while (true)
    {
        char passwd[100];
        cout << "Input password : ";
        cin.getline(passwd, 100, '\n');
        if (passwd[0] == 0)
        {
            cout << "Empty string." << endl;
            break;
        }
        else if (strcmp(passwd, ANSWER) == 0)
        {
            cout << "Correct password." << endl;
            break;
        }
        else
            cout << "wrong password." << endl;
    }
    return 0;
}
