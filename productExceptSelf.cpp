#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> res(n, 1);
            
            int prefix = 1;
            int postfix = 1;
    
            // Prefix pass (store products of elements before the current index)
            for (int i = 0; i < n; i++) {
                res[i] = prefix;
                prefix *= nums[i];
            }
    
            // Suffix pass (store products of elements after the current index)
            for (int i = n - 1; i >= 0; i--) {
                res[i] *= postfix;
                postfix *= nums[i];
            }
    
            return res;
        }
    };
    
