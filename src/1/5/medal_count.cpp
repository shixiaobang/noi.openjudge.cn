#include <iostream>
#include <vector>
#include <numeric>

using std::accumulate;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char const *argv[])
{
    int days;
    cin >> days;

    vector<int> gold;
    vector<int> sliver;
    vector<int> bronze;

    int input;

    for (int i = 0; i < days; i++)
    {
        cin >> input;
        gold.push_back(input);

        cin >> input;
        sliver.push_back(input);

        cin >> input;
        bronze.push_back(input);
    }

    int gold_total;
    int sliver_total;
    int bronze_total;

    gold_total = accumulate(gold.begin(), gold.end(), 0);
    sliver_total = accumulate(sliver.begin(), sliver.end(), 0);
    bronze_total = accumulate(bronze.begin(), bronze.end(), 0);

    int medals;
    medals = gold_total + sliver_total + bronze_total;

    cout << gold_total << " " << sliver_total << " " << bronze_total << " " << medals << endl;

    return 0;
}
