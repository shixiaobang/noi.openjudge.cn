#include <iostream>
#include <iomanip>

#define PI 3.14

int main(int argc, char const *argv[])
{
    double radius;
    std::cin >> radius;

    double volume;
    volume = 4 * PI * radius * radius * radius / 3;

    std::cout << std::fixed << std::setprecision(2) << volume << std::endl;

    return 0;
}
