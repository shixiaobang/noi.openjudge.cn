#include <iostream>

using std::string;

int main(int argc, char const *argv[])
{
    char symbol;
    std::cin >> symbol;

    const int rank = 3;
    for (int i = 0; i < rank; i++)
    {
        std::cout << string(rank - i - 1, ' ') << string(i * 2 + 1, symbol) << std::endl;
    }

    return 0;
}
