class Solution {
public:
    double ans(double x,long long n){
        if(n ==0){
            return 1;
        }
        if(n%2==0){
            double temp = ans(x,n/2);
            return temp*temp;
        }
        double sd = ans(x,n/2);
        return sd*sd*x;
    }
    double myPow(double x, int n) {
        long long k = n;
        if(n<0){
            return 1.0/ans(x,-k);
        }
        double val = ans(x,k);
        return val;
        
    }
};