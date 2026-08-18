class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==n){
            int x = *max_element(nums.begin(),nums.end());
            return x;
        }
        int ans = -1;
        if(k==1){
        unordered_map<int,int>res;
        for(int i =0;i<nums.size();i++){
            res[nums[i]]++;  
        }
        for(auto it:res){
            if(it.second == 1){
                ans = max(ans,it.first);
            }
        }
        return ans;
        }
        if(k>1&& k<n){
            unordered_map<int,int> res;
            for(int i =0;i<n;i++){
                res[nums[i]]++;
            }
            if( res[nums[0]]==1 && res[nums[n-1]]== 1){
                
                return max(nums[0],nums[n-1]);
            }
            else if(res[nums[n-1]]==1){
                return nums[n-1];
            }
            else if(res[nums[0]]==1){
                return nums[0];
            }
        }
       
      
        return -1;

    }
};