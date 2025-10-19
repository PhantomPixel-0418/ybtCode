#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n, m;
    cin >> n >> m;

    double discountPrice = m * 0.8;
    double remainingMoney = n - discountPrice;

    cout << fixed << setprecision(2) << remainingMoney << endl;

    return 0;
}
