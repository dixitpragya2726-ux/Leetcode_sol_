class Solution {
public:
    bool help(vector<int>& nums,int idx,int mx){
        if(idx >= nums.size()){
            return true;
        }
        if(mx>=nums.size()-1){
            return true;
        }
        if(idx>mx){
            return false;
        }
        mx = max(mx,idx+nums[idx]);
        return  help(nums,idx+1,mx);
    }
    bool canJump(vector<int>& nums) {
        bool ans = help(nums,0,0);
        return ans;
    }
};