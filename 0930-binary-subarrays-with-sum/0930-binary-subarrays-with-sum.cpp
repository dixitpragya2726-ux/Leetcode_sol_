class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> res;
        int n = nums.size();
        vector<int>pre(n+1,0);
        int cnt = 0;
        
        res[0]=1;
        for(int i = 0;i<n;i++){
            pre[i+1]= pre[i]+nums[i];
        }
        for(int i =1;i<=n;i++){
            int k = pre[i]-goal;
                cnt+=res[k];
            
            res[pre[i]]++;
        }
    return cnt ;
    }
};