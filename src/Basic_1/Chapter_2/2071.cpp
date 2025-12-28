#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    double average = (87.0 * x + 85.0 * y) / (x + y);
    cout << fixed << setprecision(4) << average << endl;

    return 0;
}
