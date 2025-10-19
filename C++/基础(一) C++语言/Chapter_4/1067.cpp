#include <bits/stdc++.h>
using namespace std;

int k, a[105];

int main()
{
    cin >> k;
    int t1 = 0, t5 = 0, t10 = 0;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            t1++;
        else if (a[i] == 5)
            t5++;
        else if (a[i] == 10)
            t10++;
    }
    cout << t1 << "\n"
         << t5 << "\n"
         << t10 << "\n";
    return 0;
}