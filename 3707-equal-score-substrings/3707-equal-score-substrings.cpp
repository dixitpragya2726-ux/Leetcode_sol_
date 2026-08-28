class Solution {
public:
    bool scoreBalance(string s) {
        int n = s.size();
        vector<int>pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1] =  pre[i]+ (s[i]-'a'+1);
        }
        for(int i =1;i<n+1;i++){
            int x = pre[i];
            int y = pre[n]-x;
            if(x == y){
                return true;
            }
        }

    return false;  
    }
};