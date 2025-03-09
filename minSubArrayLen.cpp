#include <vector>
using namespace std;
int minSubArrayLen(int target, vector<int> nums)
{
    int left = 0;
    int sum = 0;
    int minLen = __INT_MAX__;
    for (int right = 0; right < nums.size(); right++)
    {
        sum += nums[right];
        while (sum >= target)
        {
            minLen = min(minLen, right - left + 1);
            sum -= nums[left];
            left++;
        }
    }

    return (minLen == __INT_MAX__) ? 0 : minLen;
}