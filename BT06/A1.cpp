#include <iostream>

using namespace std;

void f(int a[])
{
    cout << "Dia chi cua bien mang & phan tu dau tien tai f: ";
    cout << &a << ' ' << &a[0] << endl;
    cout << &a[1];
}

int main()
{
    int a[2] = {1, 3};
    cout << "Dia chi cua bien mang & phan tu dau tien tai main: ";
    cout << &a << ' ' << &a[0] << endl;
    f(a);
    return 0;
}
/**Nhan xet:
    Dia chi truyen vao ham la dia chi phan tu dau tien cua mang
**/
