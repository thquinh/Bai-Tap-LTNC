#include <iostream>

using namespace std;

int search(int key, int *a, int low, int high)
{
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (a[mid] == key) return mid;
    if (a[mid] > key) return search(key, a, low, mid-1);
    return search(key, a, mid+1, high);
}

int main()
{
    int arr[9] = {2, 7, 11, 12, 14, 21, 25, 34, 39};
    int* a = arr;
    const int low = 0, high = 8;
    const int mid = (low + high)/2;
    int key; cin >> key;
    switch (search(key, a, low, high))
    {
    case low :
        {
            cout << "Key nam dau mang";
            break;
        }
    case high :
        {
            cout << "Key nam cuoi mang";
            break;
        }
    case mid:
        {
            cout << "Key nam chinh giua mang";
            break;
        }
    default: cout << "Key nam ngau nhien";
    }

    return 0;
}
