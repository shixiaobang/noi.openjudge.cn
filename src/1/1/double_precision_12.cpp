#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    double number;
    std::cin >> number;

    std::cout << std::fixed << std::setprecision(12) << number << std::endl;

    return 0;
}
