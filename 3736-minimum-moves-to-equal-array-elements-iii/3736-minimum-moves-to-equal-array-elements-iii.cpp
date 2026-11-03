class Solution {
public:
    int minMoves(vector<int>& nums) {
        int x = *max_element(nums.begin(),nums.end());
        int cnt =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                continue;
            }
            cnt += x-nums[i];
        }
        return cnt;
    }
};