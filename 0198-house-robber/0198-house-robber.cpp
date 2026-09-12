class Solution {
public:
    int ans(vector<int>& nums,int idx,vector<int>&dp){
        int sum = 0;
        if(idx >= nums.size()){
            return 0;
        }
        if(dp[idx]!= -1){
            return dp[idx];
        }
        int inc = nums[idx]+ ans(nums,idx+2,dp);
        int exc = 0+ans(nums,idx+1,dp);
        dp[idx]= max(inc,exc);
        return dp[idx];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        int res = ans(nums,0,dp);
        return res ;
    }
};