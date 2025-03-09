#include <unordered_map>
#include <vector>
using namespace std;
vector<int> twoSum(int target, vector<int> &nums)
{
    unordered_map<int, int> numIndex;
    int complement;
    for (int i = 0; i < nums.size(); i++)
    {
        complement = target - nums[i];

        if (numIndex.count(complement))
        {
            return {i, numIndex[complement]};
        }

        numIndex[nums[i]] = i;
    }
    return {};
}