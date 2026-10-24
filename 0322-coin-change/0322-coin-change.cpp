class Solution {
public:
    int help(vector<int>& coins, int amount,vector<int>& dp){
        int mins = INT_MAX;
        int res =0;
        if(amount==0){
            return 0;
        }
        if(amount<0){
            return INT_MAX;
        }
        if(dp[amount]!=-1){
            return dp[amount];
        }
        for(int i=0;i<coins.size();i++){
            res = help(coins,amount-coins[i],dp);
            if(res != INT_MAX){
                mins = min(mins,res+1);
            }
        }
            dp[amount] = mins;
            return dp[amount];
       
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int x = help(coins,amount,dp);
        if(x == INT_MAX){
            return -1;
        }
        return x;

    }
};