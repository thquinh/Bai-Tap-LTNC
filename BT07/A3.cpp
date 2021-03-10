#include <iostream>
#include <ctime>

using namespace std;

int count_even(int* arr, int n)
{
    cout << endl;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
        if (arr[i] % 2 == 0 ) dem++;
    }
    return dem;
}

int main()
{
    srand(time(NULL));
    int n; cin >> n;
    int arr[n], beg[5], enda[5];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < 5; i++)
    {
        beg[i] = arr[i];
        enda[4 - i] = arr[n - 1 - i];
    }
    int *pb = beg, *pe = enda;
    cout << "Dem so so chan: ";
    cout << count_even(pb, 5) << ' ';
    cout << count_even(pe, 5);
    return 0;
}
