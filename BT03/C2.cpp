#include <iostream>
#include <string>

using namespace std;

int main()
{
    string xau;
    getline(cin , xau);
    int n = xau.length();
    bool co = false;
    for (int i = 0; i < n / 2; i++)
    {
        if (xau[i] == xau[n - i - 1]) co = true;
        else
        {
            co = false;
            break;
        }
    }
    if (co) cout << "Yes";
    else cout << "No";
    return 0;
}
