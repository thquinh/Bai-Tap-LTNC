#include <iostream>

using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}

int main()
{
    //warning: address of local variable 'c' returned [-Wreturn-local-addr]
    cout << weird_string();
    return 0;
}
