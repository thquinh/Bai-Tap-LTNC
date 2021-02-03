#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    cout << "12 midnight" << endl;
    bool co = true;
    do {
        if (co) {
            cout << n << " am" << endl;
            n++;
        }
        if (n == 12 && co) {
            cout << "12 noon" << endl;
            n = 1; co = false;
        }
        if (!co) {
            cout << n << " pm" << endl;
            n++;
        }
    }
    while (n != 12);
    return 0;
}
