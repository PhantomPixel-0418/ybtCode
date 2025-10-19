#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, l;
    cin >> h >> l;

    int c, r;
    c = (4 * h - l) / 2;
    r = h - c;

    cout << r << " " << c << endl;
    return 0;
}
