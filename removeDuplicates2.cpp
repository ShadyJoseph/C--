#include <vector>
using namespace std;


int removeDuplicates2(vector<int>& nums){
    if(nums.size()<=2)return nums.size();
    int k=2;
    for(int i=2;i<=nums.size();i++){
        if(nums[i]!=nums[i-2]){
            nums[k++]=nums[i];
        }
    }
    return k;
}