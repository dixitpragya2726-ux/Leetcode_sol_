class Solution {
public:
    int help(int n,vector<int>&dp){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = help(n-1,dp)+help(n-2,dp)+help(n-3,dp);
        return dp[n];
    }
    int tribonacci(int n) {
        vector<int>res(n+1,-1);
        int k = help(n,res);
        return k;
    }
};