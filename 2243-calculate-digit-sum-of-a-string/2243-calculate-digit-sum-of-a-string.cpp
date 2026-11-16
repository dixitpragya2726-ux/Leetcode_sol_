class Solution {
public:
    string help(string x){
        int sum =0;
        for(int i=0;i<x.size();i++){
            sum+=x[i]-'0';
        }
        string ans = to_string(sum);

        return ans;
    }
    string digitSum(string s, int k) {
        
        int i = s.size();
       while(s.size()>k){
        string res = "";
        for(int i =0;i<s.size();i+=k){
            string x = help(s.substr(i,k));
            res+=x;
        }
        s = res;
       }
       return s;
    }
};