#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int k;
    std::cin >> k;

    std::vector<int> numbers;

    int input;
    for (int i = 0; i < k; i++)
    {
        std::cin >> input;
        numbers.push_back(input);
    }

    int one = 0;
    int five = 0;
    int ten = 0;

    for (auto number : numbers)
    {
        if (number == 1)
        {
            one++;
        }
        else
        {
            if (number == 5)
            {
                five++;
            }
            else
            {
                if (number == 10)
                {
                    ten++;
                }
                else
                {
                    /* do nothing */
                }
            }
        }
    }

    cout << one << endl;
    cout << five << endl;
    cout << ten << endl;

    return 0;
}
