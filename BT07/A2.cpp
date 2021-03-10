#include <iostream>

using namespace std;
void f(int a[])
{
    //8
    cout << "Kich thuoc trong ham f: " << sizeof(a);
}

int main()
{
    int A[6] = {1, 10, 12, 2, 24, 38};
    f(A);
    //24
    cout << endl << "Kich thuoc o main: " << sizeof(A);
    return 0;
}
