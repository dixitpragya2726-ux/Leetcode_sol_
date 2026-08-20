class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long>pre(n);
        vector<int>res(n,-1);
        pre[0]=nums[0];
        for(int i =1;i<n;i++){
            pre[i]= pre[i-1]+nums[i];
        }
        for(int i =0;i<n;i++){
            if(i-k>=0 && i+k<n){
                long long l =0;
                if(i-k-1>=0){
                    l = pre[i-k-1];
                }
                else{
                    l=0;
                }
                long long  r = pre[i+k]-l;
                long long  s= 2*k+1;
                res[i]= (r)/s;
            }
            
        }
        return res;

    }
};