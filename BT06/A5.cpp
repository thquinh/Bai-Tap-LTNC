#include <iostream>

using namespace std;

long F(int n) {
   if (n == 0) return 0;
   if (n == 1) return 1;
   return F(n-1) + F(n-2);
}

int fibo(int n)
{
    int fibo[50];
    fibo[0] = 0; fibo[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo[n];
}
int main()
{
    int n = 42;
    //0.023s
    //cout << fibo(n);
    //1.473s
    cout << F(n);
    return 0;
}
