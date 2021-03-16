#include <iostream>

using namespace std;

void swap_pointers(char** x, char** y)
{
   char *tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
}
int main()
{
    char a[] = "I should print second";
    char b[] = "I should print first";
    char **s1 = new char*;
    s1[0] = a;
    char **s2 = new char*;
    s2[0] = b;
    swap_pointers(s1,s2);
    cout << "s1 is " << *s1 << endl;
    cout << "s2 is " << *s2 << endl;
    delete [] s1;
    delete [] s2;
    return 0;
}


