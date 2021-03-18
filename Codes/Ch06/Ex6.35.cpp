#include <iostream>
#include <cmath>
using namespace std;
struct Position
{
private:
    double X;
    double Y;
public:
    Position(double& pos_x, double& pos_y): X(pos_x), Y(pos_y){}
    const double& x = X;
    const double& y = Y;
};

double linelength(const Position& pos1, const Position& pos2);
bool compare(const double& line1, const double& line2);
int main()
{
    double temp_x, temp_y;
    cout << "Type line 1\'s x1, y1 : ";
    cin >> temp_x >> temp_y;
    Position line1Pos1(temp_x, temp_y);
    cout << "Type line 1\'s x2, y2 : ";
    cin >> temp_x >> temp_y;
    Position line1Pos2(temp_x, temp_y);
    cout << "Type line 2\'s x1, y1 : ";
    cin >> temp_x >> temp_y;
    Position line2Pos1(temp_x, temp_y);
    cout << "Type line 2\'s x2, y2 : ";
    cin >> temp_x >> temp_y;
    Position line2Pos2(temp_x, temp_y);
    double line1 = linelength(line1Pos1, line1Pos2);
    double line2 = linelength(line2Pos1, line2Pos2);
    cout << "The longer line\'s length : " << (compare(line1, line2) ? line1 : line2) << endl;
    return 0;
}

double linelength(const Position& pos1, const Position& pos2)
{
    return sqrt(pow(pos1.x - pos2.x, 2) + pow(pos1.y - pos2.y, 2));
}
bool compare(const double& line1, const double& line2)
{
    return line1 > line2;
}
