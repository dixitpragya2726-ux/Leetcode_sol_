class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        int n = columnNumber;
        if(n>=1 && n<27){
            ans = 'A'+(n-1);
            return ans;
        }
        while(n>0){
            n=n-1;
            int s = n%26;
            ans += 'A'+s;
            n=n/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        }
};