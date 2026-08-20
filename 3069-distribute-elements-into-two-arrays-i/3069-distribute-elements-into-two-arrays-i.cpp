class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>res;
        res.push_back(nums[0]);  
        int i = nums[0];
        int j = nums[1];
        for(int k =2;k<nums.size();k++){
            if(i>j){
                res.push_back(nums[k]);
                i=nums[k];
            }
            else{
                j=nums[k];
            }
        }
        for(int i =0;i<nums.size();i++){
            if(find(res.begin(),res.end(),nums[i]) == res.end()){
                res.push_back(nums[i]);
            }
            else{
                continue;
            }
        }
        return res;
    }
};