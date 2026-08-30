class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int x = *min_element(nums.begin(),nums.end());
        int y = *max_element(nums.begin(),nums.end());
        int maxy = 0;
        int minx = 0;
        int n = nums.size();
        for(int i =0;i<nums.size();i++){
            if(nums[i]==x){
                minx = i;
            }
            else if(nums[i]==y){
                maxy = i;
            }
        }

        return min({max(minx,maxy)+1,max(n-minx,n-maxy),min(minx+n+1-maxy,maxy+n+1-minx)});

    }
};