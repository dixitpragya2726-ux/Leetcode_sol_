class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        vector<int> pre(n,0);
        
        
        pre[0] = nums[0];
        for(int i =1;i<nums.size();i++){
            pre[i] = pre[i-1]+nums[i];
        }
        int ttl = pre[n-1];
        
        int lsum = 0;
        for(int i =0;i<nums.size();i++){
            if(i==0){
                lsum = 0;
            }
            else{
                lsum = pre[i-1];
            }
              
            int rsum = ttl-pre[i];
            res.push_back(abs(lsum-rsum));
        }
        return res;
    }
};