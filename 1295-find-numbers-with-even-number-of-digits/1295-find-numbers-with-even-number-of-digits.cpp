class Solution {
public:
    int cnt(int n){
        int k =0;
        while(n!=0){
            n = n/10;
            k++;
        }
        return k;
    }
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i =0;i<nums.size();i++){
            int z = cnt(nums[i]);
            if(z%2 == 0){
                ans++;
            }
        }
        return ans ;
    }
};