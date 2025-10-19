#include <bits/stdc++.h>
using namespace std;
float pi = 3.14159;
int main()
{
    int h, r, a;
    float s;
    cin >> h >> r;
    s = r * r * pi * h;
    a = ceil(20000 / s);
    cout << a << endl;
    return 0;
}