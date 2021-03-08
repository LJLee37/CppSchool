#include <iostream>
using namespace std;
int main()
{
    //입력한 값이 음수가 나오면 while 루프를 탈출하기.
    //while(true), break, cin을 사용할 것.
    while (true)
    {
        int a;
        cin >> a;
        if (a < 0)
        {
            cout << "You entered a negative number." << endl;
            break;
        }
        else
            cout << "You entered a non-negative number" << endl;
    }
    return 0;
}
