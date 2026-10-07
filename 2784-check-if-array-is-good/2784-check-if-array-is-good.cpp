class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int x = *max_element(nums.begin(),nums.end());
        if(nums.size()<x){
            return false;
        }
        if(n<2){
            return false;
        }
        sort(nums.begin(),nums.end());
            for(int i=1;i<nums.size()-1;i++){
                if(nums[i]-nums[i-1]!=1){
                    return false;
                }
            }
        if(nums[n-2] == nums[n-1]){
            return true;
        }
        return false;
    }
};