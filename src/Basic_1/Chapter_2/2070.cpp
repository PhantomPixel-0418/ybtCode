#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;
    int nnum = c * 100 + b * 10 + a;
    cout << nnum << endl;
    return 0;
}