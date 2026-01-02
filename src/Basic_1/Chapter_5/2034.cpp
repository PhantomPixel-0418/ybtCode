#include <bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
    int i;
    for (i = 1; cin >> a[i]; i++)
        ;
    for (int j = i - 1; j >= 1; j--)
    {
        cout << a[j] << " ";
    }
    return 0;
}