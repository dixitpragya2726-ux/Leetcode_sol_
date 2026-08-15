class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int max_len = 0;
        int ans = 0;
        for(int x:nums){
            ans = ans^x;
        }
        if(ans != 0){
            return nums.size(); 
        }
        for(int i =0;i<nums.size();i++){
            if(nums[i] !=0){
                return nums.size()-1;
            }
        }
        
        
        return 0;
    }
};