#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string f[11];
    f[0] = "a";f[1] = "b";
    cout << "Tu Fibonacci tu 1 den 10 :" << endl << f[0] << endl << f[1];
    for (int i = 2; i <= 10; i++) {
        f[i] = f[i - 1] + f[i - 2];
        cout << endl << f[i];
    }
    return 0;
}
