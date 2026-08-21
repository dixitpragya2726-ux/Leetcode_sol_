class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        vector<long long> pre(n+1,0);
        int i =0;
        
        long long cnt = 0;
        for(int k = 0;k<nums.size();k++){
            pre[k+1]= pre[k]+nums[k];
        }
        for(int j =0;j<nums.size();j++){
            long long  score = 1;
            long long sum = 0;
            sum = pre[j+1]-pre[i];
            score = sum*(j-i+1);
            while( i<=j && score>=k){
                i++;
                sum = pre[j+1]-pre[i];
                score = sum*(j-i+1);
            }
            if(score < k){
                cnt+= j-i+1;

            }
        }
        return cnt;
    }
};