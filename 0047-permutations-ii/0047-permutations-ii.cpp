class Solution {
public:
    void help(vector<int>& nums,int idx,vector<vector<int>>&ans){
        if(idx == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i =idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            help(nums,idx+1,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        help(nums,0,ans);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};