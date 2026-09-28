class Solution {
public:
    int maxDepth(string s) {
        int x = INT_MIN;
        int count =0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                count += 1;
                x = max(x,count);
            }
            if(s[i] == ')'){
                count-=1;
            }
        }
        if(x == INT_MIN){
            return 0;
        }
        return x;
    }
};