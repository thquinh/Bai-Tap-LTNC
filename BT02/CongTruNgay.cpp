#include <iostream>
#include <iomanip>

using namespace std;

bool check_leapYear(int y);
int NumberOfDates(int m, int y);
void add_date(int dd, int mm, int yy, int n);
void subtract_date(int dd, int mm, int yy, int n);


int main()
{
    int d, m, y;
    char kitu;
    cin >> d >> kitu >> m >> kitu >> y;
    int k[20], j = 0;
    while (true) {
        cin >> k[j];
        if (k[j] == 0) break;
        j++;
    }
    for (int i = 0; i < j; i++) {
        if(k[i] > 0) add_date(d, m, y, k[i]);
        else subtract_date(d, m, y, k[i]);
    }
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
void add_date(int dd, int mm, int yy, int n)
{
    int d = dd, y = yy, m = mm;
    int dem = n;
    while (dem != 0) {
        while(d < NumberOfDates(m, y)&& dem != 0) {
            d++;
            dem--;
        }
        if (!dem) break;
        if (m == 12) {m = 1; y++;} else m++;
        dem--; d = 1;
        if (dem > NumberOfDates(m , y)) {
            dem -= NumberOfDates(m , y);
            if (m == 12) {m = 1; y++;} else m++;
        }
        else {d += dem; dem = 0;}
    }
    cout <<setw(2) << setfill('0') << d << '-' << setw(2) << setfill('0') << m << '-' << y << endl;
}
void subtract_date(int dd, int mm, int yy, int n)
{
    int d = dd, y = yy, m = mm;
    int dem = n;
    while (dem != 0) {
        while(d > 1 && dem != 0) {
            d--;
            dem++;
        }
        if (!dem) break;
        if (m == 1) {m = 12; y--;} else m--;
        d = NumberOfDates(m, y);dem++;
        if ((-dem) > NumberOfDates(m , y)) {
            dem += NumberOfDates(m , y);
            if (m == 1) {m = 12; y--;} else m--;
            d = NumberOfDates(m , y);
        }
        else {d += dem; dem = 0;}
    }
    cout <<setw(2) << setfill('0') << d << '-' << setw(2) << setfill('0') << m << '-' << y << endl;
}


