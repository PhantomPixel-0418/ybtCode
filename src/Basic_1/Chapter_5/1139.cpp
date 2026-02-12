#include <bits/stdc++.h>
using namespace std;

int n;
string a[105];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (islower(a[i][0]))
        {
            a[i][0] = toupper(a[i][0]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i][0];
        for (int j = 1; j < a[i].size(); j++)
        {
            if (isupper(a[i][j]))
            {
                a[i][j] = tolower(a[i][j]);
            }
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}