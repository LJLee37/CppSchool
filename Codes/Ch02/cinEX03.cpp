#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //너비와 높이를 각각 입력받아 면적을 출력하기. multiple input
    cout << "Width : ";
    int width;
    cin >> width;
    cout << "Height : ";
    int height;
    cin >> height;
    cout << "Area : " << width * height << endl;
    int w, h;
    cout << "Width Height : ";
    cin >> w >> h;
    cout << "Area : " << w * h << endl;
    return 0;
}
