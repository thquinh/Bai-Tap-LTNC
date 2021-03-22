#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* s1, const char* s2)
{
    char* ptr = new char[20];
    strcpy(ptr, s1);
    strcat(ptr, s2);
    return ptr;
}

int main()
{
    char* s1 = "Hello ";
    char* s2 = "world!";
    cout << concat(s1, s2);
    return 0;
}
