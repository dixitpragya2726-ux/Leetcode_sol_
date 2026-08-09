class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long pre = 1;
        long long post=1;
        int n = nums.size();
        vector<int>res(n);
        for(int i =0;i<n;i++){
            res[i] = pre;
            pre*= nums[i];
        }
        for(int i = n-1;i>=0;i--){
            res[i]*=post;
            post *= nums[i];
        }
    return res;
    }
};