class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<vector<int>>res(101);
        for(int i = 0;i<nums.size();i++){
            res[nums[i]].push_back(i);
        }
        int cnt =0;
        for(int x =1;x<101;x++){
            if(res[x].size() == 3){
                int i = res[x][0];
                int j = res[x][1];
                int k = res[x][2];
                if(j-i == k-j){
                    cnt++;
                }

            }
        }
        return cnt;
    }
};