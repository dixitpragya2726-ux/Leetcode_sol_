class Solution {
public:
    int help(vector<int>& nums, int k){
        int i =0;
        int cnt = 0;
        unordered_map<int,int> res;
        for(int j =0;j<nums.size();j++){
            res[nums[j]]++;
            while(res.size()>k){
                res[nums[i]]--;
                if(res[nums[i]]==0){
                    res.erase(nums[i]);
                }
                i++;
            }
                cnt+=j-i+1; ;
            
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return help(nums,k) - help(nums,k-1);

    }
};