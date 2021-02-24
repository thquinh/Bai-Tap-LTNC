#include <iostream>
#include <unistd.h>
#include <ctime>

 using namespace std;

int main()
{
    int n = 0;
    while (n > 10000 || n < 1) cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        srand(time(0));
        a[i] = rand() % n + 1;
        sleep(1);
        //cout << a[i] << endl;
    }
    bool mark = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i] = a[j])
            {
                cout << "Yes";
                mark = true;
                break;
            }
        }
        if (mark) break;
    }
    if (!mark) cout << "No";
    return 0;
}
