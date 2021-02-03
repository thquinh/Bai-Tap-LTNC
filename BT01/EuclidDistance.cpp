#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Khoang cach giua 2 diem: "
        << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return 0;
}
