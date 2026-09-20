class Solution {
public:
    int reverseDegree(string s) {
        int product = 1;
        int sum =0;
        for(int i =0;i<s.size();i++){
            int dg = 26-(s[i]-'a');
            product = dg*(i+1);
            sum+=product;
        }
        return sum;
    }
};