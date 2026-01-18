#include <bits/stdc++.h>
using namespace std;

int n, a[25][25];

int main()
{
    cin >> n;
    // 从右上角开始，方向顺序：向下、向左、向上、向右
    int x = 0, y = n - 1;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    int dir = 0;
    for (int i = 1; i <= n * n; i++)
    {
        a[x][y] = i;
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n || a[nx][ny] != 0)
        {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }
        x = nx;
        y = ny;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
            if (j < n - 1)
                cout << " ";
        }
        if (i < n - 1)
            cout << '\n';
    }
    return 0;
}