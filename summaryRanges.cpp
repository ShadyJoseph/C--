#include <vector>
#include <string>
using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> result;
    if (nums.empty())
        return result;
    int start=nums[0];
    for(int i=1;i<nums.size();i++){

        if(nums[i]!=nums[i-1]+1){
            if (start == nums[i - 1])
            result.push_back(to_string(start)); // Single number
        else
            result.push_back(to_string(start) + "->" + to_string(nums[i - 1])); // Range
        
        start = nums[i]; // Start a new range
    }
    }



    // Handle the last range
    if (start == nums.back())
        result.push_back(to_string(start));
    else
        result.push_back(to_string(start) + "->" + to_string(nums.back()));

    return result;
}
