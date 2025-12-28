#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1000; i <= 9999; i++)
    {
        int g = i % 10;
        int s = (i / 10) % 10;
        int b = (i / 100) % 10;
        int q = i / 1000;
        int n = sqrt(i);
        if (g == s && b == q && n * n == i)
        {
            cout << i << "\n";
        }
    }
    return 0;
}