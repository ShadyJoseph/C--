#include<unordered_map>
#include<vector>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums,int k){
    unordered_map<int,int> valueLastSeen;
    for(int i=0;i<nums.size();i++){
        if(valueLastSeen.count(nums[i])){
            if(i-valueLastSeen[nums[i]]<=k){
                return true;
            }
        }
        valueLastSeen[nums[i]]=i;
    }
return false;
}