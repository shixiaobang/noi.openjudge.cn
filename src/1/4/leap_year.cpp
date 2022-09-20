#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int year;
    cin >> year;

    if (year % 4 == 0)
    {
        if ((year % 100 == 0) && (year % 400 != 0))
        {
            cout << "N" << endl;
        }
        else
        {
            if (year % 3200 == 0)
            {
                cout << "N" << endl;
            }
            else
            {
                cout << "Y" << endl;
            }
        }
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
