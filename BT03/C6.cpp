#include <iostream>

using namespace std;

int main()
{
    int n;
    while(n % 2 == 0) cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }
    int i = 0, j = n / 2, num = 2;
    matrix[i][j] = 1;
    while ((i != (n - 1)) && (j != n / 2))
    {
        if (i == 0 || j == n - 1)
        {
            i = n - 1; j++;
            a[i][j] = num; num++;
            continue;
        }
        else
        {

        }
    }
    return 0;
}
