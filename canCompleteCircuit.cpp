#include <vector>
using namespace std;

int canCompleteCircuit(vector<int> &cost, vector<int> &gas)
{
    int totalGas = 0;
    int current = 0;
    int index;

    for (int i = 0; i < gas.size(); i++)
    {
        totalGas += gas[i] - cost[i];
        current += gas[i] - cost[i];
        if (current < 0)
        {
            index++;
            current = 0;
        }
    }
    return (totalGas >= 0) ? index : -1;
}