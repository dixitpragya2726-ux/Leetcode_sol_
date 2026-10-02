class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>s;
        int count =0;
        int ans = INT_MAX;
        for(int i=0;i<text.size();i++){
            s[text[i]]++;
        }
        ans = min(ans, s['b']);
        ans = min(ans, s['a']);
        ans = min(ans, s['l'] / 2);
        ans = min(ans, s['o'] / 2);
        ans = min(ans, s['n']);
        
        return ans;
        
    }
};