#include <vector>
#include <unordered_map>
#include <cstdlib>
using namespace std;

class RandomizedSet
{
private:
    unordered_map<int, int> valuesToIndex;
    vector<int> values;

public:
    RandomizedSet() {}
    bool insert(int val)
    {
        if (valuesToIndex.count(val))
            return false;
        values.push_back(val);
        valuesToIndex[val] = values.size() - 1;
        return true;
    }
    bool remove(int val)
    {
        if (!valuesToIndex.count(val))
            return false;
        int lastval = values.back();
        int index = valuesToIndex[val];
        values[index] = lastval;
        valuesToIndex[lastval] = index;
        values.pop_back();
        valuesToIndex.erase(val);
        return true;
    }
    int getRandom()
    {
        return values[rand() % values.size()];
    }
};