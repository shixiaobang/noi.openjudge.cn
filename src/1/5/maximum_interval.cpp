#include <iostream>
#include <vector>
#include <algorithm>

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

    int maximum;
    maximum = *std::max_element(numbers.begin(), numbers.end());

    int minimum;
    minimum = *std::min_element(numbers.begin(), numbers.end());

    int interval;
    interval = maximum - minimum;

    std::cout << interval << std::endl;

    return 0;
}
