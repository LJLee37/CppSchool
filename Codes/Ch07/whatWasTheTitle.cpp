#include <iostream>
using namespace std;
int main()
{
    int A[3] = {1, 2, 3};
    int B[3] = {10, 20, 30};
    //A = B; //Array type int [3] is not assignable.
    cout << "A : " << A << endl;
    cout << "Addr of A[0] : " << &A[0] << endl;
    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sizeof(A) : " << sizeof(A) << endl;
    return 0;
}
