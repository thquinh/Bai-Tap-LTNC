#include <iostream>

using namespace std;

struct Point
{
    double x, y;
    Point() {};
    Point (double _x, double _y) : x(_x) , y(_y){};
    void print (){
        cout << "Toa do x: " << x << endl;
        cout << "Toa do y: " << y << endl;
    }
};

int main()
{
    Point A(2, 3);
    A.print();
    cout << "Dia chi cua A: " << &A << endl;
    //dia chi cua A trung voi x
    cout << "Dia chi cua toa do x: " << &(A.x) << endl;
    //dia chi cua y cach x 1 int (4 byte)
    cout << "Dia chi cua toa do y: " << &(A.y) << endl;
    return 0;
}
