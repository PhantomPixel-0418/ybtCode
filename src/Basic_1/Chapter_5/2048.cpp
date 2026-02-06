#include <bits/stdc++.h>
using namespace std;

int n;
string c[25];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    sort(c + 1, c + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        cout << c[i] << endl;
    }
    return 0;
}