#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    int number;
    std::cin >> number;

    std::vector<double> dataset;
    double input;

    for (int i = 0; i < number; i++)
    {
        std::cin >> input;
        dataset.push_back(input);
    }

    double average;
    average = std::accumulate(dataset.begin(), dataset.end(), 0.0) / number;

    std::cout << std::fixed << std::setprecision(4) << average << std::endl;

    return 0;
}
