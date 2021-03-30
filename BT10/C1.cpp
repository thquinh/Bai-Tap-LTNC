#include <iostream>
#include <cstring>

using namespace std;

struct String
{
    int n;
    char* str = new char[n];
    String(const char* xau) {
        n = strlen(xau);
        for (int i = 0; i < n; i++) {
            str[i] = xau[i];
        }
    };
    ~String() {
        delete [] str;
    }
    void print() const {
        cout << str << endl;
    }
    void append(const char* xauNoi) {
        const int len = strlen(xauNoi);
        char* temp = new char[n + len];
        for (int i = 0; i < n; i++) {
            temp[i] = str[i];
        }
        for (int i = 0; i < len; i++) {
            temp[i + n] = xauNoi[i];
        }
        temp[n + len] = '\0';
        str = temp;
        cout << str << endl;
    }
};

int main()
{
    String s("Hello");
    s.print();
    String greeting("Hi ");
	greeting.append("there");
    return 0;
}
