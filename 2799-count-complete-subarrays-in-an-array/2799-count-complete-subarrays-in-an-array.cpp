class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>res;
        unordered_map<int,int>ans;
        int n = nums.size();
        int cnt =0;
        for(int i =0;i<n;i++){
            res[nums[i]]++;
        }
        int i =0;
        int j = 0;
        while(j<n){
            ans[nums[j]]++;
            while(ans.size()==res.size()&& i<n){
                cnt+= n-j;
                ans[nums[i]]--;
                if(ans[nums[i]]==0){
                    ans.erase(nums[i]);
                }
                i++;
                
            }
            j++;
            
        }
        return cnt;

    }
};