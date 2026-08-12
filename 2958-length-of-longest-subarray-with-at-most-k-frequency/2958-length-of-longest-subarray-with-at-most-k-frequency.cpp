class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> res;
        int i =0;
        int j = 0;
        int n = nums.size();
        int max_len = INT_MIN;
        while(j<n){
            res[nums[j]]++;
            if(res[nums[j]]>k){
                while(res[nums[j]]>k && i<nums.size()){
                    res[nums[i]]--;
                    i++;
                }
            }
            if(res[nums[j]]<=k){
                 max_len = max(max_len,j-i+1);
            }
           
            j++;
        }
        if(max_len == INT_MIN){
            return 1;
        }
        return max_len;
    }
};