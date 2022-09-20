#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    int number;
    std::cin >> number;

    int input;

    std::vector<int> ages;

    for (int i = 0; i < number; i++)
    {
        std::cin >> input;
        ages.push_back(input);
    }

    double average;
    average = std::accumulate(ages.begin(), ages.end(), 0.0) / number;

    std::cout << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}
