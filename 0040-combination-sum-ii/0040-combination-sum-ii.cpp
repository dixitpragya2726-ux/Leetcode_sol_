class Solution {
public:
     void help(vector<int>& candidates, int target,int idx,vector<int>&ans,vector<vector<int>>&res){
        if(target == 0){
            res.push_back(ans);
            return ;
        }
        if(idx >=candidates.size()){
            return ;
        }
        if(target<0){
            return  ;
        }
        ans.push_back(candidates[idx]);
        help(candidates,target-candidates[idx],idx+1,ans,res);
        ans.pop_back();
        while(idx+1<candidates.size()&& candidates[idx]== candidates[idx+1]){
            idx++;
        }
        help(candidates,target,idx+1,ans,res);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
         vector<int>ans;
         sort(candidates.begin(),candidates.end());
         
         help(candidates,target,0,ans,res);
        
         return res;
    }
};