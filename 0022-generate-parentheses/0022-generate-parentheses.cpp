class Solution {
public:
    void help(int n,string s,vector<string>&ans,int open,int close ){
        if(open == n && close == n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            help(n,s+'(',ans,open+1,close);
            
        }
        if(close<open){
            help(n,s+')',ans,open,close+1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        help(n,"",ans,0,0);
        return ans; 
    }
};