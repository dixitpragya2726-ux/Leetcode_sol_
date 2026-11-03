class Solution {
public:
    void mergedd(vector<int>& nums,int l,int h){
        int mid = l+(h-l)/2;
        if(l>=h){
            return;
        }
        mergedd(nums,l,mid);
        mergedd(nums,mid+1,h);
        merge(nums,l,mid,h);

    }
    void merge(vector<int>& nums,int l,int mid,int h){
        vector<int>temp;
        int i=l;
        int j = mid+1;
        while(i<=mid && j<=h){
            if(nums[i]>nums[j]){
                temp.push_back(nums[j]);
                j++;
            }
            else{
                temp.push_back(nums[i]);
                i++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=h){
            temp.push_back(nums[j]);
            j++;
        }
        for(int z = l;z<=h;z++){
            nums[z] = temp[z-l];
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        mergedd(nums,l,h);
        return nums;
    }
};