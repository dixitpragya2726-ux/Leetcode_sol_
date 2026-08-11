class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefix_sum = nums[0];
        for(int i =1;i<nums.size();i++){
            
            if(nums[i]!=nums[i-1]+1){
                break;
            }
            prefix_sum +=nums[i];
            
        }
        for(int i = prefix_sum ; i<1000000;i++){
            if(find(nums.begin(), nums.end(), i) != nums.end()){
                continue;
            }
            else{
                return i;
            }
        }
        return -1;
    }
};