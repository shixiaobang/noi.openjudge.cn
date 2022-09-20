#include <iostream>

int main(int argc, char const *argv[])
{
    int score_1;
    int score_2;

    std::cin >> score_1 >> score_2;

    int flag = (score_1 < 60 && score_2 >= 60) || (score_1 >= 60 && score_2 < 60);

    if (flag)
    {
        std::cout << 1 << std::endl;
    }
    else
    {
        std::cout << 0 << std::endl;
    }

    return 0;
}
