
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int nonZeroIndex = 0; // Pointer to track position for non-zero elements
    
    // Move non-zero elements to the front
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[nonZeroIndex]);
            nonZeroIndex++; // Move pointer forward
        }
    }
}

