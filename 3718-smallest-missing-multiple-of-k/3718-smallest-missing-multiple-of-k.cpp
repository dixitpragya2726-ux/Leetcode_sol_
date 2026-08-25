class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int i = 1;i<=101;i++){
            int s = k*i;
            if(find(nums.begin(),nums.end(),s) != nums.end()){
                continue;
            }
            else{
                return s;
            }
        }
        return -1;
    }
};