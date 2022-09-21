#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[])
{
    int number;
    std::cin >> number;

    std::vector<int> scores;
    int input;

    for (int i = 0; i < number; i++)
    {
        std::cin >> input;
        scores.push_back(input);
    }

    int highest;
    highest = *std::max_element(scores.begin(), scores.end());

    std::cout << highest << std::endl;

    return 0;
}
