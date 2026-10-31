class Solution {
public:
     void help(vector<int>& candidates, int n,int idx,vector<int>&ans,vector<vector<int>>&res,int cnt,int k){
        if(cnt == k && n == 0){
            res.push_back(ans);
            return ;
        }
        if(cnt>k){
            return ;
        }
        if(idx >=candidates.size()){
            return ;
        }
        if(n<0){
            return  ;
        }
        ans.push_back(candidates[idx]);
        help(candidates,n-candidates[idx],idx+1,ans,res,cnt+1,k);
        ans.pop_back();
        while(idx+1<candidates.size()&& candidates[idx]== candidates[idx+1]){
            idx++;
        }
        help(candidates,n,idx+1,ans,res,cnt,k);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        vector<int>ans;
        vector<int>candidates = {1,2,3,4,5,6,7,8,9};
        sort(candidates.begin(),candidates.end());
        help(candidates,n,0,ans,res,0,k);
         return res;
    }
};