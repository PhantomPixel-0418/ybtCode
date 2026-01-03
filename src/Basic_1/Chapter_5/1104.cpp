#include <bits/stdc++.h>
using namespace std;

int book[15];
double price[] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};

int main()
{
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> book[i];
        sum += book[i] * price[i];
    }
    cout << sum;
    return 0;
}