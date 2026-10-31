class Solution {
public:
    void help(vector<int>& candidates, int target,int idx,vector<vector<int>>&res,vector<int>&ans){
        if(target == 0){
            res.push_back(ans);
            return;
        }
        if(idx >=candidates.size()){
            return ;
        }
        
        if(target<0){
            return ;
        }
            ans.push_back(candidates[idx]);
            help(candidates,target-candidates[idx],idx,res,ans);
            ans.pop_back();
            help(candidates,target,idx+1,res,ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        vector<vector<int>>res;
        help(candidates,target,0,res,ans);
        return res;
    }
};