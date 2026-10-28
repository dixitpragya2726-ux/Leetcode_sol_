class Solution {
public:
    int help(vector<vector<int>>& mat, int target,int row,int sum,vector<vector<int>>&dp){
        int ans = INT_MAX;
        if(row>= mat.size()){
            return abs(target-sum);
        }
        if(dp[row][sum]!= -1){
            return dp[row][sum];
        }
        for(int i=0;i<mat[row].size();i++){
            ans = min(ans,help(mat,target,row+1,sum+mat[row][i],dp));
        }
        dp[row][sum] = ans;
        return dp[row][sum];
    }
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        
        vector<vector<int>> dp(mat.size(), vector<int>(4901, -1));
        int x = help( mat,target,0,0,dp);
        return x;
    }
};