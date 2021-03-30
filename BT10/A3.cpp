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
    Point mid_point (const Point otherPoint) const {
        Point MidPoint;
        MidPoint.x = (x + otherPoint.x) / 2;
        MidPoint.y = (y + otherPoint.y) / 2;
        return MidPoint;
    }
};

int main()
{
    Point A(2, 3);
    A.print();
    Point B(3, 4);
    Point C = A.mid_point(B);
    C.print();
    return 0;
}
