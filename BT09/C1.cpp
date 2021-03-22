#include <iostream>

using namespace std;

string chuoi = "Bai tap tuan 8 bai C1";
const char* a = chuoi.c_str();

int strlen(const char* a)
{
    int n = 0;
    for (const char* cp = a; *cp != '\0'; cp++) n++;
    return n;
}

char* reverse(const char* a)
{
    int len = strlen(a);
    char* p = new char[len];
    for (int i = 0; i < len; i++) {
        p[i] = a[len - 1 - i];
    }
    return p;
}
char* delete_char(const char* a, char c)
{
    int len = strlen(a);
    char* ptr = new char[len];
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] != c) {
            ptr[index] = a[i];
            index++;
        }
    }
    ptr[index] = '\0';
    return ptr;
}
char* pad_right(const char* a, int n)
{
    int len = strlen(a);
    char* ptr = new char[n];
    for (int i = 0; i < len; i++) {
        ptr[i] = a[i];
    }
    if (len < n) {
        while (len != n) {
            ptr[len] = ' ';
            len++;
        }
    }
    ptr[len] = '\0';
    return ptr;
}
char* pad_left(const char* a, int n)
{
    int len = strlen(a);
    char* ptr = new char[n];
    if(len < n) {
        int subtr = n - len;
        for(int i = 0; i < subtr; i++) {
            ptr[i] = ' ';
        }
        for(int i = subtr; i < n; i++) {
            ptr[i] = a[i - subtr];
        }
    }
    return ptr;
}
char* truncate(const char* a, int n)
{
    int len = strlen(a);
    char* ptr = new char[len];
    for (int i = 0; i < len; i++) {
        ptr[i] = a[i];
    }
    if (len > n) {
        ptr[n] = '\0';
    }
    return ptr;
}
/*bool is_palindrome(char a[])
{
    int len = strlen(a);
    for(int i = 0; i < len / 2 - 1; i++) {
        if (*(a + i) != *(a + len - i -1)) return false;
    }
    return true;
}*/
char* trim_left(const char* a)
{
    int len = strlen(a);
    char* ptr = new char[len];
    bool mark = false;
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] != 0 || mark) {
            ptr[index++] = a[i];
            mark = true;
        }
    }
    ptr[index] = '\0';
    return ptr;
}
char* trim_right(const char* a)
{
    int len = strlen(a);
    char* ptr = new char[len];
    for (int i = 0; i < len; i++) {
        ptr[i] = a[i];
    }
    for(int i = len - 1; i >= 0; i--) {
        if (ptr[i] == ' ') ptr[i] = '\0';
        else break;
    }
    return ptr;
}

int main()
{
    cout << reverse(a) << endl;
    char c; cin >> c;
    cout << delete_char(a, c);
    int n3; cin >> n3;
    cout << truncate(a, n3) << endl;
    //cout << is_palindrome(a) << endl;
    int n2; cin >> n2;
    cout << pad_left(a, n2)<< endl;
    cout << trim_left(a) << endl;
    int n1; cin >> n1;
    cout << strlen(a) << endl;
    cout << strlen(pad_right(a, n1)) << endl;
    cout << strlen(a) << endl;
    cout << strlen(trim_right(a)) << endl;
    return 0;
}
