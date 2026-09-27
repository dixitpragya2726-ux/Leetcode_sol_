class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>res;
        string p = "";
        int x =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                res.push(i);
            }
            if(s[i]==')'){
                if(!res.empty()){
                     x = res.top();
                }
                reverse(s.begin()+x+1,s.begin()+i);
                res.pop();
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i] ==')' || s[i]=='('){
                continue;
            }
            p.push_back(s[i]);
        }
        return p;
    }
};