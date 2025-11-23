#include <bits/stdc++.h>
using namespace std;

int money[15];

int main()
{
    for (int i = 1; i <= 12; i++)
    {
        cin >> money[i];
    }
    int rest_money = 0;
    int saved_money = 0;
    for (int i = 1; i <= 12; i++)
    {
        rest_money += 300;
        rest_money -= money[i];
        if (rest_money < 0)
        {
            cout << -i << endl;
            return 0;
        }
        int money_tmp = (rest_money / 100) * 100;
        saved_money += money_tmp;
        rest_money -= money_tmp;
    }
    rest_money = rest_money + saved_money * 1.2;
    cout << rest_money << endl;
    return 0;
}
