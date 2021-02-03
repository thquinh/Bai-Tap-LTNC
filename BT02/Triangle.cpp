#include <iostream>

using namespace std;

int main()
{
    int n, k = 0; cin >> n;
    while (k < n) {
        for (int i = 0; i <= k - 1; i++) cout << ' ';
        for (int i = 0; i < n - k; i++) cout << '*';
        cout << endl;
        k++;
    }
    k = 0;
    while (k <= n) {
        for (int i = 0; i < n - k; i++) cout << ' ';
        for (int i = 0; i < 2*k - 1; i++) cout << '*';
        for (int i = 0; i < n - k; i++) cout << ' ';
        cout << endl;
        k++;
    }
    k = n - 1;
    while (k >= 0) {
        for (int i = n - k -1; i >= 0; i--) cout << ' ';
        for (int i = 2*k - 2; i >= 0; i--) cout << '*';
        for (int i = n - k - 1; i >= 0; i--) cout << ' ';
        cout << endl;
        k--;
    }
    return 0;
}
