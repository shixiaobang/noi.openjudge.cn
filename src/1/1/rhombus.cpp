#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
    char symbol;
    cin >> symbol;

    const int rank = 3;
    for (int i = 0; i < rank; i++)
    {
        cout << string(rank - i - 1, ' ') << string(i * 2 + 1, symbol) << endl;
    }
    for (int i = 0; i < rank - 1; i++)
    {
        cout << string(rank + i - 2, ' ') << string(rank - i * 2, symbol) << endl;
    }

    return 0;
}
