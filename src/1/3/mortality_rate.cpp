#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int confirmed;
    int deaths;

    std::cin >> confirmed >> deaths;

    double percentage = (double)deaths / (double)confirmed * 100;

    std::cout << std::fixed << std::setprecision(3) << percentage << "%" << std::endl;

    return 0;
}
