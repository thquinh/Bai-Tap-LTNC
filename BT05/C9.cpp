#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int rand_nho(int n)
{
    srand(time(0));
    return rand() % n;
}

int main()
{
    int n; cin >> n;
    cout << rand_nho(n);
    return 0;
}
