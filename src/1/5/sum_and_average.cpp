#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    int number;
    std::cin >> number;

    std::vector<int> numbers;
    int input;

    for (int i = 0; i < number; i++)
    {
        std::cin >> input;
        numbers.push_back(input);
    }

    int sum;
    sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    double average;
    average = (double)sum / number;

    std::cout << sum << " " << std::fixed << std::setprecision(5) << average << std::endl;

    return 0;
}
