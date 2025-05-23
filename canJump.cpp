#include <vector>
#include <iostream>
using namespace std;

bool canJump(vector<int> &nums)
{
    int maxReach = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > maxReach)
            return false;
        maxReach = max(maxReach, nums[i] + i);
        if (maxReach >= nums.size() - 1)
            return true;
    }
    return true;
}