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
    return 0;
}
