#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005];
int maxa = 0, maxindex;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > maxa)
        {
            maxa = a[i];
            maxindex = i;
        }
    }
    cout << maxindex << endl;
    return 0;
}