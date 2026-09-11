class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>res;
        long long  rem = 0;
        for(int i =0;i<word.size();i++){
            int dg = word[i]-'0';
            rem = (rem*10+dg)%m;
            
            if(rem == 0){
                res.push_back(1);
            }
            else{
                res.push_back(0);
            }

        }
       return res;
    }
};