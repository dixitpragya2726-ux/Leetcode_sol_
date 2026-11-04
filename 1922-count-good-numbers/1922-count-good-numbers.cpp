class Solution {
public:
    long long  pow(long long y,long long n){
        if(y==0){
            return 1;
        }
        if(y%2==0){
            long long temp = pow(y/2,n);
            return (temp*temp)%1000000007;
        }
        long long x = pow(y/2,n);
        return (x*x*n)%1000000007;

    }
    int countGoodNumbers(long long n) {
        if(n==1){
            return 5;
        }
        if(n%2 == 0){
            long long  x = pow(n/2,5);
            long long y = pow(n/2,4);
            return (x*y)%1000000007;

        }
        long long x = pow((n+1)/2,5);
        long long y = pow(n/2,4);
        return (x*y)%1000000007;
    }
};