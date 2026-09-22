class Solution {
public:
    void spt(int n,vector<int>&ans){
        string s = to_string(n);
        for(int i=0;i<s.size();i++){
            ans.push_back(s[i]-'0');
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            spt(nums[i],res);
        }
        return res;
        

    }
};