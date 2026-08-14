class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> res;
        int i =0;
        int j =0;
        int ans = INT_MIN;
        while(j<s.size()){
            res[s[j]]++;
            if(res[s[j]]>2){
                while(res[s[j]]>2 && i<s.size()){
                    res[s[i]]--;
                    i++;
                }
            }
            
            ans = max(ans,j-i+1);
            
            j++;
        }
        if(ans == INT_MIN){
            return 1;
        }
        return ans;
    }
};