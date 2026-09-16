#include<iostream>
#include<vector>

using namespace std;

class Solution {
    
public:
Solution(){
        
    }
vector<int>dp;
    int HouseRobber(vector<int>&nums , int i){
      if(i==nums.size()-1) return nums[i];
      if(i== nums.size()-2) return max(nums[i],nums[i+1]);
      if(dp[i]!=-1) return dp[i];
      return dp[i] = max(nums[i]+HouseRobber(nums,i+2),HouseRobber(nums,i+1));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.resize(105,-1);
        return HouseRobber(nums , 0);
    }
};


int main(){
    Solution sp = new Solution();
    vector
}