#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#define F(i, a, b) for(int i = a; i < b; ++i)
using namespace std;

int n, m;
char a[405][405];

void Fill(int x, int y, char Cur, char New)
{
    if (x < 0 || x >= n || y < 0 || y >= m) return;
    if (a[x][y] != Cur) return;
    a[x][y] = New;
    Fill(x + 1, y, Cur, New);
    Fill(x - 1, y, Cur, New);
    Fill(x, y + 1, Cur, New);
    Fill(x, y - 1, Cur, New);
}

void Solve()
{
   F(i, 0, n) F(j, 0, m) if(a[i][j] == 'O') a[i][j] = '-';
   F(i, 0, n) if(a[i][0] == '-') Fill(i, 0, '-', 'O');
   F(i, 0, n) if(a[i][m - 1] == '-') Fill(i, m - 1, '-', 'O');
   F(i, 0, m) if(a[0][i] == '-') Fill(0, i, '-', 'O');
   F(i, 0, m) if(a[n - 1][i] == '-') Fill(n - 1, i, '-', 'O');
   F(i, 0, n) F(j, 0, m) if(a[i][j] == '-') a[i][j] = 'X';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        F(i, 0, n) F(j, 0, m) cin >> a[i][j];
        Solve();
        F(i, 0, n)
        {
            F(j, 0, m) cout << a[i][j] << ' ';
            cout << endl;
        }
    }
    return 0;
}