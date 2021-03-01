#include <iostream>

using namespace std;

int kiemTra(int k, int n)
{
    if ((0 <= k) && (k <= n) && (1 <= n) && (n <= 20))
        return 1;
    return 0;
}
void nhapKN(int k[], int n[], int *soPhanTu)
{
    int i = 0;
    cin >> k[0] >> n[0];
    while(n[i] != -1 && k[i] != -1) {
        i++;
        do {cin >> k[i] >> n[i];}
        while(kiemTra(k[i], n[i]) == 1);
    }
    *soPhanTu = i;
}
int toHop(int k, int n)
{
    int tu = 1, mau = 1;
    for(int i = 2; i <= n; i++)
    {
        if (i <= k) mau *= i;
        tu *= i;
    }
    for (int i = 2; i <= n - k; i++)
    {
        mau *= i;
    }
    return tu/mau;
}
int main()
{
    int n[10], k[10], *soPhanTu;
    nhapKN(k, n, soPhanTu);
    for(int i = 0; i <= *soPhanTu; i++)
    {
        cout << toHop(k[i], n[i]) << endl;
    }
    return 0;
}
