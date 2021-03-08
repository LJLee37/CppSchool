/* 
    소스: SimpleC++.cpp
    cout과 << 연산자를 이용하여 화면에 출력한다.
*/

#include <iostream> // cout과 << 연산자 포함
using namespace std;

double area(int r); // 함수의 원형 선언

// C++ 프로그램은 main() 함수에서부터 실행을 시작한다.
int main() {
    cout << "Hello World!" << endl; // 화면에 Hello를 출력하고 다음 줄로 넘어감
    
    int n = 3;
    char c = '#';

    cout << c << " " << 5.5 << '-' << n << "hello"  << endl;
    cout << "n + 5 = " << n + 5 << endl;
    cout << "Area is  " << area(n); // 함수 area()의 리턴 값 출력
    return 0; // main() 함수가 종료하면 프로그램이 종료됨
}
double area(int r) { // 함수 구현
    double ret;
    ret = 3.14 * r * r;
    return ret; // 반지름 r의 원면적 리턴
}

