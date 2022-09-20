#include <iostream>
#include <cmath>

#define PI 3.14159

int main(int argc, char const *argv[])
{
    int height;
    int radius;

    std::cin >> height >> radius;

    double demand = 20.0;
    double volume;
    double quotient;

    volume = PI * radius * radius * height / 1000;
    quotient = demand / volume;

    int result;
    result = ceil(quotient);

    std::cout << result << std::endl;

    return 0;
}
