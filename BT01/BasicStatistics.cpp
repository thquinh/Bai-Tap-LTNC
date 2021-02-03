#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    cin >> a[0];
    double tb = a[0];
    int lon = a[0], nho = a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        tb += a[i];
        if (a[i] > lon) lon = a[i];
        if (a[i] < nho) nho = a[i];
    }
    tb /= n;
    cout << "Mean: " << tb << endl <<
            "Max: "<< lon << endl<<
            "Min: " << nho;
    return 0;
}
