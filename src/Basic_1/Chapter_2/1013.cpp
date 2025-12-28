#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double f, c;
	cin >> f;
	c = 5 * (f - 32) / 9;
	printf("%.5lf", c);
	return 0;
}
