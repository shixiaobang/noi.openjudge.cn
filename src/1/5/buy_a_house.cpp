#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    int k;
    std::cin >> n >> k;

    double price = 200.0;
    int money = n;

    int years;

    for (years = 1; years < 21; years++)
    {
        if (money < price)
        {
            money += n;
            price *= (1 + k / 100.0);
        }
        else
        {
            break;
        }
    }

    if (years < 21)
    {
        std::cout << years << std::endl;
    }
    else
    {
        std::cout << "Impossible" << std::endl;
    }

    return 0;
}
