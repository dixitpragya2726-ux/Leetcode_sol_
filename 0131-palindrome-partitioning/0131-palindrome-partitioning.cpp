class Solution {
public:
    bool check(string x){
        int i =0;
        int j = x.size()-1;
        while(i<j){
            if(x[i]!= x[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void help(string s,vector<vector<string>>&res, vector<string>&ans,int idx){
        if(idx == s.size()){
            res.push_back(ans);
            return ;
        }
        for(int i = idx;i<s.size();i++){
            string z = s.substr(idx,i-idx+1);
            if(check(z)){
                ans.push_back(z);
                help(s,res,ans,i+1);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>ans;
        help(s,res,ans,0);
        return res;

        
    }
};