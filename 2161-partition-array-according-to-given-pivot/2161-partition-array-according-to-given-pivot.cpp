class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> sml ;
        vector <int> big;
        int pvt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                sml.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                big.push_back(nums[i]);
            }
            else{
                pvt++;
            }
        }
        for(int i =0;i<sml.size();i++){
            nums[i]=sml[i];
        }
        for(int i = sml.size();i<sml.size()+pvt;i++){
            nums[i]=pivot;
        }
        for(int i = 0;i<big.size();i++){
            nums[i+sml.size()+pvt] = big[i];
        }
        return nums;
    }
};