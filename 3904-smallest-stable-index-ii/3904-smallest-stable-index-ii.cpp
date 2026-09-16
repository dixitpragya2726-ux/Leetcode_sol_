class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = INT_MIN;
        int ans = INT_MAX;
        vector<int>suf(n);
        suf[n-1] = nums[n-1];
        for(int i =n-2;i>=0;i--){
            suf[i] = min(suf[i+1],nums[i]);
        }
        for(int i =0;i<n;i++){
            mx = max(mx,nums[i]);
            if(mx-suf[i]<=k){
                ans = min(ans,i);
            }
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};