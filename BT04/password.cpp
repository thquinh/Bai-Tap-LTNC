#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n; cin >> n;
    string pw[n];
    for (int i = 0; i < n; i++)
    {
        cin >> pw[i];
    }
    for (int i = 0; i < n; i++)
    {
        int len = (pw[i]).length();
        bool co = false;
        for (int j = n - 1; j > i; j--)
        {
            if (len == pw[j].length()) {
                for (int k = 0; k < len; k++)
                {
                    if (pw[i][k] != pw[j][len - k - 1])
                    {
                        co = false;
                        break;
                    }
                    else co = true;
                }
            }
			if (co) break;
        }
        if (co) {
            cout << len << ' ' << pw[i][len/2];
            break;
        }
    }
    return 0;
}
