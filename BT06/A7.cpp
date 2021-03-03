#include <iostream>

using namespace std;

void hoanvi(string s, int n, char hoanv[], int& index)
{
    if (index == (n - 1)){
        cout << hoanv << endl;
        index = 0;
    }
    for (int i = 0; i <= n; i++){
        hoanv[index++] = s[i];
        hoanvi(s, n, hoanv, index);
    }
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    char hoanv[n];
    int index = 0;
    hoanvi(s, n, hoanv, index);
    return 0;
}
