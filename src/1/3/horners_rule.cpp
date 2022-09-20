#include <iostream>
#include <iomanip>
#include <array>

int main(int argc, char const *argv[])
{

    double variable;
    std::cin >> variable;

    std::array<double, 4> coefficients;

    for (int i = 0; i < coefficients.size(); i++)
    {
        std::cin >> coefficients.at(i);
    }

    double polynomial = 0;

    for (int i = 0; i < coefficients.size(); i++)
    {
        polynomial = polynomial * variable + coefficients.at(i);
    }

    std::cout << std::fixed << std::setprecision(7) << polynomial << std::endl;

    return 0;
}
