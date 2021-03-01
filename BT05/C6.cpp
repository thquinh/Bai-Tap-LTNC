#include <iostream>
#include <cmath>

using namespace std;

int ucln(int a, int b)
{
    int x = a, y = b;
    while (x != y) {
        if (x > y) x -= y; else y -= x;
    }
    return x;
}

int main()
{
    int a, b; cin >> a >> b;
    if(ucln(a, b) == 1) cout << " a va b nguyen to cung nhau";
    else cout << "a va b khong nguyen to cung nhau";
    return 0;
}
