#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int years;
    double population = 0;

    std::cin >> population >> years;

    for (int i = 0; i < years; i++)
    {
        population += population * 0.001;
    }

    std::cout << std::fixed << std::setprecision(4) << population << std::endl;

    return 0;
}
