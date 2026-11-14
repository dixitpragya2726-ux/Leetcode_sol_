class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum =0;
        int ans =   INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum =0;
            for(int j =i;j<nums.size()&& j-i+1<=r;j++){
                sum+= nums[j];
                if(j-i+1 >= l && sum>0){        
                    ans = min(ans,sum);
                }
            }
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};