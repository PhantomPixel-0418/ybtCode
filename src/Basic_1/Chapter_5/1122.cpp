#include <bits/stdc++.h>
using namespace std;

int a[10][10], ans[10][10];

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        pair<int, int> maxindex;
        int maxa = INT_MIN;
        for (int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > maxa)
            {
                maxa = a[i][j];
                maxindex = {i, j};
            }
        }
        ans[maxindex.first][maxindex.second] += 1;
    }
    for (int i = 1; i <= 5; i++)
    {
        pair<int, int> minindex;
        int mina = INT_MAX;
        for (int j = 1; j <= 5; j++)
        {
            if (a[j][i] < mina)
            {
                mina = a[j][i];
                minindex = {j, i};
            }
        }
        ans[minindex.first][minindex.second] += 1;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (ans[i][j] == 2)
            {
                cout << i << " " << j << " " << a[i][j];
                return 0;
            }
        }
    }
    cout << "not found";
    return 0;
}