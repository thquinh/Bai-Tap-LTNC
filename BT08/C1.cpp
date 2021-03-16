#include <iostream>

using namespace std;

char a[] = "Bai tap tuan 8 bai C1";

int strlen(char a[])
{
    int n = 0;
    for (char* cp = a; (*cp) != '\0'; cp++) n++;
    return n;
}

string reverse(char a[])
{
    string p;
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        p += *(a + len - 1 - i);
    }
    return p;
}
void delete_char(char a[], char c)
{
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (*(a + i) == c) {
            for (int j = i; j < len; j++)
            {
                *(a + j) = *(a + j + 1);
            }
            i--;
            *(a + len-- - 1) = '\0';
        }
    }
}
void pad_right(char a[], int n)
{
    int len = strlen(a);
    if (len < n) {
        while (len != n) {
            a[len] = ' ';
            len++;
        }
    }
    a[len] = '\0';
}
void pad_left(char a[], int n)
{
    int len = strlen(a);
    if(len < n) {
        *(a + len) = ' ';
        int subtr = n - len;
        for(int i = n - 1; i >= subtr; i--) {
            *(a + i) = *(a + i - subtr);
        }
        for(int i = 0; i < subtr; i++) {
            *(a + i) = ' ';
        }
    }
}
void truncate(char a[], int n)
{
    int len = strlen(a);
    if (len > n) {
        *(a + n) = '\0';
    }
}
bool is_palindrome(char a[])
{
    int len = strlen(a);
    for(int i = 0; i < len / 2 - 1; i++) {
        if (*(a + i) != *(a + len - i -1)) return false;
    }
    return true;
}
void trim_left(char a[])
{
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (a[i] == ' ') {
            for (int j = i; j < len; j++)
            {
                *(a + j) = *(a + j + 1);
            }
            i--;
            *(a + len-- - 1) = '\0';
        }
        else break;
    }
}
void trim_right(char a[])
{
    int len = strlen(a);
    for(int i = len - 1; i >= 0; i--) {
        if (*(a + i) == ' ') *(a + i) = '\0';
        else break;
    }
}

int main()
{
    cout << reverse(a) << endl;
    char c; cin >> c;
    delete_char(a, c);
    cout << a << endl;
    int n1; cin >> n1;
    cout << strlen(a) << endl;
    pad_right(a, n1);
    cout << strlen(a) << endl;
    int n2; cin >> n2;
    pad_left(a, n2);
    cout << a << endl;
    int n3; cin >> n3;
    truncate(a, n3);
    cout << a << endl;
    cout << is_palindrome(a) << endl;
    trim_left(a);
    cout << a << endl;
    cout << strlen(a) << endl;
    trim_right(a);
    cout << strlen(a) << endl;
    return 0;
}
