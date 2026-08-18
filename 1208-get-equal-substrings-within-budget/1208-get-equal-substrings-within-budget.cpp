class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int k =0;
        int j = 0;
        int max_len = 0;
        for(int i =0;i<s.size();i++){
            k += abs(s[i]-t[i]);
            while(k>maxCost && j<s.size()){
                k = k-abs(s[j]-t[j]);
                j++;
            }
            if(k<=maxCost){
                max_len = max(max_len,i-j+1);
            }   
        }
        return max_len;
    }
};