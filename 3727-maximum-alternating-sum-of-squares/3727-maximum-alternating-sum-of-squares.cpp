class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long x =0;
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>=0&&i<nums.size()/2){
                sum-=nums[i];
            }
            else{
                sum+=nums[i];
            }
        }
        return sum;
        
    }
};