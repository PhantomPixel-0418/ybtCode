#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b;
    c = b / a * 100;
    cout << fixed << setprecision(3) << c << "%" << endl;

    return 0;
}
