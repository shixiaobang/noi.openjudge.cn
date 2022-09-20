#include <iostream>

int main(int argc, char const *argv[])
{
    int dividend;
    int divisor;

    std::cin >> dividend >> divisor;

    int quotient;
    quotient = dividend / divisor;

    int remainder;
    remainder = dividend % divisor;

    std::cout << quotient << " " << remainder << std::endl;

    return 0;
}
