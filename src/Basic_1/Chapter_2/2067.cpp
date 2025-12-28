#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double radius;
    std::cin >> radius;

    double diameter = 2 * radius;
    double circumference = 2 * M_PI * radius;
    double area = M_PI * radius * radius;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << diameter << " " << circumference << " " << area << std::endl;

    return 0;
}
