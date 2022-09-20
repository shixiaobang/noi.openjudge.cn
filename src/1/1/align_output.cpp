#include <iostream>
#include <iomanip>
#include <array>

using std::cin;
using std::cout;

using std::array;

int main(int argc, char const *argv[])
{
    array<int, 3> numbers;

    for (int i = 0; i < numbers.size(); i++)
    {
        cin >> numbers.at(i);
    }

    for (auto number : numbers)
    {
        cout << number << std::setw(8);
    }
    cout << std::endl;

    return 0;
}
