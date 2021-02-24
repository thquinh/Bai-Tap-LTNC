#include <iostream>

using namespace std;

bool so_doi_guong(int n)
{
    int a[10], i = 0;
    while (n)
    {
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int k = 0; k <= i / 2 ; k++)
    {
        if (a[k] != a[i - k - 1]) return false;
    }
    return true;
}

int main()
{
    int T; cin >> T;
    int a[T][2], dem[T];
    for (int i = 0; i < T; i++)
    {
        cin >> a[i][0] >> a[i][1];
        for (int k = a[i][0] ; k <= a[i][1]; k++)
        {
            if (so_doi_guong(k)) dem[i]++;
        }
        cout << dem[i] << endl;
    }
    return 0;
}
