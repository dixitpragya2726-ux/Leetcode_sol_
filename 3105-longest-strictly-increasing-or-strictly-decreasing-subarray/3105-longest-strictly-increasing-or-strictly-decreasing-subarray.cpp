class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 0;
        int dec = 0;
        int ans = INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                inc++;
            }
            else{
                inc = 0;
            }
            if(nums[i]>nums[i+1]){
                dec++;
            }
            else{
                dec =0;
            }
            
            ans = max(ans,max(inc+1,dec+1));
        }
        if(ans == INT_MIN){
                return 1;
            }
        return ans;
    }
};