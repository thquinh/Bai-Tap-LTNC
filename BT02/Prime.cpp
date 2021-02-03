#include <iostream>
#include <cmath>

using namespace std;

bool check_prime(int);

int main()
{
    int n;
    cin >> n;
    if (check_prime(n)) cout << "yes";
    else cout << "no";
    return 0;
}
bool check_prime(int n )
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

