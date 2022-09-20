#include <iostream>

int main(int argc, char const *argv[])
{
    int day;
    std::cin >> day;

    int flag;
    flag = day % 2;

    if (flag == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        if (day == 7)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
