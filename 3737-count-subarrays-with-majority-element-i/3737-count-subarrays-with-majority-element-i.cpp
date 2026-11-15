class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int cnt =0;
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            cnt =0;
            for(int j = i;j<nums.size();j++){
                if(nums[j]== target){
                    cnt++;
                }
                if(2*cnt>(j-i+1)){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};