class Solution {
public:
    void help(string digits,vector<string>& ans,unordered_map<char,string> & mp,string x,int idx){
        if(idx >= digits.size()){
            ans.push_back(x);
            return ;
        }
        string s = mp[digits[idx]];
        for(int i=0;i<s.size();i++){
            help(digits,ans,mp,x+s[i],idx+1);

        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> mp ={
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"},
        };
        vector<string>ans;
        help(digits,ans,mp,"",0);
        return ans;

        
    }
};