#include <iostream>

using namespace std;



int main( )
{
/**kich thuoc cua kieu char la 1
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
kich thuoc cua kieu int la 4
   int a[4] = {3, 4, 2, 1};
   for (int *cp = a; (*cp) != 1; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
kich thuoc cua kieu double la 8
**/
//con tro tro toi phan tu tiep theo cua phan tu tiep theo
   double a[5] = {3.1, 4.43, 2.45, 1.04, 5.79};
   for (double *cp = a; (*cp) != 5.79; cp+= 2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}
