class Solution {
public:
    long long sumAndMultiply(int n) {
        string s= "";
        long long sum = 0;
        int k =n;
        while(n!=0){
             k = n%10;
            if(k!=0){
                s+=to_string(k);
                sum+= k;
            }
            n = n/10;
        }
        if(s==""){
            return 0;
        }
        reverse(s.begin(),s.end());
        long long x = stoi(s)*sum;
        return stoi(s)*sum;
    }
};