#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    float number;
    std::cin >> number;

    std::cout << std::fixed << std::setprecision(3) << number << std::endl;

    return 0;
}
