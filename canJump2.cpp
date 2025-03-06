#include <vector>
#include <iostream>
using namespace std;

int canJump(vector<int> &nums){
int maxReach=0;
int currentEnd=0;
int jumps = 0;
int n=nums.size();

for(int i=0;i<n-1;i++){
    maxReach=max(maxReach,i+nums[i]);

    if(currentEnd==i){
        jumps++;
        currentEnd=maxReach;
    }
    if (currentEnd >= n - 1) break;
}
}