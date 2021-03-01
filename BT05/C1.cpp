#include <iostream>
#include <ctime>

using namespace std;

#define row_max 100
#define col_max 100

//ô chưa mở kí hiệu -
//ô có mìn kí hiệu *

void fill_map(char mine_map[][col_max], int m, int n, int K);
void print_map(char mine_map[][col_max], bool bool_map[][col_max], int m, int n);

int main()
{
    char mine_map[row_max][col_max];
    bool quit = false;
    bool bool_map[row_max][col_max] = {0};
    int m, n, K;
    cout << "Nhap m, n, K: "; cin >> m >> n >> K;
    for (int i = 0; i < K; i++)
    {
        srand(time(0));
        int rm = rand() % m, rn = rand() % n;
        if (mine_map[rm][rn] == '*') {
            i--;
            continue;
        }
        mine_map[rm][rn] = '*';
    }
    fill_map(mine_map, m, n, K);
    int x, y, count_turn = 0;
    while(!quit) {
        cout << "Nguoi choi nhap toa do x, y: "; cin >> x >> y;
        if (bool_map[x - 1][y - 1]) cout << "Toa do nhap roi!" << endl;
        else if (mine_map[x - 1][y - 1] == '*') {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << mine_map[i][j] << ' ';
                }
                cout << endl;
            }
            quit = true;
            cout << "YOU'RE DEAD!";
        }
        else
        {
            count_turn++;
            bool_map[x - 1][y - 1] = true;
            print_map(mine_map, bool_map, m, n);
            if (count_turn == m*n - K) {
                cout << "YOU WIN!";
                quit = true;
            }
        }
    }
    return 0;
}
void fill_map(char mine_map[][col_max], int m, int n, int K)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mine_map[i][j] != '*') {
                int dem = 0;
                for (int p = i - 1; p <= i + 1; p++)
                {
                    if (p < 0) p = 0;
                    for (int q = j - 1; q <= j + 1; q++)
                    {
                        if (q < 0) q = 0;
                        if (mine_map[p][q] == '*') dem++;
                    }
                }
                mine_map[i][j] = (char)(dem + 48);
            }
        }

    }
}
void print_map(char mine_map[][col_max], bool bool_map[][col_max], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (bool_map[i][j]) cout << mine_map[i][j] << ' ';
            else cout << "- ";
        }
        cout << endl;
    }
}

