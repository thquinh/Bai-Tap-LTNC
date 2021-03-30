#include <iostream>

using namespace std;

struct Point
{
    double x, y;
    double arr[1] = {2.3};
    Point() {};
    Point (double _x, double _y) : x(_x) , y(_y){};
    void print (){
        cout << "Toa do x: " << x << endl;
        cout << "Toa do y: " << y << endl;
    }
};

struct Test
{
    Point Thu;
    Test(int x, int y) : Thu(x, y){};
};

int main()
{
    Point A(2, 3);
    A.print();
    Point CopyN = A;
    cout << "Dia chi arr tai A: " << &A.arr << ' ' << A.arr[0] << endl;
    cout << "Dia chi arr tai CopyN: " << &CopyN.arr << ' ' << CopyN.arr[0] << endl;
    Test Source(3, 4);
    Test ThuGan = Source;
    cout << "Dia chi Point o source: " << &Source.Thu << endl;
    cout << "Dia chi Point o dich: " << &ThuGan.Thu << endl;
    return 0;
}

