#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    int begin;
    int end;

    std::cin >> begin >> end;

    std::vector<int> numbers;

    for (int i = begin; i <= end; i++)
    {
        if (i % 17 == 0)
        {
            numbers.push_back(i);
        }
        else
        {
            /* do nothing */
        }
    }

    int sum;
    sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    std::cout << sum << std::endl;

    return 0;
}
