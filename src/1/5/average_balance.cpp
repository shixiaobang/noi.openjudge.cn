#include <iostream>
#include <iomanip>
#include <array>
#include <numeric>

int main(int argc, char const *argv[])
{
    std::array<double, 12> balance;

    for (int i = 0; i < balance.size(); i++)
    {
        std::cin >> balance.at(i);
    }

    double average;
    average = std::accumulate(balance.begin(), balance.end(), 0.0) / balance.size();

    std::cout << std::fixed << std::setprecision(2) << "$" << average << std::endl;

    return 0;
}
