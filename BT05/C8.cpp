#include <iostream>
#include <math.h>

using namespace std;

//dung ceil/floor
/**int rnd(double n)
{
    if (ceil(n) - n > 0.5) return floor(n);
    return ceil(n);
}**/
//khong dung
int rnd(double n)
{
    int so_nguyen = (int) n;
    if (n - so_nguyen >= 0.5) return so_nguyen + 1;
    return so_nguyen;
}

int main()
{
    double n; cin >> n;
    cout << "Lam tron " << n << " = " << rnd(n);
    return 0;
}
