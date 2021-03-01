#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void in_bo_so(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((a[i] + a[j] + a[k]) % 25 == 0)
                cout << "\nBo 3 so:" << a[i] << ' ' << a[j] <<' '<< a[k] << endl;
            }
        }
    }
}

int main()
{
    srand(time(0));
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 50;
        cout << i << ' ' << a[i] <<  ' ';
    }
    in_bo_so(a, n);
    return 0;
}
