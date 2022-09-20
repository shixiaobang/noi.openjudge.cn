#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double celsius;
    double fahrenheit;

    std::cin >> fahrenheit;
    celsius = 5 * (fahrenheit - 32) / 9;

    std::cout << std::fixed << std::setprecision(5) << celsius << std::endl;

    return 0;
}
