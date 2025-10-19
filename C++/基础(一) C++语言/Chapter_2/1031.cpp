#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a = num / 100;
    int b = num % 100 / 10;
    int c = num % 10;
    cout << c << b << a;
}