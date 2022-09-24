#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[])
{
    int rate;
    int principal;
    int years;

    std::cin >> rate >> principal >> years;

    double percent;
    percent = 1 + rate / 100.0;

    double total;
    total = pow(percent, years) * principal;

    std::cout << std::setprecision(0) << (int)total << std::endl;

    return 0;
}
