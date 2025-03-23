#include <vector>
#include <climits>
using namespace std;
bool increasingTriplet(vector<int>& nums) {
    // Keep track of smallest and second smallest numbers seen so far
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    
    // Look for a number larger than both smallest and secondSmallest
    for (int num : nums) {
        if (num <= smallest) {
            // Update smallest if we find a smaller number
            smallest = num;
        }
        else if (num <= secondSmallest) {
            // Update secondSmallest if num is larger than smallest but smaller than secondSmallest
            secondSmallest = num;
        }
        else {
            // Found a number larger than both - we have an increasing triplet
            return true;
        }
    }
    
    // No increasing triplet found
    return false;
}
