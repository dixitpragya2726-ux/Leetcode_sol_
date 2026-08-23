class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum =0;
        long long  cnt = 0;
        int n = nums.size();
        for(int x:nums){
            sum+=x;
        }
        vector<long long>res(n+1,0);
        for(int i =1;i<nums.size();i++){
            res[i]= res[i-1]+nums[i-1];
           
        }
        for(int i =0;i<nums.size()-1;i++){
            long long lsum = res[i+1];
            long long  rsum = sum-lsum;
            if(lsum>=rsum){
                cnt++;
            }
        }
        return (int)cnt;
    }
};