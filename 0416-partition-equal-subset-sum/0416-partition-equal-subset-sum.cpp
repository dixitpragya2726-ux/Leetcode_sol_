class Solution {
public:
    bool help(int trgt,vector<int>& nums,int idx,vector<vector<int>>&dp){
        if(trgt == 0){
            return 1;
        }
        if(idx>=nums.size()){
            return 0;
        }
        if(trgt < 0){
            return 0;
        }
        if(dp[idx][trgt] != -1){
            return dp[idx][trgt];
        }
        int inc = help(trgt-nums[idx],nums,idx+1,dp);
        int ex = help(trgt,nums,idx+1,dp);
        dp[idx][trgt] = inc||ex;
        return dp[idx][trgt];

    }
    bool canPartition(vector<int>& nums) {
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        if(sum%2 != 0){
            return false;
        }
        int trgt = sum/2;

        vector<vector<int>>dp(nums.size(),vector<int>(trgt+1,-1));
        
        bool ans = help(trgt,nums,0,dp);
        return ans;
    }
};