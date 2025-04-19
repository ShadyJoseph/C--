#include <vector>
#include<unordered_map>
using namespace std;
int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> counts;
    int operations = 0;

    for (int num : nums) {
        int target = k - num;
        if (counts[target] > 0) {
            // Found a pair
            operations++;
            counts[target]--; // Use up one target
        } else {
            counts[num]++; // Save current num for future pairings
        }
    }

    return operations;
}