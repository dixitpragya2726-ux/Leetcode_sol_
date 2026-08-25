class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int od =0;
        int ev = 0;
        int n = nums.size();
        int ans = 0;
        int i =0;
        for(int j =0;j<n;j++){
            if(nums[j]%2==1){
                od++;
            }
            if(od>=k){
                
                if(od>k){
                    i++;
                    od--;
                    ev =0;
                }
                while(nums[i] %2==0){
                    ev++;
                    i++;
                }
                ans+=ev+1;
            }
        }
    return ans;
    }
};