#include <iostream>

using namespace std;

bool check_leapYear(int );
int NumberOfDates(int, int);
string DayOfWeek(int);

int main()
{
    int d, m, y;
    char kitu;
    cin >> d >> kitu >> m >> kitu >> y;
    int demNgay = d - 1;
    for (int i = 1900; i < y; i++) {
        if (check_leapYear(i)) demNgay += 366;
        else demNgay += 365;
    }
    for (int i = 1; i < m; i++)
        demNgay += NumberOfDates(i, y);
    int thu = demNgay % 7 + 2;
    cout << d << "/" << m << "/" << y
    << " is " << DayOfWeek(thu);
    return 0;
}

bool check_leapYear(int y)
{
    if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)) return true;
    else return false;
}
int NumberOfDates(int m, int y)
{
    int n;
    switch(m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        {
            n = 31;
            break;
        }
    case 4: case 6: case 9: case 11:
        {
            n = 30;
            break;
        }
    case 2:
        {
            if (check_leapYear(y))
                n = 29;
            else n = 28;
            break;
        }
    }
    return n;
}
string DayOfWeek(int thu)
{
    string day;
    switch (thu)
    {
    case 2:
        {
            day = "Monday";
            break;
        }
    case 3:
        {
            day = "Tuesday";
            break;
        }
    case 4:
        {
            day = "Wednesday";
            break;
        }
    case 5:
        {
            day = "Thursday";
            break;
        }
    case 6:
        {
            day = "Friday";
            break;
        }
    case 7:
        {
            day = "Saturday";
            break;
        }
    case 8:
        {
            day = "Sunday";
            break;
        }
    }
    return day;
}
