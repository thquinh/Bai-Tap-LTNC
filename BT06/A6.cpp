#include <iostream>

using namespace std;

int F(int a[], int& i)
{
    int x[10];
    cout << i++ << endl;
    return F(x, i) + 1;
}
int main()
{
    int a[10], i =0;
    cout << F(a, i);
}
