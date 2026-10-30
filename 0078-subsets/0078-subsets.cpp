class Solution {
public:
    void help(vector<int>& nums,int i, vector<int>&ans,vector<vector<int>>&res){
        if(i == nums.size()){
            res.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        help(nums,i+1,ans,res);
        ans.pop_back();
        help(nums,i+1,ans,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ans;
        help(nums,0,ans,res);
        return res;
    }
};