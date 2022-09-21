#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char const *argv[])
{
    int begin;
    int end;

    std::cin >> begin >> end;

    std::vector<int> odds;

    for (int i = begin; i <= end; i++)
    {
        if (i % 2 == 1)
        {
            odds.push_back(i);
        }
        else
        {
            /* do nothing */
        }
    }

    int sum;
    sum = std::accumulate(odds.begin(), odds.end(), 0);

    std::cout << sum << std::endl;

    return 0;
}
