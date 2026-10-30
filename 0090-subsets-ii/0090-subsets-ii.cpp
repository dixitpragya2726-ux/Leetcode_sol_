class Solution {
public:
    void help(vector<int>& nums,int i,vector<int>&ans,set<vector<int>>&res){
        if(i == nums.size()){
            res.insert(ans);
            return;
        }
        ans.push_back(nums[i]);
        help(nums,i+1,ans,res);
        ans.pop_back();
        help(nums,i+1,ans,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ans;
        set<vector<int>>res;
        sort(nums.begin(),nums.end());
        help(nums,0,ans,res);
        return vector<vector<int>>(res.begin(),res.end());
    }
};