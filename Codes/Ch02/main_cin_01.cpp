#include <iostream> 
using namespace std;

int main() {
    

    int width;
    int height;
    int area;
    //Single input first 
    cout << "Width: ";
    cin >> width; // 키보드로부터 너비를 읽어 width 변수에 저장
    cout << "Height: ";
    cin >> height; // 키보드로부터 높이를 읽어 height 변수에 저장
    area = width * height;
    cout << "Area is " << area << endl;

    // multiple input next
    cout << "Width Height: "; 
    cin >> width >> height; // 키보드로부터 너비를 읽어 width 변수에 저장
    area = width*height; // 사각형의 면적 계산
    cout << "Area is " << area << endl; // 면적을 출력하고 다음 줄로 넘어감
}
