#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;cin >> x >> y;
    int a[x][y], num = 1;
    int y1 = y, x1 = x;
    int y2 = 0, x2 = 0, i, j, k;
    while (num <= x * y)
    {
        for (i = y2; i < y1; i++)
        {
            a[y2][i] = num;
            num++;
        }
        if (num > x * y) break;
        for (j = x2 + 1;j < x1; j++)
        {
            a[j][i - 1] = num;
            num++;
        }
        for (k = i - 2 ; k >= y2; k--)
        {
            a[j - 1][k] = num;
            num++;
        }
        for (int l = j - 2; l > x2; l--)
        {
            a[l][k + 1] = num;
            num++;
        }
        x1--; y1--;
        x2++; y2++;
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << setw(3) << setfill(' ')<< a[i][j];
        }
        cout << endl;
    }
    return 0;
}
