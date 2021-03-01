#include <iostream>
#include <cmath>

using namespace std;

void in_daucach(int m)
{
    for (int i = 0; i < m; i++)
        cout << " ";
}
void in_dausao(int n)
{
    for (int i = 0; i < n; i++)
        cout << "*";
}

int main()
{
    int n; cin >> n;
    int k = 0;
    while (k <= n) {
        in_daucach(n - k);
        in_dausao(2*k - 1);
        in_daucach(n - k);
        cout << endl;
        k++;
    }
    return 0;
}
