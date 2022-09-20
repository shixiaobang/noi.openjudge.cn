#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int numerator;
    int denominator;

    std::cin >> numerator >> denominator;

    double result = (double)numerator / (double)denominator;

    std::cout << std::fixed << std::setprecision(9) << result << std::endl;

    return 0;
}
