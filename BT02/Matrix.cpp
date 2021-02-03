#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n; cin >> n;
    int k = 1;
    while (k <= n) {
        for (int i = k; i <= n; i++)
            cout << setw(3) << i;
        for (int i = 1; i < k; i++)
            cout << setw(3) << i;
        cout << endl;
        k++;
    }
    return 0;
}
