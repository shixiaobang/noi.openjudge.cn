#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int k;
    int m;
    std::cin >> k >> m;

    std::vector<int> numbers;

    int input;
    for (int i = 0; i < k; i++)
    {
        std::cin >> input;
        numbers.push_back(input);
    }

    int count = 0;
    for (auto number : numbers)
    {
        if (number == m)
        {
            count++;
        }
        else
        {
            /* do nothing */
        }
    }

    std::cout << count << std::endl;

    return 0;
}
