class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mxl = INT_MIN;
        int res = INT_MAX;
        int n = nums.size();
        for(int i =0;i<n;i++){
            mxl = max(mxl,nums[i]);
            int minr = *min_element(nums.begin()+i,nums.end());
            if(mxl-minr <=k){
                res = min(res,i);
            }

        }
        if(res == INT_MAX){
            return -1;
        }
        return res;
    }
};