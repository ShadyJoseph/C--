#include<vector>;
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int left = 0, right = 0;
    int zeros = 0;
    int maxLen = 0;

    while (right < nums.size()) {
        // Expand the window
        if (nums[right] == 0) {
            zeros++;
        }

        // Shrink the window until we have at most k zeros
        while (zeros > k) {
            if (nums[left] == 0) {
                zeros--;
            }
            left++;
        }

        // Update max length
        maxLen = max(maxLen, right - left + 1);

        right++;
    }

    return maxLen;
}