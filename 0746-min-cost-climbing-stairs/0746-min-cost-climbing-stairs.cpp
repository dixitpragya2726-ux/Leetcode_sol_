class Solution {
public:
    int help(vector<int>& cost,int i,vector<int>&dp){
        if(i>=cost.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int in = cost[i] + help(cost,i+1,dp);
        int ex = cost[i]+help(cost,i+2,dp);
        dp[i] = min(in,ex);
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>res(cost.size()+1,-1);
        int ans = min(help(cost,0,res),help(cost,1,res));
        return ans;  
    }
};