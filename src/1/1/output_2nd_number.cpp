#include <iostream>
#include <array>

int main(int argc, char const *argv[])
{
    std::array<int, 3> numbers;

    for (int i = 0; i < numbers.size(); i++)
    {
        std::cin >> numbers.at(i);
    }

    std::cout << numbers.at(1) << std::endl;

    return 0;
}
