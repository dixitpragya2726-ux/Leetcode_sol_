class Solution {
public:
    int reverse(int n ){
        string s = "";
        int k = n;
        while(n!=0){
            k = n%10;
            n = n/10;
            s+=to_string(k);
        }
        return stoi(s);
    }
    int mirrorDistance(int n) {
        if(n%10 == 0){
            return abs(n-reverse(n/10));
        }
        return abs(n-reverse(n));
    }
};