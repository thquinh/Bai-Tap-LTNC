#include <iostream>

using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    char mine[m][n + n - 1];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++ )
        {
            cin >> mine[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            {
                if (mine[i][j] == '*') cout << mine[i][j] << ' ';
                else
                {
                    int dem = 0;
                    for (int p = i - 1; p <= i + 1; p++)
                    {
                        if (p < 0) p = 0;
                        for (int q = j - 1; q <= j + 1; q++)
                        {
                            if (q < 0) q = 0;
                            if (mine[p][q] == '*') dem++;
                        }
                    }
                    cout << dem << ' ';
                }
            }
        cout << endl;
    }
    return 0;
}
