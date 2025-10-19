#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    if (n < 0)
        cout << "negative";
    else if (n > 0)
        cout << "positive";
    else
        cout << "zero";
    return 0;
}