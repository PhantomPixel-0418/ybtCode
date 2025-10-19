#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x, a, y, b, z;
	cin >> x >> a >> y >> b;
	z = (a * x - b * y) / (a - b);
	printf("%.2lf", z);
	return 0;
}
