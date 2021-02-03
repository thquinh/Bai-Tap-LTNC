#include <iostream>
#include <cmath>
#include <string>
#include <ctime>

using namespace std;

string number(int k);
string special(int k);
string HundNum(int a1, int a2, int a3);

int main()
{
    long n;
    srand(time(NULL));
    n = rand() % (999999999-(-999999999)+1) + (-999999999);
    cout << "Saying " << n << " in English: \n";
    if (n < 0 ) cout << "negative ";
    int a[9], i = 0;
    n = abs(n);
    while (n != 0) {
        a[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int j = 8; j >= 2; j-=3) {
        cout << HundNum(a[j], a[j - 1], a[j - 2]);
        if (j == 8 && (a[j] || a[j - 1] || a[j - 2])) cout << "million, ";
        if (j == 5 && (a[j] || a[j - 1] || a[j - 2])) cout << "thousand, ";
    }
    return 0;
}
string number(int k)
{
    switch (k)
    {
    case 0 : return "zero ";
    case 1 : return "one ";
    case 2 : return "two ";
    case 3 : return "three ";
    case 4 : return "four ";
    case 5 : return "five ";
    case 6 : return "six ";
    case 7 : return "seven ";
    case 8 : return "eight ";
    case 9 : return "nine ";
    case 10 : return "ten ";
    case 11 : return "eleven ";
    case 12 : return "twelve ";
    }
}
string special(int k)
{
    switch (k)
    {
    case 2 : return "twen";
    case 3 : return "thir";
    case 4 : return "for";
    case 5 : return "fif";
    case 6 : return "six";
    case 7 : return "seven";
    case 8 : return "eigh";
    case 9 : return "nine";
    }
}
string HundNum(int a1, int a2, int a3)
{
    int mergenum = a2 * 10 + a3;
    string eng;
    if (a1) eng = number(a1) + "hundred and ";
    if (mergenum < 13) eng = eng + number(mergenum);
    else if (mergenum <  20) eng = eng + special(a3) + "teen ";
    else {
            eng += special(a2) + "ty ";
            if (a3) eng += number(a3);
    }
    return eng;
}
