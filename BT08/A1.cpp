#include <iostream>

using namespace std;

///địa chỉ của x và y trùng nhau
///trùng vị trí trong stack của main

void f(int xval)
{
   int x;
   x = xval;
   cout << &x << endl;
   // in địa chỉ của x tại đây
}
void g(int yval)
{
   int y;
   y = yval;
   cout << &y;
   // in địa chỉ của y tại đây
}
int main()
{
   f(7);
   g(11);
   return 0;
}

