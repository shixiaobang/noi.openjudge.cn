#include <iostream>
#include <iomanip>

#define PI 3.14159

int main(int argc, char const *argv[])
{
    double radius;
    std::cin >> radius;

    double diameter;
    double circumference;
    double area;

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    std::cout << std::fixed << std::setprecision(4) << diameter << " " << circumference << " " << area << " " << std::endl;

    return 0;
}
