#include <iostream>

using namespace std;

int main() {
//space 있는 암호 두번째로
    char password[11];
    cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
    while(true) {
        cout << "암호: ";
        cin.getline(password, 10);
        if(strcmp(password, "C ++") == 0) {
            cout << "passsword is correct. 프로그램을 정상 종료합니다." << endl;
            break;
        }
        else if(strcmp(password, "\0") == 0) { 
            cout << "입력중지. 프로그램을 정상 종료합니다." << endl;
            break;
        }
        else 
            cout << "암호가 틀립니다~~" << endl;
    }
// space 없는 암호  먼저하고
    //char password[11];
    //cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
    //while(true) {
    //    cout << "암호: ";
    //    cin >> password;
    //    if(strcmp(password, "C++") == 0) {
    //        cout << "프로그램을 정상 종료합니다." << endl;
    //        break;
    //    }
    //    else 
    //        cout << "암호가 틀립니다~~" << endl;
    //}
}
